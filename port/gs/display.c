/*
 * The picture: a window (SDL3) showing what the GS displays, or, with --shot, pictures saved at
 * given vertical blanks for tests (build/shot_NNNN.ppm), without a window.
 *
 * The game runs on its own host threads; this side only reads GS memory, once per vertical blank.
 */
#include <SDL3/SDL.h>
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
#include <sys/resource.h>

int gs_display(u32 *out, int max_w, int max_h, int *w, int *h);
void gs_init(void);
void vif_stats(void);
void vu_stats(void);
extern u64 gs_prims;

static u32 frame[1024 * 1024];

/* --press 600:CROSS,700:START: press a button for 6 vertical blanks at those times (tests) */
typedef struct { int at; u16 btn; } Press;
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
        for (size_t i = 0; i < sizeof button_names / sizeof *button_names; i++)
            if (!strcmp(colon + 1, button_names[i].name)) presses[npresses++] = (Press){atoi(tok), button_names[i].bit};
    }
}

static u16 scripted(u32 vb) {
    u16 b = 0;
    for (int i = 0; i < npresses; i++)
        if ((int)vb >= presses[i].at && (int)vb < presses[i].at + 6) b |= presses[i].btn;
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
int display_shots(const int *at, int n) {
    gs_init();
    for (int k = 0; k < n; k++) {
        u32 seen = 0;
        while ((int)kernel_vblank_count() < at[k]) {
            pad_buttons[0] = scripted(kernel_vblank_count());
            if (kernel_vblank_count() != seen) { seen = kernel_vblank_count(); panel_update(); }
            usleep(2000);
        }
        int w, h;
        gs_display(frame, 1024, 1024, &w, &h);
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
    snprintf(panel.line[0], 96, "game %4.1f fps   vblank %4.1f Hz", frames / dt, (kernel_vblank_count() - vb0) / dt);
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
    SDL_FRect bg = {4, 4, 8 * 46 + 8, 4 * 10 + 8};
    SDL_RenderFillRect(ren, &bg);
    SDL_SetRenderDrawColor(ren, 255, 255, 0, 255);
    for (int i = 0; i < 4; i++) SDL_RenderDebugText(ren, 8, 8 + i * 10, panel.line[i]);
}

/* Window: shows the displayed buffer at every vertical blank until it is closed. */
int display_window(void) {
    gs_init();
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
