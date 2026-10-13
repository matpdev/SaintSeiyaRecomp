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

int gs_display(u32 *out, int max_w, int max_h, int *w, int *h);
void gs_init(void);
void vif_stats(void);
extern u64 gs_prims;

static u32 frame[1024 * 1024];
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

/* Headless: save the picture at each vertical blank listed (ascending), then exit. */
int display_shots(const int *at, int n) {
    gs_init();
    for (int k = 0; k < n; k++) {
        while ((int)kernel_vblank_count() < at[k]) usleep(2000);
        int w, h;
        gs_display(frame, 1024, 1024, &w, &h);
        char path[64];
        snprintf(path, sizeof path, "build/shot_%04d.ppm", at[k]);
        save_ppm(path, frame, w, h);
        rt_log("gs", "%s (%dx%d), %llu primitives so far", path, w, h, (unsigned long long)gs_prims);
    }
    vif_stats();
    return 0;
}

/* Window: shows the displayed buffer at every vertical blank until it is closed. */
int display_window(void) {
    gs_init();
    if (!SDL_Init(SDL_INIT_VIDEO)) { fprintf(stderr, "SDL: %s\n", SDL_GetError()); return 1; }
    SDL_Window *win = SDL_CreateWindow("Saint Seiya: The Hades", 1280, 896, SDL_WINDOW_RESIZABLE);
    SDL_Renderer *ren = SDL_CreateRenderer(win, NULL);
    SDL_Texture *tex = NULL;
    int tw = 0, th = 0;
    u32 shown = 0;
    for (;;) {
        SDL_Event e;
        while (SDL_PollEvent(&e))
            if (e.type == SDL_EVENT_QUIT) { SDL_Quit(); _exit(0); }
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
        SDL_RenderPresent(ren);
    }
}
