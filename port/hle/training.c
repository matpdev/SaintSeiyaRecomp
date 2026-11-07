/*
 * Training: a menu (F5, or SELECT + START on a gamepad; keyboard: arrows, Z = cross, X = circle)
 * turns on, for any fight,
 *   - an idle opponent: a computer-played fighter does nothing (it still blocks nothing and
 *     never attacks), so moves and combos can be tried on it;
 *   - infinite life: a fighter's life comes back to full a second after the last hit taken,
 *     and a hit is never allowed to knock it out;
 *   - the damage of the last hit and of the combo, and the life of both;
 *   - the first player's inputs, newest first, with how many frames each was held.
 * The same menu has, for every fight, training or not, "Auto-mash (Big Bang)" and "Revival (Athena)"
 * (bigbang.c).
 * The options are kept from one run to the next; SSTHEH_TRAINING=1 (=0) sets them all on (off)
 * for this run only (training's), SSTHEH_AUTOMASH=1 (=0) the auto-mash, SSTHEH_REVIVAL=0 (=1) revivals.
 *
 * What the game has (found 2026-11, see the notes in docs/):
 *   0x002F9140 the battle's step (a0 = battle): +968/+972 the two fighters, +976/+980 their
 *              controllers; a fighter's life block is at +0x87B0 (life, a float out of 100, at +0).
 *   0x002FF490 the controllers' common step (a0 = controller), called at the end of both kinds'
 *              own step: the player's (vtable 0x004DD500, reads a pad) and the computer's
 *              (vtable 0x004DE0D0). The computer's decision is at +0x158 (u16, 0 = nothing) with
 *              +0x164..0x166, read by its query methods (0x00315610...): cleared here, the
 *              fighter is idle.
 *   0x0031E5F0 a hit's damage (a0 = life block, f12 = base damage): life -= damage, clamped
 *              to <= 100 only.
 * The hooks run on the game's thread; the menu and the picture (training_hud) on the window's.
 */
#include <SDL3/SDL.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"
#include "pad.h"

#define VT_COM 0x004DE0D0u
#define LIFE_OFF 0x87B0u
#define REFILL_FRAMES 60      /* a second without being hit: life back to full */
#define COMBO_FRAMES 45       /* hits closer than this belong to one combo */
#define HIST 14

enum { OPT_ON, OPT_IDLE, OPT_LIFE, OPT_DAMAGE, OPT_INPUTS, OPT_MASH, OPT_REVIVAL, NOPT };
static const char *opt_name[NOPT] = {"Training mode", "Opponent (computer)", "Infinite life", "Show damage", "Show inputs",
                                     "Auto-mash (Big Bang)", "Revival (Athena)"};
static volatile int opt[NOPT];
static volatile int menu_open, menu_sel;

u32 kernel_vblank_count(void);

/* ---- game side (game thread) */
static u32 battle, battle_seen;             /* the battle object, the vertical blank it last ran */
static volatile u32 battle_alive;           /* the battle object until it is freed */
static u32 frame_no;
typedef struct {
    u32 block;                              /* life block */
    float before;                           /* life before the hit being applied, -1: none */
    u32 last_hit;                           /* frame of the last hit taken */
    float hit, combo;
    int hits;
} Side;
static Side side[2];
typedef struct { u16 buttons, frames; } Input;
static Input hist[HIST];
static int nhist;

static pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
static struct {                             /* what the HUD shows, copied under the lock */
    int in_fight;
    float life[2], hit[2], combo[2];
    int hits[2];
    Input hist[HIST];
    int nhist;
} shown;

static float rdf(Ctx *c, u32 a) { u32 u = rd32(c, a); float f; memcpy(&f, &u, 4); return f; }
static void wrf(Ctx *c, u32 a, float f) { u32 u; memcpy(&u, &f, 4); wr32(c, a, u); }

void display_config_path(char *p, size_t n, const char *name);     /* display.c */

/* The options are kept in ~/.local/share/sstheh/training: a 0 or 1 per option. */
static void save(void) {
    char path[1100];
    display_config_path(path, sizeof path, "training");
    FILE *f = fopen(path, "w");
    if (!f) return;
    for (int i = 0; i < NOPT; i++) fputc('0' + !!opt[i], f);
    fputc('\n', f);
    fclose(f);
}

static void init(void) {
    static int done;
    if (done) return;
    done = 1;
    opt[OPT_IDLE] = opt[OPT_LIFE] = opt[OPT_DAMAGE] = opt[OPT_INPUTS] = 1;   /* once training is turned on */
    opt[OPT_REVIVAL] = 1;                                                     /* as the game */
    const char *e = getenv("SSTHEH_TRAINING");
    if (e) {
        for (int i = 0; i < OPT_MASH; i++) opt[i] = atoi(e) != 0;
    } else {
        char path[1100], buf[16] = "";
        display_config_path(path, sizeof path, "training");
        FILE *f = fopen(path, "r");
        if (f) {
            if (fgets(buf, sizeof buf, f))
                for (int i = 0; i < NOPT && (buf[i] == '0' || buf[i] == '1'); i++) opt[i] = buf[i] == '1';
            fclose(f);
        }
    }
    if ((e = getenv("SSTHEH_AUTOMASH"))) opt[OPT_MASH] = atoi(e) != 0;
    if ((e = getenv("SSTHEH_REVIVAL"))) opt[OPT_REVIVAL] = atoi(e) != 0;
}

/* a fighter whose life runs out may stand up again (bigbang.c) */
int training_revival(void) {
    init();
    return opt[OPT_REVIVAL];
}

/* auto-mash (bigbang.c): in any fight, training or not */
int training_automash(void) {
    init();
    return opt[OPT_MASH];
}

static void toggle(int i) {
    opt[i] = !opt[i];
    if (!getenv("SSTHEH_TRAINING")) save();
}

/* the damage of a hit, once it has been applied */
static void settle(Ctx *c, Side *s) {
    if (s->before < 0) return;
    float d = s->before - rdf(c, s->block);
    s->before = -1;
    if (d <= 0) return;
    if (frame_no - s->last_hit > COMBO_FRAMES) { s->combo = 0; s->hits = 0; }
    s->hit = d;
    s->combo += d;
    s->hits++;
    s->last_hit = frame_no;
}

/* 0x002F9140 (before): the battle's step, once a game frame */
void hle_training_battle(Ctx *c) {
    init();
    battle = RW(4);
    battle_alive = battle & 0x01FFFFFF;
    battle_seen = kernel_vblank_count();
    frame_no++;
    for (int k = 0; k < 2; k++) {
        u32 f = rd32(c, battle + 968 + 4 * k);
        Side *s = &side[k];
        if (!f) { s->block = 0; continue; }
        if (s->block != f + LIFE_OFF) { memset(s, 0, sizeof *s); s->block = f + LIFE_OFF; s->before = -1; }
        settle(c, s);
        if (opt[OPT_ON] && opt[OPT_LIFE] && frame_no - s->last_hit >= REFILL_FRAMES && rdf(c, s->block) < 100.0f)
            wrf(c, s->block, 100.0f);
    }
    /* the first player's inputs */
    u16 b = pad_buttons[0];
    if (nhist && hist[0].buttons == b) { if (hist[0].frames < 999) hist[0].frames++; }
    else {
        memmove(hist + 1, hist, sizeof hist - sizeof *hist);
        hist[0] = (Input){b, 1};
        if (nhist < HIST) nhist++;
    }
    pthread_mutex_lock(&lock);
    shown.in_fight = 1;
    for (int k = 0; k < 2; k++) {
        shown.life[k] = side[k].block ? rdf(c, side[k].block) : 0;
        shown.hit[k] = side[k].hit;
        shown.combo[k] = side[k].combo;
        shown.hits[k] = side[k].hits;
    }
    memcpy(shown.hist, hist, sizeof hist);
    shown.nhist = nhist;
    pthread_mutex_unlock(&lock);
}

/* 0x0031E5F0 (before): a hit's damage on a life block */
void hle_training_damage(Ctx *c) {
    for (int k = 0; k < 2; k++) {
        Side *s = &side[k];
        if (!s->block || s->block != RW(4)) continue;
        settle(c, s);                       /* a hit before it in the same frame */
        if (opt[OPT_ON] && opt[OPT_LIFE] && rdf(c, s->block) < 50.0f) wrf(c, s->block, 100.0f);   /* never knocked out */
        s->before = rdf(c, s->block);
    }
}

/* 0x002FF490 (before): a controller's common step; the computer's decision cleared */
void hle_training_controller(Ctx *c) {
    if (!opt[OPT_ON] || !opt[OPT_IDLE]) return;
    u32 ctl = RW(4);
    if (rd32(c, ctl + 8) != VT_COM) return;
    wr16(c, ctl + 0x158, 0);
    wr8(c, ctl + 0x164, 0);
    wr8(c, ctl + 0x165, 0);
    wr8(c, ctl + 0x166, 0);
}

/* ---- window side */
static int in_fight(void) { return battle && kernel_vblank_count() - battle_seen < 10; }

/* A fight is on from its first step until its battle object is freed (paused too, when its step
 * doesn't run): its 2D is the HUD (gs.c). */
int fight_on(void) { return battle_alive != 0; }

/* the game's allocator frees p (port/hle/heap.c): the battle object, or the block holding it? */
void training_freed(u32 p) {
    u32 b = battle_alive;
    if (!b || p > b || b - p > 0x10000) return;
    for (u32 a = (p + 16) & ~15u; a <= b; a += 16)          /* a block ends where the next header starts */
        if (rt_ram[a] == 'M' && rt_ram[a + 1] == 'E' && rt_ram[a + 2] == 'M') return;
    battle_alive = 0;
}

/* F5 opens and closes the menu, Esc closes it; the rest goes through the pad (training_pad):
 * the keyboard's arrows, Z (cross) and X (circle) are the pad's. */
int training_key(int scancode) {
    init();
    if (scancode == SDL_SCANCODE_F5) { menu_open = !menu_open; return 1; }
    if (scancode == SDL_SCANCODE_ESCAPE && menu_open) { menu_open = 0; return 1; }
    return 0;
}

/* The first pad's buttons as the game gets them: while the menu is open it drives the menu. */
u16 training_pad(u16 b) {
    static u16 prev, swallow;               /* buttons held when the menu closed: kept from the game until let go */
    u16 down = b & ~prev;
    prev = b;
    swallow &= b;
    if ((b & PAD_SELECT) && (down & PAD_START)) { init(); menu_open = !menu_open; swallow = b; return 0; }
    if (b & PAD_SELECT) b &= (u16)~PAD_START;
    if (!menu_open) return b & ~swallow;
    if (down & PAD_UP) menu_sel = (menu_sel + NOPT - 1) % NOPT;
    if (down & PAD_DOWN) menu_sel = (menu_sel + 1) % NOPT;
    if (down & (PAD_LEFT | PAD_RIGHT | PAD_CROSS)) toggle(menu_sel);
    if (down & PAD_CIRCLE) menu_open = 0;
    swallow = b;
    return 0;
}

static void input_text(char *out, size_t n, u16 b) {
    int x = (b & PAD_RIGHT) ? 1 : (b & PAD_LEFT) ? -1 : 0, y = (b & PAD_UP) ? 1 : (b & PAD_DOWN) ? -1 : 0;
    static const char numpad[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    size_t k = (size_t)snprintf(out, n, "%c", numpad[y + 1][x + 1]);
    static const struct { u16 bit; const char *name; } names[] = {
        {PAD_SQUARE, "Sq"}, {PAD_TRIANGLE, "Tr"}, {PAD_CROSS, "X"}, {PAD_CIRCLE, "O"},
        {PAD_L1, "L1"}, {PAD_R1, "R1"}, {PAD_L2, "L2"}, {PAD_R2, "R2"}};
    for (size_t i = 0; i < sizeof names / sizeof *names && k < n; i++)
        if (b & names[i].bit) k += (size_t)snprintf(out + k, n - k, " %s", names[i].name);
}

static void box(SDL_Renderer *r, float x, float y, float w, float h) {
    SDL_SetRenderDrawColor(r, 0, 0, 0, 160);
    SDL_FRect f = {x, y, w, h};
    SDL_RenderFillRect(r, &f);
}

/* The training layer over the picture: a w x h RGBA picture (the whole screen), or 0 when
 * there is nothing to show. */
int training_hud(SDL_Surface *surf) {
    init();
    int fight = in_fight();
    if (!menu_open && !(opt[OPT_ON] && fight)) return 0;
    static SDL_Renderer *r;
    static SDL_Surface *for_surf;
    if (for_surf != surf) { if (r) SDL_DestroyRenderer(r); r = SDL_CreateSoftwareRenderer(surf); for_surf = surf; }
    if (!r) return 0;
    SDL_SetRenderDrawBlendMode(r, SDL_BLENDMODE_NONE);
    SDL_SetRenderDrawColor(r, 0, 0, 0, 0);
    SDL_RenderClear(r);
    SDL_SetRenderDrawBlendMode(r, SDL_BLENDMODE_NONE);
    float W = (float)surf->w, H = (float)surf->h;
    char line[96];
    if (opt[OPT_ON] && fight) {
        pthread_mutex_lock(&lock);
        __typeof__(shown) s = shown;
        pthread_mutex_unlock(&lock);
        if (opt[OPT_DAMAGE]) {          /* under the life bars: each side's damage taken */
            for (int k = 0; k < 2; k++) {
                float x = k ? W - 8 - 20 * 8 : 8, y = H * 0.20f;
                box(r, x - 4, y - 4, 20 * 8 + 8, 3 * 10 + 6);
                SDL_SetRenderDrawColor(r, 255, 255, 255, 255);
                snprintf(line, sizeof line, "Life   %6.1f", s.life[k]);
                SDL_RenderDebugText(r, x, y, line);
                SDL_SetRenderDrawColor(r, 255, 220, 0, 255);
                snprintf(line, sizeof line, "Hit    %6.1f", s.hit[k]);
                SDL_RenderDebugText(r, x, y + 10, line);
                snprintf(line, sizeof line, "Combo  %6.1f (%d)", s.combo[k], s.hits[k]);
                SDL_RenderDebugText(r, x, y + 20, line);
            }
        }
        if (opt[OPT_INPUTS] && s.nhist) {   /* the first player's inputs, newest at the top */
            float x = 8, y = H * 0.36f;
            box(r, x - 4, y - 4, 16 * 8 + 8, (float)s.nhist * 10 + 6);
            for (int i = 0; i < s.nhist; i++) {
                char in[48];
                input_text(in, sizeof in, s.hist[i].buttons);
                snprintf(line, sizeof line, "%-12s%3u", in, s.hist[i].frames);
                SDL_SetRenderDrawColor(r, 255, 255, 255, i ? 200 : 255);
                SDL_RenderDebugText(r, x, y + (float)i * 10, line);
            }
        }
    }
    if (menu_open) {
        float w = 40 * 8, h = (NOPT + 4) * 12, x = (W - w) / 2, y = (H - h) / 2;
        box(r, x - 8, y - 8, w + 16, h + 16);
        SDL_SetRenderDrawColor(r, 255, 220, 0, 255);
        SDL_RenderDebugText(r, x, y, "TRAINING AND OPTIONS");
        for (int i = 0; i < NOPT; i++) {
            const char *v = i == OPT_IDLE ? (opt[i] ? "idle" : "plays") : opt[i] ? "on" : "off";
            snprintf(line, sizeof line, "%c %-22s %s", i == menu_sel ? '>' : ' ', opt_name[i], v);
            SDL_SetRenderDrawColor(r, 255, 255, 255, i == menu_sel ? 255 : 170);
            SDL_RenderDebugText(r, x, y + 18 + (float)i * 12, line);
        }
        SDL_SetRenderDrawColor(r, 160, 160, 160, 255);
        SDL_RenderDebugText(r, x, y + 18 + NOPT * 12 + 6, "Cross: change  Circle: close");
    }
    SDL_RenderPresent(r);
    return 1;
}
