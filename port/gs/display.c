/*
 * The picture: a window (SDL3) showing what the GS displays, or, with --shot, pictures saved at
 * given vertical blanks for tests (build/shot_NNNN.ppm), without a window.
 *
 * The game runs on its own host threads; this side only reads GS memory, once per vertical blank.
 */
#include <SDL3/SDL.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "r5900.h"
#include "runtime.h"
#include "kernel.h"
#include "gs.h"
#include "pad.h"
#include "perf.h"
#include "gpu.h"
#include <sys/resource.h>

void gpu_set_overlay(const u32 *px, int w, int h);   /* gpu_vk.c */

int gs_display(u32 *out, int max_w, int max_h, int *w, int *h);
void gs_init(void);
void vif_stats(void);
void vu_stats(void);
extern u64 gs_prims;

static u32 frame[1024 * 1024];
static u32 render_frames;               /* pictures shown (GPU window), for the panel */

/* --press 600:CROSS,700:START,800:DOWN:20: press a button at those times for 6 vertical blanks, or for
   the given number (tests) */
typedef struct { int at, len; u16 btn; } Press;
static Press presses[64];
static int npresses;

static const struct { const char *name; u16 bit; } button_names[] = {
    {"SELECT", PAD_SELECT}, {"START", PAD_START}, {"UP", PAD_UP}, {"RIGHT", PAD_RIGHT}, {"DOWN", PAD_DOWN},
    {"LEFT", PAD_LEFT}, {"L2", PAD_L2}, {"R2", PAD_R2}, {"L1", PAD_L1}, {"R1", PAD_R1},
    {"TRIANGLE", PAD_TRIANGLE}, {"CIRCLE", PAD_CIRCLE}, {"CROSS", PAD_CROSS}, {"SQUARE", PAD_SQUARE}};

void display_set_presses(const char *spec) {
    char buf[1024];
    snprintf(buf, sizeof buf, "%s", spec);
    for (char *tok = strtok(buf, ","); tok && npresses < 64; tok = strtok(NULL, ",")) {
        char *colon = strchr(tok, ':');
        if (!colon) continue;
        *colon = 0;
        char *len = strchr(colon + 1, ':');
        if (len) *len++ = 0;
        for (size_t i = 0; i < sizeof button_names / sizeof *button_names; i++)
            if (!strcmp(colon + 1, button_names[i].name))
                presses[npresses++] = (Press){atoi(tok), len ? atoi(len) : 6, button_names[i].bit};
    }
}

static u16 scripted(u32 vb) {
    u16 b = 0;
    for (int i = 0; i < npresses; i++)
        if ((int)vb >= presses[i].at && (int)vb < presses[i].at + presses[i].len) b |= presses[i].btn;
    return b;
}

/* keyboard: arrows, Z = CROSS, X = CIRCLE, A = SQUARE, S = TRIANGLE, Q/W = L1/R1, E/R = L2/R2,
   Enter = START, Backspace = SELECT */
static u16 keyboard(void) {
    const bool *k = SDL_GetKeyboardState(NULL);
    u16 b = 0;
    if (k[SDL_SCANCODE_UP]) b |= PAD_UP;
    if (k[SDL_SCANCODE_DOWN]) b |= PAD_DOWN;
    if (k[SDL_SCANCODE_LEFT]) b |= PAD_LEFT;
    if (k[SDL_SCANCODE_RIGHT]) b |= PAD_RIGHT;
    if (k[SDL_SCANCODE_Z]) b |= PAD_CROSS;
    if (k[SDL_SCANCODE_X]) b |= PAD_CIRCLE;
    if (k[SDL_SCANCODE_A]) b |= PAD_SQUARE;
    if (k[SDL_SCANCODE_S]) b |= PAD_TRIANGLE;
    if (k[SDL_SCANCODE_Q]) b |= PAD_L1;
    if (k[SDL_SCANCODE_W]) b |= PAD_R1;
    if (k[SDL_SCANCODE_E]) b |= PAD_L2;
    if (k[SDL_SCANCODE_R]) b |= PAD_R2;
    if (k[SDL_SCANCODE_RETURN]) b |= PAD_START;
    if (k[SDL_SCANCODE_BACKSPACE]) b |= PAD_SELECT;
    return b;
}

static SDL_Gamepad *gamepad;

static u16 gamepad_buttons(void) {
    if (!gamepad) return 0;
    static const struct { SDL_GamepadButton b; u16 bit; } map[] = {
        {SDL_GAMEPAD_BUTTON_SOUTH, PAD_CROSS}, {SDL_GAMEPAD_BUTTON_EAST, PAD_CIRCLE},
        {SDL_GAMEPAD_BUTTON_WEST, PAD_SQUARE}, {SDL_GAMEPAD_BUTTON_NORTH, PAD_TRIANGLE},
        {SDL_GAMEPAD_BUTTON_LEFT_SHOULDER, PAD_L1}, {SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER, PAD_R1},
        {SDL_GAMEPAD_BUTTON_START, PAD_START}, {SDL_GAMEPAD_BUTTON_BACK, PAD_SELECT},
        {SDL_GAMEPAD_BUTTON_DPAD_UP, PAD_UP}, {SDL_GAMEPAD_BUTTON_DPAD_DOWN, PAD_DOWN},
        {SDL_GAMEPAD_BUTTON_DPAD_LEFT, PAD_LEFT}, {SDL_GAMEPAD_BUTTON_DPAD_RIGHT, PAD_RIGHT},
        {SDL_GAMEPAD_BUTTON_LEFT_STICK, PAD_L3}, {SDL_GAMEPAD_BUTTON_RIGHT_STICK, PAD_R3}};
    u16 b = 0;
    for (size_t i = 0; i < sizeof map / sizeof *map; i++)
        if (SDL_GetGamepadButton(gamepad, map[i].b)) b |= map[i].bit;
    if (SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_LEFT_TRIGGER) > 16000) b |= PAD_L2;
    if (SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_RIGHT_TRIGGER) > 16000) b |= PAD_R2;
    static const SDL_GamepadAxis axes[4] = {SDL_GAMEPAD_AXIS_RIGHTX, SDL_GAMEPAD_AXIS_RIGHTY,
                                           SDL_GAMEPAD_AXIS_LEFTX, SDL_GAMEPAD_AXIS_LEFTY};
    for (int i = 0; i < 4; i++) pad_sticks[0][i] = (u8)((SDL_GetGamepadAxis(gamepad, axes[i]) + 32768) >> 8);
    return b;
}
static u32 crt_interlace, crt_mode, crt_field;

void gs_set_crt(u32 interlace, u32 mode, u32 field) {
    crt_interlace = interlace;
    crt_mode = mode;
    crt_field = field;
}

static void save_ppm(const char *path, const u32 *px, int w, int h) {
    FILE *f = fopen(path, "wb");
    if (!f) return;
    fprintf(f, "P6\n%d %d\n255\n", w, h);
    for (int i = 0; i < w * h; i++) {
        u8 rgb[3] = {(u8)px[i], (u8)(px[i] >> 8), (u8)(px[i] >> 16)};
        fwrite(rgb, 1, 3, f);
    }
    fclose(f);
}

static void panel_update(void);

/* Headless: save the picture at each vertical blank listed (ascending), then exit. */
/* GPU renderer, headless: take the frames sealed since the last call, show the newest */
static void gpu_vblank(void) {
    if (!gpu_on) return;
    static GpuFrame *last;
    gpu_vblank_tick();
    GpuFrame *f;
    while ((f = gpu_next_frame())) {
        gpu_upload(f);
        gpu_release_frame(last);
        last = f;
    }
    if (last) gpu_render(last, NULL);
}

/* Frames shown between the game's: each draw found in both the previous frame (a) and the newest
 * (b), with the same vertices and target, gets its positions moved a fraction t of the way from a
 * to b (colours and texture coordinates are b's); draws that differ, or move too far (a cut), are
 * b's. Returns the vertices to draw b with. */
static GpuVertex *interpolate(const GpuFrame *a, const GpuFrame *b, float t) {
    static GpuVertex *out;
    static u32 cap;
    if (b->nverts > cap) { cap = b->nverts * 2; out = realloc(out, cap * sizeof *out); }
    memcpy(out, b->verts, b->nverts * sizeof *out);
    for (u32 i = 0; i < b->ndraws && i < a->ndraws; i++) {
        const GpuDraw *db = &b->draws[i], *da = &a->draws[i];
        if (da->count != db->count || da->fbp != db->fbp || da->textured != db->textured || (da->tex < -1) != (db->tex < -1))
            continue;
        const GpuVertex *va = &a->verts[da->first], *vb = &b->verts[db->first];
        int far = 0;
        for (u32 k = 0; k < db->count && !far; k++)
            far = fabsf(vb[k].x - va[k].x) > 80.0f || fabsf(vb[k].y - va[k].y) > 80.0f;
        if (far) continue;
        GpuVertex *o = &out[db->first];
        for (u32 k = 0; k < db->count; k++) {
            o[k].x = va[k].x + (vb[k].x - va[k].x) * t;
            o[k].y = va[k].y + (vb[k].y - va[k].y) * t;
            o[k].z = va[k].z + (vb[k].z - va[k].z) * t;
        }
    }
    return out;
}

int display_shots(const int *at, int n) {
    gs_init();
    if (gpu_on && (!SDL_Init(SDL_INIT_VIDEO) || gpu_init(NULL))) gpu_on = 0;
    for (int k = 0; k < n; k++) {
        u32 seen = 0;
        while ((int)kernel_vblank_count() < at[k]) {
            pad_buttons[0] = scripted(kernel_vblank_count());
            if (kernel_vblank_count() != seen) { seen = kernel_vblank_count(); panel_update(); gpu_vblank(); }
            usleep(2000);
        }
        int w, h;
        gpu_vblank();
        if (gpu_on) gpu_read_display(frame, 1024, 1024, &w, &h);
        else gs_display(frame, 1024, 1024, &w, &h);
        char path[64];
        snprintf(path, sizeof path, "build/shot_%04d.ppm", at[k]);
        save_ppm(path, frame, w, h);
        if (getenv("SSTHEH_VRAM")) {
            void gs_dump_vram(u32 *out);
            gs_dump_vram(frame);
            snprintf(path, sizeof path, "build/vram_%04d.ppm", at[k]);
            save_ppm(path, frame, 1024, 1024);
            rt_log("gs", "PMODE %llX DISPFB1 %llX DISPLAY1 %llX DISPFB2 %llX DISPLAY2 %llX",
                   (unsigned long long)gs_priv_read(0), (unsigned long long)gs_priv_read(0x70),
                   (unsigned long long)gs_priv_read(0x80), (unsigned long long)gs_priv_read(0x90),
                   (unsigned long long)gs_priv_read(0xA0));
        }
        rt_log("gs", "%s (%dx%d), %llu primitives so far", path, w, h, (unsigned long long)gs_prims);
    }
    vif_stats();
    vu_stats();
    void prof_report(void);
    prof_report();
    return 0;
}

/* ---- performance panel (F3): refreshed once a second */
typedef struct { char line[4][96]; } Panel;
static Panel panel;
static int panel_on = 1;
/* (VU1 time includes the XGKICKs it makes, which gs_ns counts too) */

static double cpu_seconds(void) {
    struct rusage ru;
    getrusage(RUSAGE_SELF, &ru);
    return ru.ru_utime.tv_sec + ru.ru_stime.tv_sec + (ru.ru_utime.tv_usec + ru.ru_stime.tv_usec) / 1e6;
}

/* Called at every vertical blank shown. A game frame is counted when primitives were drawn since
   the previous vertical blank. */
static void panel_update(void) {
    static u64 t0, prims0, gs0, vu0, last_prims;
    static u32 vb0, frames;
    static double cpu0;
    if (perf.prims != last_prims) frames++;
    last_prims = perf.prims;
    u64 now = perf_now();
    if (!t0) { t0 = now; vb0 = kernel_vblank_count(); cpu0 = cpu_seconds(); return; }
    double dt = (now - t0) / 1e9;
    if (dt < 1.0) return;
    double cpu = cpu_seconds();
    double gs = (perf.gs_ns - gs0) / 1e9, vu = (perf.vu_ns - vu0) / 1e9, total = cpu - cpu0;
    double game = total - gs - vu;
    if (game < 0) game = 0;
    static u32 rf0;
    snprintf(panel.line[0], 96, "logic %4.1f fps  display %5.1f fps  vblank %4.1f Hz", frames / dt, (render_frames - rf0) / dt,
             (kernel_vblank_count() - vb0) / dt);
    rf0 = render_frames;
    snprintf(panel.line[1], 96, "CPU %3.0f%%  GS %3.0f%%  VU1 %3.0f%%  game %3.0f%%", 100 * total / dt,
             100 * gs / dt, 100 * vu / dt, 100 * game / dt);
    snprintf(panel.line[2], 96, "%.0f primitives/s", (perf.prims - prims0) / dt);
    snprintf(panel.line[3], 96, "F3: hide");
    if (getenv("SSTHEH_PERF_LOG"))
        fprintf(stderr, "[perf %5u] %s | %s | %s\n", kernel_vblank_count(), panel.line[0], panel.line[1], panel.line[2]);
    t0 = now; prims0 = perf.prims; gs0 = perf.gs_ns; vu0 = perf.vu_ns; vb0 = kernel_vblank_count(); cpu0 = cpu;
    frames = 0;
}

static void panel_draw(SDL_Renderer *ren) {
    if (!panel_on || !panel.line[0][0]) return;
    SDL_SetRenderDrawBlendMode(ren, SDL_BLENDMODE_BLEND);
    SDL_SetRenderDrawColor(ren, 0, 0, 0, 170);
    SDL_FRect bg = {4, 4, 8 * 56 + 8, 4 * 10 + 8};
    SDL_RenderFillRect(ren, &bg);
    SDL_SetRenderDrawColor(ren, 255, 255, 0, 255);
    for (int i = 0; i < 4; i++) SDL_RenderDebugText(ren, 8, 8 + i * 10, panel.line[i]);
}

/* Window: shows the displayed buffer at every vertical blank until it is closed. */
static void overlay_update(void) {
    static SDL_Surface *surf;
    static SDL_Renderer *sr;
    if (!panel_on) { gpu_set_overlay(NULL, 0, 0); return; }
    if (!surf) {
        surf = SDL_CreateSurface(8 * 56 + 8, 4 * 10 + 8, SDL_PIXELFORMAT_ABGR8888);
        sr = SDL_CreateSoftwareRenderer(surf);
    }
    SDL_SetRenderDrawColor(sr, 0, 0, 0, 170);
    SDL_RenderClear(sr);
    SDL_SetRenderDrawColor(sr, 255, 255, 0, 255);
    for (int i = 0; i < 4; i++) SDL_RenderDebugText(sr, 4, 4 + i * 10, panel.line[i]);
    SDL_RenderPresent(sr);
    gpu_set_overlay(surf->pixels, surf->w, surf->h);
}

/* Window with the GPU renderer: as often as the screen takes pictures (or as fast as possible
 * with SSTHEH_VSYNC=0), show the game's newest frame, moved part of the way from the one before
 * it by the time since it came (SSTHEH_INTERP=0: the newest frame as it is). */
static int display_window_gpu(void) {
    SDL_Window *win = SDL_CreateWindow("Saint Seiya: The Hades", 1280, 960, SDL_WINDOW_RESIZABLE);
    if (!win || gpu_init(win)) return -1;
    int interp = !(getenv("SSTHEH_INTERP") && !atoi(getenv("SSTHEH_INTERP")));
    GpuFrame *fa = NULL, *fb = NULL;    /* the frame before, the newest */
    u64 tb = 0, period = 20000000;      /* when the newest came; time between frames (ns) */
    u32 last_vb = 0;
    int final_shown = 0;
    for (;;) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) { SDL_Quit(); _exit(0); }
            if (e.type == SDL_EVENT_GAMEPAD_ADDED && !gamepad) gamepad = SDL_OpenGamepad(e.gdevice.which);
            if (e.type == SDL_EVENT_KEY_DOWN && e.key.scancode == SDL_SCANCODE_F3) panel_on = !panel_on;
        }
        pad_buttons[0] = keyboard() | gamepad_buttons() | scripted(kernel_vblank_count());
        u32 vb = kernel_vblank_count();
        if (vb != last_vb) {
            last_vb = vb;
            gpu_vblank_tick();
            panel_update();
            static u32 last_overlay;
            if (vb - last_overlay >= 25) { last_overlay = vb; overlay_update(); }
        }
        GpuFrame *f;
        u64 now = SDL_GetTicksNS();
        while ((f = gpu_next_frame())) {
            gpu_upload(f);
            if (fb) {
                u64 dt = now - tb;
                if (dt < 5000000) dt = 5000000;
                if (dt > 100000000) dt = 100000000;
                period = (period * 3 + dt) / 4;
            }
            gpu_release_frame(fa);
            fa = fb;
            fb = f;
            tb = now;
            final_shown = 0;
        }
        if (!fb) { SDL_Delay(1); continue; }
        float t = interp && fa ? (float)(now - tb) / (float)period : 1.0f;
        if (t >= 1.0f) {
            if (final_shown) { SDL_Delay(1); continue; }
            t = 1.0f;
            final_shown = 1;
        }
        gpu_render(fb, t < 1.0f ? interpolate(fa, fb, t) : NULL);
        gpu_present();
        render_frames++;
    }
}

int display_window(void) {
    gs_init();
    if (gpu_on) {
        if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMEPAD)) { fprintf(stderr, "SDL: %s\n", SDL_GetError()); return 1; }
        if (display_window_gpu() == 0) return 0;
        fprintf(stderr, "GPU renderer unavailable, using the software one\n");
        gpu_on = 0;
    }
    if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMEPAD)) { fprintf(stderr, "SDL: %s\n", SDL_GetError()); return 1; }
    SDL_Window *win = SDL_CreateWindow("Saint Seiya: The Hades", 1280, 896, SDL_WINDOW_RESIZABLE);
    SDL_Renderer *ren = SDL_CreateRenderer(win, NULL);
    SDL_Texture *tex = NULL;
    int tw = 0, th = 0;
    u32 shown = 0;
    for (;;) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) { SDL_Quit(); _exit(0); }
            if (e.type == SDL_EVENT_GAMEPAD_ADDED && !gamepad) gamepad = SDL_OpenGamepad(e.gdevice.which);
            if (e.type == SDL_EVENT_KEY_DOWN && e.key.scancode == SDL_SCANCODE_F3) panel_on = !panel_on;
        }
        pad_buttons[0] = keyboard() | gamepad_buttons() | scripted(kernel_vblank_count());
        u32 vb = kernel_vblank_count();
        if (vb == shown) { SDL_Delay(2); continue; }
        shown = vb;
        int w, h;
        gs_display(frame, 1024, 1024, &w, &h);
        if (!tex || w != tw || h != th) {
            if (tex) SDL_DestroyTexture(tex);
            tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ABGR8888, SDL_TEXTUREACCESS_STREAMING, w, h);
            tw = w;
            th = h;
        }
        SDL_UpdateTexture(tex, NULL, frame, w * 4);
        SDL_RenderClear(ren);
        SDL_RenderTexture(ren, tex, NULL, NULL);
        panel_update();
        panel_draw(ren);
        SDL_RenderPresent(ren);
    }
}
