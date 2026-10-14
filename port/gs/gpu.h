/*
 * GPU renderer (Vulkan through SDL3's GPU API): what the GS front end (gs.c) records on the game's
 * thread, and what the window's thread replays (gpu_vk.c).
 *
 * gs.c keeps interpreting GIF packets and keeps GS memory up to date for uploads; with the GPU
 * renderer on, primitives are not rasterised there but recorded: vertices as triangles, each draw
 * with a snapshot of the state it needs. Textures are decoded from GS memory when recorded (GS
 * memory may change later in the frame) into RGBA, cached by their parameters and content; gs.c
 * decides when they are dropped.
 */
#pragma once
#include "r5900.h"

#define GPU_MAX_TEX 8192           /* texture indices are below this */

typedef struct {
    float x, y, z, _p0;       /* GS pixels; depth 0..1 */
    float r, g, b, a;         /* 0..255 */
    float s, t, q, _p1;       /* STQ, or UV in texels with q = 1 when FST */
} GpuVertex;

typedef struct {
    u32 fbp, fbw, fpsm, fbmsk;  /* FRAME (FBP in 2048-word pages) */
    u32 zbp, zpsm, zwrite, ztst;/* ZBUF; TEST.ZTE/ZTST folded: ztst 0 off, 1 never, 2 always, 3 gequal, 4 greater */
    u32 abe;                    /* blending on */
    u64 alpha;                  /* ALPHA register */
    u32 atest[4];               /* enabled, method, reference, fail mode */
    u32 textured, tfx, tcc, fst;
    s32 tex;                    /* texture index (gpu_tex), -1: none; < -1: render target (-2 - fbp) */
    u32 tw, th;                 /* texture size */
    u32 filter, wrap_u, wrap_v; /* filter: 1 bilinear; wrap: 0 repeat, 1 clamp */
    float region[4];            /* region clamp in texels, region[0] < 0: none */
    u32 scissor[4];             /* x0, x1, y0, y1 inclusive */
    u32 fba;
    u32 first, count;           /* vertices */
} GpuDraw;

typedef struct {
    u32 id;                     /* texture index, 1..GPU_MAX_TEX-1 */
    u32 w, h;
    u32 *px;                    /* RGBA, alpha in GS units (0x80 = 1.0) */
} GpuTexUpload;

typedef struct {
    GpuDraw *draws;
    u32 ndraws, cap_draws;
    GpuVertex *verts;
    u32 nverts, cap_verts;
    GpuTexUpload *uploads;
    u32 nuploads, cap_uploads;
    u32 *frees;                 /* textures no longer used (released before the uploads) */
    u32 nfrees, cap_frees;
    u64 priv[5];                /* PMODE, DISPFB1, DISPLAY1, DISPFB2, DISPLAY2 when it was sealed */
    u32 seq;                    /* sealed frames are numbered */
} GpuFrame;

extern int gpu_on;              /* the GPU renderer records instead of rasterising */

/* gs.c. A frame is sealed when the game shows a new picture (the GS's thread, in order);
   the window's thread takes sealed frames (oldest first, NULL: none) and gives them back. */
void gpu_seal_frame(void);
u32 gpu_frames_sealed(void);                    /* pictures the game has finished so far */
void gpu_vblank_tick(void);
GpuFrame *gpu_next_frame(void);
void gpu_release_frame(GpuFrame *f);
u32 gpu_tex_stats(u64 *bytes);                   /* textures alive and their decoded bytes */

/* window's thread (gpu_vk.c) */
int gpu_init(void *sdl_window);                  /* window NULL: off screen (--shot) */
void gpu_upload(GpuFrame *f);                    /* a new frame's textures (once per frame) */
void gpu_render(GpuFrame *f, const GpuVertex *verts);   /* replay a frame (verts: NULL, or moved copies) */
void gpu_present(void);                          /* show the displayed buffer in the window */
int gpu_read_display(u32 *out, int max_w, int max_h, int *w, int *h);   /* for --shot */
