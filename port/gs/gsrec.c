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

void gs_state_io(FILE *f, int save);
void vif_state_io(FILE *f, int save);
void vu_state_io(FILE *f, int save);
void gs_init(void);
u32 kernel_vblank_count(void);

enum { EV_VIF1 = 1, EV_GIF, EV_VIFTAG, EV_FLIP };
static const char magic[16] = "sstheh gsrec 1";

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
    put(EV_FLIP, NULL, 0);
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

int gsrec_replay(const char *path, int warm) {
    FILE *f = fopen(path, "rb");
    char m[16];
    if (!f || fread(m, sizeof m, 1, f) != 1 || memcmp(m, magic, sizeof m)) {
        fprintf(stderr, "%s: not a GS recording\n", path);
        return 1;
    }
    extern int gpu_on;
    gpu_on = 1;                 /* recorded for the GPU, as in the game (nothing is drawn) */
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
            gpu_seal_frame();
            GpuFrame *fr;
            double th = now_ms();
            while ((fr = gpu_next_frame())) {
                if (pictures >= (u32)warm) { h = hash_frame(h, fr); draws += fr->ndraws; sealed++; }
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
