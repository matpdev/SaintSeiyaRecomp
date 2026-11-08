/*
 * A recording of the GS thread's work, replayed off line: always the same work, to time changes to
 * the VIF / VU1 / GIF / GS code and to see whether what they draw changed.
 *
 * SSTHEH_GSREC=file (SSTHEH_GSREC_FROM=vertical blank, 9000 if not given; SSTHEH_GSREC_FRAMES=n,
 * 150): at the first picture shown from that vertical blank on, the state of the GS, VIF1 and VU1
 * is saved, then everything the GS thread is given (VIF1 and GIF DMA data, VIF codes in DMA tags,
 * pictures shown) for n pictures.
 *
 *     sstheh --gs-replay file [warm]
 *
 * runs it all again on this thread, without the game, and says how long the frames after the first
 * `warm` (30) pictures shown took (the game shows a picture more than once a frame: a frame is what
 * has draws when one is shown) and a hash of everything recorded for the GPU (draws, vertices,
 * textures): the same hash, the same pictures.
 *
 * SSTHEH_REPLAY_SHOTS=folder: the replayed frames are also drawn by the Vulkan renderer and saved
 * there (frame_NNNN.ppm, every SSTHEH_REPLAY_EVERY-th frame, 10 if not given; SSTHEH_SHOT_PRESENT=WxH:
 * as a window that size shows them): the same recording drawn by two builds of the renderer must
 * give the same pictures, which a fight played twice never does.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "r5900.h"
#include "platform.h"
#include "runtime.h"
#include "gs.h"
#include "gpu.h"

#include <SDL3/SDL.h>

void gs_state_io(FILE *f, int save);
void vif_state_io(FILE *f, int save);
void vu_state_io(FILE *f, int save);
void gs_init(void);
u32 kernel_vblank_count(void);

enum { EV_VIF1 = 1, EV_GIF, EV_VIFTAG, EV_FLIP };
static const char magic[16] = "sstheh gsrec 1";

static const u32 priv_regs[5] = {0x0000, 0x0070, 0x0080, 0x0090, 0x00A0};   /* PMODE, DISPFB1, DISPLAY1, DISPFB2, DISPLAY2 */

static FILE *out;
static int state = -1;          /* -1 not set up, 0 off or done, 1 waiting for the start, 2 recording */
static u32 from, frames, recorded;

static void put(u32 kind, const void *p, u32 bytes) {
    u32 head[4] = {kind, bytes, 0, 0};
    fwrite(head, sizeof head, 1, out);
    if (bytes) {
        static const u8 zero[16];
        fwrite(p, 1, bytes, out);
        if (bytes & 15) fwrite(zero, 1, 16 - (bytes & 15), out);   /* the data stays 16-byte aligned */
    }
}

/* dmac.c, on the GS thread: data given to VIF1 or the GIF, or VIF codes in a tag */
void gsrec_data(int ch, int tag, const u8 *p, u32 bytes) {
    if (state != 2 || !p) return;
    if (tag) { if (ch == 1) put(EV_VIFTAG, p, 8); }
    else if (ch == 1) put(EV_VIF1, p, bytes);
    else if (ch == 2) put(EV_GIF, p, bytes);
}

/* dmac.c, on the GS thread: a picture shown */
void gsrec_flip(void) {
    if (state < 0) {
        const char *e = getenv("SSTHEH_GSREC");
        state = e && *e;
        from = getenv("SSTHEH_GSREC_FROM") ? (u32)atoi(getenv("SSTHEH_GSREC_FROM")) : 9000;
        frames = getenv("SSTHEH_GSREC_FRAMES") ? (u32)atoi(getenv("SSTHEH_GSREC_FRAMES")) : 150;
    }
    if (state == 1 && kernel_vblank_count() >= from) {
        if (!(out = fopen(getenv("SSTHEH_GSREC"), "wb"))) { state = 0; return; }
        fwrite(magic, sizeof magic, 1, out);
        gs_state_io(out, 1);
        vif_state_io(out, 1);
        vu_state_io(out, 1);
        state = 2;
        rt_log("gsrec", "recording %u pictures from vertical blank %u", frames, kernel_vblank_count());
        return;
    }
    if (state != 2) return;
    u64 priv[5];                        /* the display registers: which picture is shown */
    for (int k = 0; k < 5; k++) priv[k] = gs_priv_read(priv_regs[k]);
    put(EV_FLIP, priv, sizeof priv);
    if (++recorded >= frames) {
        fclose(out);
        out = NULL;
        state = 0;
        rt_log("gsrec", "recording done");
    }
}

static u64 fnv(u64 h, const void *p, size_t n) {
    const u8 *b = p;
    for (size_t i = 0; i < n; i++) h = (h ^ b[i]) * 0x100000001B3ull;
    return h;
}

/* Draws with the same state one after the other hash as one: the hash says what is drawn, not how
 * it is cut into draws. */
static u64 hash_frame(u64 h, const GpuFrame *f) {
    GpuDraw last;
    for (u32 i = 0; i < f->ndraws; i++) {
        GpuDraw d = f->draws[i];
        d.first = d.count = 0;
        if (i == 0 || memcmp(&d, &last, sizeof d)) h = fnv(h, &d, sizeof d);
        last = d;
        h = fnv(h, f->verts + f->draws[i].first, (size_t)f->draws[i].count * sizeof *f->verts);
    }
    for (u32 i = 0; i < f->nuploads; i++) {
        const GpuTexUpload *u = &f->uploads[i];
        h = fnv(h, &u->id, sizeof u->id);
        h = fnv(h, &u->w, sizeof u->w);
        h = fnv(h, &u->h, sizeof u->h);
        if (u->pw) {
            h = fnv(h, &u->x, 5 * sizeof u->x);
            h = fnv(h, u->px, (size_t)u->pw * u->ph * 4);
        } else h = fnv(h, u->px, (size_t)u->w * u->h * 4);
    }
    return fnv(h, f->frees, (size_t)f->nfrees * sizeof *f->frees);
}

static double now_ms(void) {
    struct timespec t;
    clock_gettime(CLOCK_MONOTONIC, &t);
    return t.tv_sec * 1e3 + t.tv_nsec / 1e6;
}

/* the renderer's picture once frame n was drawn, saved as dir/frame_NNNN.ppm */
static void replay_shot(const char *dir, u32 n) {
    static u32 *px;
    int w = 0, h = 0, pw, ph;
    if (!px) px = malloc(4096 * 4096 * 4);
    const char *e = getenv("SSTHEH_SHOT_PRESENT");
    if (e && sscanf(e, "%dx%d", &pw, &ph) == 2 && pw > 0 && ph > 0 && pw <= 4096 && ph <= 4096) {
        gpu_read_presented(px, pw, ph);
        w = pw;
        h = ph;
    } else gpu_read_display(px, 1024, 1024, &w, &h);
    char file[1100];
    snprintf(file, sizeof file, "%s/frame_%04u.ppm", dir, n);
    FILE *f = fopen(file, "wb");
    if (!f) return;
    fprintf(f, "P6\n%d %d\n255\n", w, h);
    for (int i = 0; i < w * h; i++) {
        u8 rgb[3] = {(u8)px[i], (u8)(px[i] >> 8), (u8)(px[i] >> 16)};
        fwrite(rgb, 1, 3, f);
    }
    fclose(f);
}

int gsrec_replay(const char *path, int warm) {
    FILE *f = fopen(path, "rb");
    char m[16];
    if (!f || fread(m, sizeof m, 1, f) != 1 || memcmp(m, magic, sizeof m)) {
        fprintf(stderr, "%s: not a GS recording\n", path);
        return 1;
    }
    extern int gpu_on;
    gpu_on = 1;                 /* recorded for the GPU, as in the game (drawn only for SSTHEH_REPLAY_SHOTS) */
    const char *shots = getenv("SSTHEH_REPLAY_SHOTS");
    u32 every = getenv("SSTHEH_REPLAY_EVERY") ? (u32)atoi(getenv("SSTHEH_REPLAY_EVERY")) : 10;
    if (!every) every = 1;
    if (shots && (!SDL_Init(SDL_INIT_VIDEO) || gpu_init(NULL))) { fprintf(stderr, "no GPU for SSTHEH_REPLAY_SHOTS\n"); return 1; }
    gs_init();
    gs_state_io(f, 0);
    vif_state_io(f, 0);
    vu_state_io(f, 0);
    long at = ftell(f);
    fseek(f, 0, SEEK_END);
    size_t size = (size_t)(ftell(f) - at);
    fseek(f, at, SEEK_SET);
    u8 *ev = platform_aligned_alloc(64, (size + 63) & ~(size_t)63);
    if (!ev || fread(ev, 1, size, f) != size) { fprintf(stderr, "%s: cannot read\n", path); return 1; }
    fclose(f);
    u64 h = 0xCBF29CE484222325ull;
    u32 pictures = 0, sealed = 0;
    u64 draws = 0;
    double t0 = now_ms(), tw = t0, hashing = 0;     /* the hash is not part of the time */
    for (size_t i = 0; i + 16 <= size;) {
        u32 kind, bytes;
        memcpy(&kind, ev + i, 4);
        memcpy(&bytes, ev + i + 4, 4);
        const u8 *p = ev + i + 16;
        i += 16 + ((bytes + 15) & ~15u);
        switch (kind) {
        case EV_VIF1: vif1_dma(p, bytes / 16); break;
        case EV_GIF: gif_dma(p, bytes / 16); break;
        case EV_VIFTAG: vif_tag(1, p); break;
        case EV_FLIP: {
            if (bytes >= 40)                    /* (recordings made before 2026-11-08 don't have them) */
                for (int k = 0; k < 5; k++) { u64 v; memcpy(&v, p + 8 * k, 8); gs_priv_write(priv_regs[k], v); }
            gpu_seal_frame();
            GpuFrame *fr;
            double th = now_ms();
            while ((fr = gpu_next_frame())) {
                if (pictures >= (u32)warm) { h = hash_frame(h, fr); draws += fr->ndraws; sealed++; }
                static u32 nframe;
                if (shots) {
                    gpu_upload(fr);                         /* every frame drawn: the picture shown is often */
                    gpu_render(fr, NULL);                   /* the one drawn the frame before (double buffering) */
                    if (nframe % every == 0) replay_shot(shots, nframe);
                    nframe++;
                }
                gpu_release_frame(fr);
            }
            if (pictures >= (u32)warm) hashing += now_ms() - th;
            if (++pictures == (u32)warm) tw = now_ms();
            break;
        }
        }
    }
    double t1 = now_ms();
    u32 timed = pictures > (u32)warm ? pictures - (u32)warm : 0;
    printf("%u pictures shown (%u timed): %u frames, %llu draws, %.3f ms per frame, all %.0f ms, hash %016llx\n", pictures,
           timed, sealed, (unsigned long long)draws, sealed ? (t1 - tw - hashing) / sealed : 0.0, t1 - t0, (unsigned long long)h);
    return 0;
}
