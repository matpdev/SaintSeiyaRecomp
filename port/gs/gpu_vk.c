/*
 * GPU renderer, replay side: Vulkan through SDL3's GPU API, on the window's thread.
 *
 *   render targets  one colour texture per GS frame buffer address (FRAME.FBP) in use and one depth
 *                   texture per depth buffer address (ZBUF.ZBP), 1024 x 1024 GS pixels at SCALE
 *   textures        uploaded when the recorder decoded a new one; kept by id, dropped when unused
 *   blending        the GS's (A - B) * C + D mapped onto blend factors (blend_state)
 *   alpha           stored so that 0x80 is 1.0 (gs.frag), so source/destination alpha factors work
 *   present         the displayed buffer (DISPFB / DISPLAY of the enabled circuit) scaled to the window
 * Not yet: frame-buffer masks other than whole channels, destination alpha test, fog, a target sampled
 * by a draw into itself is copied first, GS -> GS copies and uploads into frame buffers.
 *
 * SDL_GPU binding sets for SPIR-V: vertex uniforms set 1, fragment samplers set 2, fragment uniforms set 3.
 */
#include <SDL3/SDL.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"
#include "gs.h"
#include "gpu.h"
#include "perf.h"

int kernel_ntsc(void);
#include "shaders.h"        /* generated from port/gs/shaders by configure.py */

#define RT_SIZE 1024
#define MAX_RT 64
#define MAX_TEX GPU_MAX_TEX

static int scale = 2;
static SDL_Window *win;
static SDL_GPUDevice *dev;
static SDL_GPUShader *vs, *fs, *pvs, *pfs;
static SDL_GPUTextureFormat depth_fmt, swap_fmt;
static SDL_GPUSampler *samplers[8];           /* bit 0 linear, bit 1 clamp u, bit 2 clamp v */
static SDL_GPUTexture *white, *scratch;
static SDL_GPUBuffer *vbuf;
static u32 vbuf_size;
static SDL_GPUTransferBuffer *vxfer;
static u32 vxfer_size;
static SDL_GPUGraphicsPipeline *present_pipe, *overlay_pipe;

typedef struct { u32 key; SDL_GPUTexture *tex; int sides; } Target;   /* sides: last frame drew a picture at the 16:9 sides */
static Target colors[MAX_RT], depths[MAX_RT];
static int ncolors, ndepths;

typedef struct { u32 id; SDL_GPUTexture *tex; u32 last_used; u32 w, h; int target; } Tex;   /* target: can be cleared */
static Tex texs[MAX_TEX];
static u32 frame_no;

typedef struct { u64 key; SDL_GPUGraphicsPipeline *p; } Pipe;
static Pipe pipes[2048];
static int npipes;

static SDL_GPUTexture *overlay;               /* the performance panel */
static SDL_GPUTexture *hud;                   /* the training layer, over the whole picture */
#define BLUR_W 192                            /* widescreen sides of a 4:3 picture, blurred (gpu_present) */
#define BLUR_H 108
static SDL_GPUTexture *blur;
static int overlay_w, overlay_h, overlay_on;
static int hud_w, hud_h, hud_on;
static SDL_GPUTexture *movie;                 /* the opening video's picture, shown instead of the game's */
static int movie_w, movie_h, movie_on;

/* ------------------------------------------------------------------------------- setup */

/* the shader formats this build has: SPIR-V (Vulkan), and MSL (Metal, macOS) when spirv-cross made it */
#ifdef SHADERS_MSL
#define SHADER_FORMATS (SDL_GPU_SHADERFORMAT_SPIRV | SDL_GPU_SHADERFORMAT_MSL)
#define SHADER(name) name##_spv, sizeof name##_spv, name##_msl, sizeof name##_msl
#else
#define SHADER_FORMATS SDL_GPU_SHADERFORMAT_SPIRV
#define SHADER(name) name##_spv, sizeof name##_spv, NULL, 0
#endif

static SDL_GPUShader *shader(const unsigned char *spv, size_t spv_size, const unsigned char *msl, size_t msl_size,
                             SDL_GPUShaderStage stage, int samplers_n, int uniforms_n) {
    SDL_GPUShaderCreateInfo ci = {0};
    if (msl && !(SDL_GetGPUShaderFormats(dev) & SDL_GPU_SHADERFORMAT_SPIRV)) {
        ci.code = msl;                  /* Metal: spirv-cross names the entry point main0 */
        ci.code_size = msl_size;
        ci.entrypoint = "main0";
        ci.format = SDL_GPU_SHADERFORMAT_MSL;
    } else {
        ci.code = spv;
        ci.code_size = spv_size;
        ci.entrypoint = "main";
        ci.format = SDL_GPU_SHADERFORMAT_SPIRV;
    }
    ci.stage = stage;
    ci.num_samplers = samplers_n;
    ci.num_uniform_buffers = uniforms_n;
    SDL_GPUShader *s = SDL_CreateGPUShader(dev, &ci);
    if (!s) rt_fatal(NULL, "GPU shader: %s", SDL_GetError());
    return s;
}

static SDL_GPUTexture *texture(u32 w, u32 h, SDL_GPUTextureFormat fmt, SDL_GPUTextureUsageFlags usage) {
    SDL_GPUTextureCreateInfo ci = {0};
    ci.type = SDL_GPU_TEXTURETYPE_2D;
    ci.format = fmt;
    ci.usage = usage;
    ci.width = w;
    ci.height = h;
    ci.layer_count_or_depth = 1;
    ci.num_levels = 1;
    ci.sample_count = SDL_GPU_SAMPLECOUNT_1;
    SDL_GPUTexture *t = SDL_CreateGPUTexture(dev, &ci);
    if (!t) rt_fatal(NULL, "GPU texture %ux%u: %s", w, h, SDL_GetError());
    return t;
}

static SDL_GPUGraphicsPipeline *simple_pipe(SDL_GPUTextureFormat fmt, int blend) {
    SDL_GPUGraphicsPipelineCreateInfo ci = {0};
    ci.vertex_shader = pvs;
    ci.fragment_shader = pfs;
    ci.primitive_type = SDL_GPU_PRIMITIVETYPE_TRIANGLELIST;
    ci.rasterizer_state.cull_mode = SDL_GPU_CULLMODE_NONE;
    SDL_GPUColorTargetDescription ct = {0};
    ct.format = fmt;
    if (blend) {
        ct.blend_state.enable_blend = true;
        ct.blend_state.src_color_blendfactor = SDL_GPU_BLENDFACTOR_SRC_ALPHA;
        ct.blend_state.dst_color_blendfactor = SDL_GPU_BLENDFACTOR_ONE_MINUS_SRC_ALPHA;
        ct.blend_state.color_blend_op = SDL_GPU_BLENDOP_ADD;
        ct.blend_state.src_alpha_blendfactor = SDL_GPU_BLENDFACTOR_ONE;
        ct.blend_state.dst_alpha_blendfactor = SDL_GPU_BLENDFACTOR_ZERO;
        ct.blend_state.alpha_blend_op = SDL_GPU_BLENDOP_ADD;
    }
    ci.target_info.color_target_descriptions = &ct;
    ci.target_info.num_color_targets = 1;
    return SDL_CreateGPUGraphicsPipeline(dev, &ci);
}

static int vsync_on = 1;

/* Waiting for the screen (vsync) or not: then pictures are made as fast as possible, the screen
 * showing the newest (mailbox: no tearing; immediate where that's all there is). */
void gpu_set_vsync(int on) {
    if (!dev || !win) return;
    SDL_GPUPresentMode m = SDL_GPU_PRESENTMODE_VSYNC;
    if (!on) m = SDL_WindowSupportsGPUPresentMode(dev, win, SDL_GPU_PRESENTMODE_MAILBOX) ? SDL_GPU_PRESENTMODE_MAILBOX
                                                                                       : SDL_GPU_PRESENTMODE_IMMEDIATE;
    if (!SDL_SetGPUSwapchainParameters(dev, win, SDL_GPU_SWAPCHAINCOMPOSITION_SDR, m)) rt_log("gpu", "present mode: %s", SDL_GetError());
    else vsync_on = on;
}

int gpu_vsync(void) { return vsync_on; }

/* Render scale for a picture this many pixels high: its height, and half as much again to average
 * down (supersampling) up to 4 (a 4096 x 4096 target per buffer), never below the picture's own
 * height (5 for a 4K window). It follows the window (F1, resizing) unless SSTHEH_SCALE fixes it. */
static int fixed_scale, want_scale;

static int scale_for(int h) {
    int s = (h * 3 / 2 + 447) / 448, n = (h + 447) / 448;
    if (s > 4) s = 4;
    if (s < n) s = n;
    if (s < 2) s = 2;
    if (s > 8) s = 8;
    return s;
}

int gpu_init(void *sdl_window) {
    const char *sc = getenv("SSTHEH_SCALE");
    win = sdl_window;
    if (sc && atoi(sc) >= 1 && atoi(sc) <= 8) { scale = atoi(sc); fixed_scale = 1; }
    else if (win) {
        int w = 1440, h = 1080;
        SDL_GetWindowSizeInPixels(win, &w, &h);
        scale = scale_for(h < w * 3 / 4 ? h : w * 3 / 4);
    }
    dev = SDL_CreateGPUDevice(SHADER_FORMATS, false, NULL);
    if (!dev) { rt_log("gpu", "no GPU device: %s", SDL_GetError()); return -1; }
    if (win && !SDL_ClaimWindowForGPUDevice(dev, win)) { rt_log("gpu", "window: %s", SDL_GetError()); return -1; }
    rt_log("gpu", "%s renderer, scale %d", SDL_GetGPUDeviceDriver(dev), scale);
    depth_fmt = SDL_GPUTextureSupportsFormat(dev, SDL_GPU_TEXTUREFORMAT_D32_FLOAT, SDL_GPU_TEXTURETYPE_2D,
                                             SDL_GPU_TEXTUREUSAGE_DEPTH_STENCIL_TARGET)
                    ? SDL_GPU_TEXTUREFORMAT_D32_FLOAT : SDL_GPU_TEXTUREFORMAT_D24_UNORM;
    swap_fmt = win ? SDL_GetGPUSwapchainTextureFormat(dev, win) : SDL_GPU_TEXTUREFORMAT_R8G8B8A8_UNORM;
    vs = shader(SHADER(gs_vert), SDL_GPU_SHADERSTAGE_VERTEX, 0, 1);
    fs = shader(SHADER(gs_frag), SDL_GPU_SHADERSTAGE_FRAGMENT, 1, 1);
    pvs = shader(SHADER(present_vert), SDL_GPU_SHADERSTAGE_VERTEX, 0, 1);
    pfs = shader(SHADER(present_frag), SDL_GPU_SHADERSTAGE_FRAGMENT, 1, 1);
    for (int i = 0; i < 8; i++) {
        SDL_GPUSamplerCreateInfo si = {0};
        si.min_filter = si.mag_filter = (i & 1) ? SDL_GPU_FILTER_LINEAR : SDL_GPU_FILTER_NEAREST;
        si.enable_anisotropy = (i & 1) != 0;          /* textures seen at an angle (floors) stay sharp */
        si.max_anisotropy = 16;
        si.mipmap_mode = SDL_GPU_SAMPLERMIPMAPMODE_NEAREST;
        si.address_mode_u = (i & 2) ? SDL_GPU_SAMPLERADDRESSMODE_CLAMP_TO_EDGE : SDL_GPU_SAMPLERADDRESSMODE_REPEAT;
        si.address_mode_v = (i & 4) ? SDL_GPU_SAMPLERADDRESSMODE_CLAMP_TO_EDGE : SDL_GPU_SAMPLERADDRESSMODE_REPEAT;
        si.address_mode_w = SDL_GPU_SAMPLERADDRESSMODE_CLAMP_TO_EDGE;
        samplers[i] = SDL_CreateGPUSampler(dev, &si);
    }
    white = texture(1, 1, SDL_GPU_TEXTUREFORMAT_R8G8B8A8_UNORM, SDL_GPU_TEXTUREUSAGE_SAMPLER);
    scratch = texture(RT_SIZE * scale, RT_SIZE * scale, SDL_GPU_TEXTUREFORMAT_R8G8B8A8_UNORM,
                      SDL_GPU_TEXTUREUSAGE_SAMPLER | SDL_GPU_TEXTUREUSAGE_COLOR_TARGET);
    present_pipe = simple_pipe(swap_fmt, 0);
    overlay_pipe = simple_pipe(swap_fmt, 1);
    /* frame rate unlocked unless SSTHEH_VSYNC=1 (F4 switches) */
    if (win) gpu_set_vsync(getenv("SSTHEH_VSYNC") && atoi(getenv("SSTHEH_VSYNC")));
    return 0;
}

/* ------------------------------------------------------------------------------- targets, textures */

static SDL_GPUTexture *target(Target *list, int *n, u32 key, int depth) {
    for (int i = 0; i < *n; i++)
        if (list[i].key == key) return list[i].tex;
    if (*n == MAX_RT) return list[0].tex;
    SDL_GPUTexture *t = depth
        ? texture(RT_SIZE * scale, RT_SIZE * scale, depth_fmt, SDL_GPU_TEXTUREUSAGE_DEPTH_STENCIL_TARGET)
        : texture(RT_SIZE * scale, RT_SIZE * scale, SDL_GPU_TEXTUREFORMAT_R8G8B8A8_UNORM,
                  SDL_GPU_TEXTUREUSAGE_SAMPLER | SDL_GPU_TEXTUREUSAGE_COLOR_TARGET);
    list[*n] = (Target){key, t, 1};
    (*n)++;
    rt_log("gpu", "new %s target %X (%d of them)", depth ? "depth" : "colour", key, *n);
    /* new targets start cleared: colour black, depth 0 (the GS's "farthest" with GEQUAL) */
    SDL_GPUCommandBuffer *cmd = SDL_AcquireGPUCommandBuffer(dev);
    if (depth) {
        SDL_GPUDepthStencilTargetInfo di = {0};
        di.texture = t;
        di.clear_depth = 0.0f;
        di.load_op = SDL_GPU_LOADOP_CLEAR;
        di.store_op = SDL_GPU_STOREOP_STORE;
        SDL_EndGPURenderPass(SDL_BeginGPURenderPass(cmd, NULL, 0, &di));
    } else {
        SDL_GPUColorTargetInfo ci = {0};
        ci.texture = t;
        ci.load_op = SDL_GPU_LOADOP_CLEAR;
        ci.store_op = SDL_GPU_STOREOP_STORE;
        if (getenv("SSTHEH_GPU_RED")) ci.clear_color = (SDL_FColor){1, 0, 0, 1};
        SDL_EndGPURenderPass(SDL_BeginGPURenderPass(cmd, &ci, 1, NULL));
    }
    SDL_SubmitGPUCommandBuffer(cmd);
    return t;
}

static SDL_GPUTexture *find_color(u32 fbp) {
    for (int i = 0; i < ncolors; i++)
        if (colors[i].key == fbp) return colors[i].tex;
    return NULL;
}

static Tex *tex_slot(u32 id) { return &texs[id % MAX_TEX]; }

/* ------------------------------------------------------------------------------- pipelines */

static SDL_GPUBlendFactor factor_c(int c, int one_minus) {
    switch (c) {
    case 0: return one_minus ? SDL_GPU_BLENDFACTOR_ONE_MINUS_SRC_ALPHA : SDL_GPU_BLENDFACTOR_SRC_ALPHA;
    case 1: return one_minus ? SDL_GPU_BLENDFACTOR_ONE_MINUS_DST_ALPHA : SDL_GPU_BLENDFACTOR_DST_ALPHA;
    default: return one_minus ? SDL_GPU_BLENDFACTOR_ONE_MINUS_CONSTANT_COLOR : SDL_GPU_BLENDFACTOR_CONSTANT_COLOR;
    }
}

/* The GS blend (A - B) * C + D, A/B/D in {Cs 0, Cd 1, 0 2}, C in {As 0, Ad 1, FIX 2}, as GPU factors. */
static void blend_state(u32 al, SDL_GPUColorTargetBlendState *b) {
    int A = al & 3, B = (al >> 2) & 3, C = (al >> 4) & 3, D = (al >> 6) & 3;
    if (A == 3) A = 2;
    if (B == 3) B = 2;
    if (D == 3) D = 2;
    if (C == 3) C = 2;
    SDL_GPUBlendFactor s = SDL_GPU_BLENDFACTOR_ONE, d = SDL_GPU_BLENDFACTOR_ZERO;
    SDL_GPUBlendOp op = SDL_GPU_BLENDOP_ADD;
    if (A == B) {                                   /* only D */
        s = D == 0 ? SDL_GPU_BLENDFACTOR_ONE : SDL_GPU_BLENDFACTOR_ZERO;
        d = D == 1 ? SDL_GPU_BLENDFACTOR_ONE : SDL_GPU_BLENDFACTOR_ZERO;
    } else if (A == 0 && B == 1 && D == 1) { s = factor_c(C, 0); d = factor_c(C, 1); }          /* Cs*C + Cd*(1-C) */
    else if (A == 0 && B == 2 && D == 1) { s = factor_c(C, 0); d = SDL_GPU_BLENDFACTOR_ONE; }   /* Cs*C + Cd */
    else if (A == 0 && B == 2 && D == 2) { s = factor_c(C, 0); d = SDL_GPU_BLENDFACTOR_ZERO; }  /* Cs*C */
    else if (A == 0 && B == 2 && D == 0) { s = factor_c(C, 0); d = SDL_GPU_BLENDFACTOR_ZERO; }  /* Cs*(1+C): approx */
    else if (A == 1 && B == 0 && D == 0) { s = factor_c(C, 1); d = factor_c(C, 0); }            /* Cd*C + Cs*(1-C) */
    else if (A == 1 && B == 2 && D == 0) { s = SDL_GPU_BLENDFACTOR_ONE; d = factor_c(C, 0); }   /* Cd*C + Cs */
    else if (A == 1 && B == 2 && D == 2) { s = SDL_GPU_BLENDFACTOR_ZERO; d = factor_c(C, 0); }  /* Cd*C */
    else if (A == 2 && B == 0 && D == 1) {                                                       /* Cd - Cs*C */
        s = factor_c(C, 0); d = SDL_GPU_BLENDFACTOR_ONE; op = SDL_GPU_BLENDOP_REVERSE_SUBTRACT;
    } else if (A == 2 && B == 1 && D == 0) {                                                     /* Cs - Cd*C */
        s = SDL_GPU_BLENDFACTOR_ONE; d = factor_c(C, 0); op = SDL_GPU_BLENDOP_SUBTRACT;
    } else if (A == 0 && B == 1 && D == 2) {                                                     /* (Cs - Cd)*C */
        s = factor_c(C, 0); d = factor_c(C, 0); op = SDL_GPU_BLENDOP_SUBTRACT;
    } else if (A == 1 && B == 0 && D == 2) {                                                     /* (Cd - Cs)*C */
        s = factor_c(C, 0); d = factor_c(C, 0); op = SDL_GPU_BLENDOP_REVERSE_SUBTRACT;
    } else if (A == 2 && B == 0 && D == 2) { s = d = SDL_GPU_BLENDFACTOR_ZERO; }                 /* -Cs*C: 0 */
    else if (A == 2 && B == 1 && D == 2) { s = d = SDL_GPU_BLENDFACTOR_ZERO; }
    else { s = factor_c(C, 0); d = factor_c(C, 1); }                                             /* rare: approximate */
    b->enable_blend = true;
    b->src_color_blendfactor = s;
    b->dst_color_blendfactor = d;
    b->color_blend_op = op;
    b->src_alpha_blendfactor = SDL_GPU_BLENDFACTOR_ONE;      /* the GS writes source alpha as it is */
    b->dst_alpha_blendfactor = SDL_GPU_BLENDFACTOR_ZERO;
    b->alpha_blend_op = SDL_GPU_BLENDOP_ADD;
}

static int debug_flags = -1;   /* SSTHEH_GPU_DEBUG: 1 no depth test, 2 no blending */

/* The alpha test's fail mode as write masks. A test that always fails (ATST NEVER) is exact: the
 * shader is told not to test and the masks do what the fail mode says. For the other methods the
 * shader discards on KEEP / ZB_ONLY, and FB_ONLY / RGB_ONLY give up depth writes for the draw. */
static void atest_masks(const GpuDraw *d, u32 *wmask, int *zwrite, int *shader_test) {
    *shader_test = d->atest[0];
    if (!d->atest[0] || d->atest[1] == 1) { *shader_test = 0; return; }        /* off, or ALWAYS */
    int never = d->atest[1] == 0;
    switch (d->atest[3]) {
    case 0: break;                                                             /* KEEP */
    case 1: *zwrite = 0; if (never) *shader_test = 0; break;                   /* FB_ONLY */
    case 2: if (never) { *wmask = 0; *shader_test = 0; } break;                /* ZB_ONLY */
    default: *zwrite = 0; *wmask &= 7; if (never) *shader_test = 0; break;     /* RGB_ONLY */
    }
}

static SDL_GPUGraphicsPipeline *pipe_for(const GpuDraw *d) {
    if (debug_flags < 0) debug_flags = getenv("SSTHEH_GPU_DEBUG") ? atoi(getenv("SSTHEH_GPU_DEBUG")) : 0;
    u32 wmask = 0xF;
    if ((d->fbmsk & 0x000000FF) == 0x000000FF) wmask &= ~1u;
    if ((d->fbmsk & 0x0000FF00) == 0x0000FF00) wmask &= ~2u;
    if ((d->fbmsk & 0x00FF0000) == 0x00FF0000) wmask &= ~4u;
    if ((d->fbmsk & 0xFF000000) == 0xFF000000 || d->fpsm == 1) wmask &= ~8u;
    int zwrite = d->zwrite, shader_test;
    atest_masks(d, &wmask, &zwrite, &shader_test);
    u64 key = (d->abe ? (d->alpha & 0xFF) | 0x100 : 0) | (u64)d->ztst << 9 | (u64)zwrite << 12 | (u64)wmask << 13;
    for (int i = 0; i < npipes; i++)
        if (pipes[i].key == key) return pipes[i].p;
    SDL_GPUGraphicsPipelineCreateInfo ci = {0};
    ci.vertex_shader = vs;
    ci.fragment_shader = fs;
    SDL_GPUVertexBufferDescription vb = {0};
    vb.slot = 0;
    vb.pitch = sizeof(GpuVertex);
    vb.input_rate = SDL_GPU_VERTEXINPUTRATE_VERTEX;
    SDL_GPUVertexAttribute at[3] = {
        {0, 0, SDL_GPU_VERTEXELEMENTFORMAT_FLOAT4, 0},
        {1, 0, SDL_GPU_VERTEXELEMENTFORMAT_FLOAT4, 16},
        {2, 0, SDL_GPU_VERTEXELEMENTFORMAT_FLOAT4, 32},
    };
    ci.vertex_input_state.vertex_buffer_descriptions = &vb;
    ci.vertex_input_state.num_vertex_buffers = 1;
    ci.vertex_input_state.vertex_attributes = at;
    ci.vertex_input_state.num_vertex_attributes = 3;
    ci.primitive_type = SDL_GPU_PRIMITIVETYPE_TRIANGLELIST;
    ci.rasterizer_state.cull_mode = SDL_GPU_CULLMODE_NONE;
    ci.rasterizer_state.fill_mode = SDL_GPU_FILLMODE_FILL;
    SDL_GPUColorTargetDescription ct = {0};
    ct.format = SDL_GPU_TEXTUREFORMAT_R8G8B8A8_UNORM;
    if (d->abe && !(debug_flags & 2)) blend_state((u32)d->alpha, &ct.blend_state);
    ct.blend_state.enable_color_write_mask = true;
    ct.blend_state.color_write_mask = (SDL_GPUColorComponentFlags)wmask;
    ci.target_info.color_target_descriptions = &ct;
    ci.target_info.num_color_targets = 1;
    ci.target_info.has_depth_stencil_target = true;
    ci.target_info.depth_stencil_format = depth_fmt;
    static const SDL_GPUCompareOp ops[5] = {SDL_GPU_COMPAREOP_ALWAYS, SDL_GPU_COMPAREOP_NEVER, SDL_GPU_COMPAREOP_ALWAYS,
                                            SDL_GPU_COMPAREOP_GREATER_OR_EQUAL, SDL_GPU_COMPAREOP_GREATER};
    ci.depth_stencil_state.enable_depth_test = !(debug_flags & 1);
    ci.depth_stencil_state.compare_op = ops[d->ztst < 5 ? d->ztst : 0];
    ci.depth_stencil_state.enable_depth_write = zwrite;
    u64 t = perf_now();
    SDL_GPUGraphicsPipeline *p = SDL_CreateGPUGraphicsPipeline(dev, &ci);
    if (!p) rt_fatal(NULL, "GPU pipeline: %s", SDL_GetError());
    perf.pipes++;
    perf.pipe_ns += perf_now() - t;
    if (npipes < (int)(sizeof pipes / sizeof *pipes)) pipes[npipes++] = (Pipe){key, p};
    return p;
}

/* ------------------------------------------------------------------------------- replay */

typedef struct {
    s32 mode[4], atest[4];
    float texsize[4], region[4];
} DrawUniforms;

static u64 up_bytes, up_count;
static SDL_GPUTransferBuffer *txfer;        /* texture uploads */
static u32 txfer_size;              /* texture uploads since the last stats line */

/* Widescreen: is this 2D drawn 3/4 as wide around the centre (kept 4:3)? Not when it crosses the
   whole width over 3D reaching the sides: a band, a fade or a flash meant to cover the screen, it
   is stretched to 16:9 with the 3D (on a picture of only 2D, a title or an illustration, it stays
   4:3 and the sides are filled by present_into). */
static int frame_wide_3d(const GpuFrame *f) {
    for (u32 i = 0; i < f->ndraws; i++)
        if (f->draws[i].sides) return 1;
    return 0;
}

static int kept_43(const GpuDraw *d, int wide_3d) { return d->flat2d && !(wide_3d && d->fullw); }

/* A 2D picture covering the whole 16:9 screen (a story scene's layer zoomed or panned past the 4:3
   screen): the frame's 2D is not cut at the 4:3 edges, so the sides show the layers' real art instead
   of the blurred picture (present_into). SSTHEH_WIDE_2D=0: cut as before. */
static int frame_wide_2d(const GpuFrame *f) {
    static int on = -1;
    if (on < 0) on = !(getenv("SSTHEH_WIDE_2D") && !atoi(getenv("SSTHEH_WIDE_2D")));
    if (!on) return 0;
    for (u32 i = 0; i < f->ndraws; i++)
        if (f->draws[i].covers) return 1;
    return 0;
}

/* The top of a fight's HUD (portraits, names, life bars, the timer between them) is made of pieces
   that fit into one another, so it is moved point by point: up to 0.45 of the half width from the
   edge (the portrait, the name) anchored to the screen's edge, the last 0.11 before the middle (the
   timer's frame) kept in the middle, and what lies between (the bar, its ornament) stretched to join
   them. x and c (the middle) in frame pixels. */
static float hud_top_x(float x, float c) {
    int right = x > c;
    float u = right ? 2.0f * c - x : x;           /* distance from the nearer edge */
    float a = 0.45f * c, b = 0.89f * c, v;
    if (u <= a) v = 0.75f * u;
    else if (u >= b) v = 0.75f * u + 0.25f * c;
    else v = 0.75f * a + (u - a) * ((0.75f * b + 0.25f * c - 0.75f * a) / (b - a));
    return right ? 2.0f * c - v : v;
}

/* A fight's HUD in widescreen: kept 4:3 in shape, but taken to the screen's sides. The top band
   (22% of the height) goes through hud_top_x; in the bottom one (from 83%: the cosmo gauge's digit
   starts at 85%) each triangle wholly in
   the left half of the frame goes to the screen's left edge and each wholly in the right half to its
   right edge (cosmo gauges), what crosses or touches the middle staying there; the rest (the pause
   menu, messages, combo counts) stays in the middle 4:3, and what of it was wholly off the 4:3
   screen stays off (not clipped at the 4:3 edges any more, it would show at the sides). SSTHEH_WIDE_HUD=0: the whole HUD in the
   middle 4:3, as before. */
static int anchored(const GpuDraw *d, int wide_3d) {
    static int on = -1;
    if (on < 0) on = !(getenv("SSTHEH_WIDE_HUD") && !atoi(getenv("SSTHEH_WIDE_HUD")));
    return on && d->fight && kept_43(d, wide_3d) && d->count % 3 == 0;
}

static void upload_verts(SDL_GPUCommandBuffer *cmd, GpuFrame *f, const GpuVertex *verts) {
    SDL_GPUCopyPass *cp = SDL_BeginGPUCopyPass(cmd);
    u32 vbytes = f->nverts * sizeof(GpuVertex);
    if (vbytes) {
        if (vbytes > vbuf_size) {
            if (vbuf) SDL_ReleaseGPUBuffer(dev, vbuf);
            vbuf_size = vbytes * 2;
            SDL_GPUBufferCreateInfo bi = {SDL_GPU_BUFFERUSAGE_VERTEX, vbuf_size, 0};
            vbuf = SDL_CreateGPUBuffer(dev, &bi);
        }
        if (vbytes > vxfer_size) {
            if (vxfer) SDL_ReleaseGPUTransferBuffer(dev, vxfer);
            vxfer_size = vbytes * 2;
            SDL_GPUTransferBufferCreateInfo ti = {SDL_GPU_TRANSFERBUFFERUSAGE_UPLOAD, vxfer_size, 0};
            vxfer = SDL_CreateGPUTransferBuffer(dev, &ti);
        }
        GpuVertex *m = SDL_MapGPUTransferBuffer(dev, vxfer, true);
        memcpy(m, verts ? verts : f->verts, vbytes);
        /* widescreen: the picture is shown 4/3 wider, so 2D is drawn 3/4 as wide around the centre */
        if (widescreen_on()) {
            int wide_3d = frame_wide_3d(f);
            for (u32 i = 0; i < f->ndraws; i++) {
                const GpuDraw *d = &f->draws[i];
                if (!kept_43(d, wide_3d)) continue;
                float c = (float)(d->fbw * 32);
                if (anchored(d, wide_3d)) {
                    float fh = (float)(d->scissor[3] - d->scissor[2] + 1);
                    float top = (float)d->scissor[2] + fh * 0.22f, bottom = (float)d->scissor[2] + fh * 0.83f;
                    for (u32 k = d->first; k < d->first + d->count; k += 3) {
                        float lo = fminf(m[k].x, fminf(m[k + 1].x, m[k + 2].x)), hi = fmaxf(m[k].x, fmaxf(m[k + 1].x, m[k + 2].x));
                        if (fmaxf(m[k].y, fmaxf(m[k + 1].y, m[k + 2].y)) < top) {
                            for (u32 j = k; j < k + 3; j++) m[j].x = hud_top_x(m[j].x, c);
                            continue;
                        }
                        float off = 0.0f;
                        if (fminf(m[k].y, fminf(m[k + 1].y, m[k + 2].y)) >= bottom)    /* touching the middle: a centred piece's half */
                            off = hi < c - 16.0f ? -0.25f * c : lo > c + 16.0f ? 0.25f * c : 0.0f;
                        else if (hi <= 0.0f || lo >= 2.0f * c) {      /* parked off the 4:3 screen (combo counts): stays off */
                            for (u32 j = k; j < k + 3; j++) m[j].x = -4.0f * c;
                            continue;
                        }
                        for (u32 j = k; j < k + 3; j++) m[j].x = c + (m[j].x - c) * 0.75f + off;
                    }
                    continue;
                }
                for (u32 k = d->first; k < d->first + d->count; k++) m[k].x = c + (m[k].x - c) * 0.75f;
            }
        }
        SDL_UnmapGPUTransferBuffer(dev, vxfer);
        SDL_GPUTransferBufferLocation src = {vxfer, 0};
        SDL_GPUBufferRegion dst = {vbuf, 0, vbytes};
        SDL_UploadToGPUBuffer(cp, &src, &dst, true);
    }
    SDL_EndGPUCopyPass(cp);
}

/* A new frame's textures: the ones it no longer needs released, the new ones uploaded. */
void gpu_upload(GpuFrame *f) {
    if (!dev || !f) return;
    SDL_GPUCommandBuffer *cmd = SDL_AcquireGPUCommandBuffer(dev);
    for (u32 i = 0; i < f->nfrees; i++) {
        Tex *t = tex_slot(f->frees[i]);
        if (t->tex) SDL_ReleaseGPUTexture(dev, t->tex);
        t->tex = NULL;
        t->id = 0;
    }
    /* the textures; those sent in part are first cleared to the colour of the rest */
    u64 total = 0;
    for (u32 i = 0; i < f->nuploads; i++) {
        GpuTexUpload *u = &f->uploads[i];
        Tex *t = tex_slot(u->id);
        int part = u->pw != 0;
        if (t->tex && (t->w != u->w || t->h != u->h || (part && !t->target))) { SDL_ReleaseGPUTexture(dev, t->tex); t->tex = NULL; }
        t->id = u->id;
        t->w = u->w;
        t->h = u->h;
        if (!t->tex) {
            t->target = part;
            t->tex = texture(u->w, u->h, SDL_GPU_TEXTUREFORMAT_R8G8B8A8_UNORM,
                             SDL_GPU_TEXTUREUSAGE_SAMPLER | (part ? SDL_GPU_TEXTUREUSAGE_COLOR_TARGET : 0));
        }
        if (part) {
            SDL_GPUColorTargetInfo ci = {0};
            ci.texture = t->tex;
            ci.load_op = SDL_GPU_LOADOP_CLEAR;
            ci.store_op = SDL_GPU_STOREOP_STORE;
            ci.clear_color = (SDL_FColor){(u->fill & 0xFF) / 255.0f, ((u->fill >> 8) & 0xFF) / 255.0f,
                                          ((u->fill >> 16) & 0xFF) / 255.0f, (u->fill >> 24) / 255.0f};
            SDL_EndGPURenderPass(SDL_BeginGPURenderPass(cmd, &ci, 1, NULL));
        }
        total += (u64)(part ? u->pw * u->ph : u->w * u->h) * 4;
    }
    SDL_GPUCopyPass *cp = SDL_BeginGPUCopyPass(cmd);
    /* all the frame's textures through one transfer buffer */
    if (total > txfer_size) {
        if (txfer) SDL_ReleaseGPUTransferBuffer(dev, txfer);
        txfer_size = (u32)(total + total / 2);
        SDL_GPUTransferBufferCreateInfo ti = {SDL_GPU_TRANSFERBUFFERUSAGE_UPLOAD, txfer_size, 0};
        txfer = SDL_CreateGPUTransferBuffer(dev, &ti);
        if (!txfer) rt_fatal(NULL, "GPU transfer buffer (%u bytes): %s", txfer_size, SDL_GetError());
    }
    u8 *map = total ? SDL_MapGPUTransferBuffer(dev, txfer, true) : NULL;
    if (total && !map) rt_fatal(NULL, "GPU transfer buffer map: %s", SDL_GetError());
    u32 off = 0;
    for (u32 i = 0; i < f->nuploads; i++) {
        GpuTexUpload *u = &f->uploads[i];
        Tex *t = tex_slot(u->id);
        u32 x = u->pw ? u->x : 0, y = u->pw ? u->y : 0, w = u->pw ? u->pw : u->w, h = u->pw ? u->ph : u->h;
        u32 bytes = w * h * 4;
        up_bytes += bytes;
        up_count++;
        if (!bytes) continue;
        memcpy(map + off, u->px, bytes);
        SDL_GPUTextureTransferInfo src = {txfer, off, w, h};
        SDL_GPUTextureRegion dst = {0};
        dst.texture = t->tex;
        dst.x = x;
        dst.y = y;
        dst.w = w;
        dst.h = h;
        dst.d = 1;
        SDL_UploadToGPUTexture(cp, &src, &dst, false);
        off += bytes;
    }
    if (map) SDL_UnmapGPUTransferBuffer(dev, txfer);
    SDL_EndGPUCopyPass(cp);
    SDL_SubmitGPUCommandBuffer(cmd);
}

static u64 shown_priv[5];       /* the displayed frame's PMODE, DISPFB1, DISPLAY1, DISPFB2, DISPLAY2 */
static int have_shown_priv;

/* At most two replays in flight: waiting for the one before the last keeps the GPU's per-replay
 * resources (cycled vertex and transfer buffers, uniform blocks) from piling up when frames are
 * replayed faster than the GPU finishes them. */
static SDL_GPUFence *inflight[2];
static int inflight_at;

/* A new render scale: colour targets are carried over (filtered), depth starts cleared. */
static void rescale(int to) {
    SDL_GPUTexture *old[2 * MAX_RT];
    int nold = 0;
    SDL_GPUCommandBuffer *cmd = SDL_AcquireGPUCommandBuffer(dev);
    for (int i = 0; i < ncolors; i++) {
        SDL_GPUTexture *t = texture(RT_SIZE * to, RT_SIZE * to, SDL_GPU_TEXTUREFORMAT_R8G8B8A8_UNORM,
                                    SDL_GPU_TEXTUREUSAGE_SAMPLER | SDL_GPU_TEXTUREUSAGE_COLOR_TARGET);
        SDL_GPUBlitInfo bi = {0};
        bi.source.texture = colors[i].tex;
        bi.source.w = bi.source.h = RT_SIZE * scale;
        bi.destination.texture = t;
        bi.destination.w = bi.destination.h = RT_SIZE * to;
        bi.load_op = SDL_GPU_LOADOP_DONT_CARE;
        bi.filter = SDL_GPU_FILTER_LINEAR;
        SDL_BlitGPUTexture(cmd, &bi);
        old[nold++] = colors[i].tex;
        colors[i].tex = t;
    }
    for (int i = 0; i < ndepths; i++) {
        old[nold++] = depths[i].tex;
        depths[i].tex = texture(RT_SIZE * to, RT_SIZE * to, depth_fmt, SDL_GPU_TEXTUREUSAGE_DEPTH_STENCIL_TARGET);
        SDL_GPUDepthStencilTargetInfo di = {0};
        di.texture = depths[i].tex;
        di.clear_depth = 0.0f;
        di.load_op = SDL_GPU_LOADOP_CLEAR;
        di.store_op = SDL_GPU_STOREOP_STORE;
        SDL_EndGPURenderPass(SDL_BeginGPURenderPass(cmd, NULL, 0, &di));
    }
    SDL_GPUFence *fence = SDL_SubmitGPUCommandBufferAndAcquireFence(cmd);
    SDL_WaitForGPUFences(dev, true, &fence, 1);
    SDL_ReleaseGPUFence(dev, fence);
    for (int i = 0; i < nold; i++) SDL_ReleaseGPUTexture(dev, old[i]);
    rt_log("gpu", "scale %d -> %d", scale, to);
    scale = to;
    SDL_ReleaseGPUTexture(dev, scratch);
    scratch = texture(RT_SIZE * scale, RT_SIZE * scale, SDL_GPU_TEXTUREFORMAT_R8G8B8A8_UNORM,
                      SDL_GPU_TEXTUREUSAGE_SAMPLER | SDL_GPU_TEXTUREUSAGE_COLOR_TARGET);
}

/* Effects that read the picture they draw on (heat haze, the ring of a special move: often dozens of
   strips, each sampling around where it draws) need a copy of the target before the draw. Copying all
   of it each time (RT_SIZE x RT_SIZE at the render scale: 64 MB at 4x) made those effects GPU bound,
   so only the part the draw samples is copied, and only when it isn't in the copy already or was
   drawn over since. Rectangles in GS pixels, x1/y1 excluded. */
typedef struct { int x0, y0, x1, y1; } Rect;
static u64 rt_copies, rt_copy_px;

static int rect_empty(Rect r) { return r.x1 <= r.x0 || r.y1 <= r.y0; }
static int rect_inside(Rect a, Rect b) { return a.x0 >= b.x0 && a.y0 >= b.y0 && a.x1 <= b.x1 && a.y1 <= b.y1; }
static int rect_meets(Rect a, Rect b) {
    return !rect_empty(a) && !rect_empty(b) && a.x0 < b.x1 && b.x0 < a.x1 && a.y0 < b.y1 && b.y0 < a.y1;
}
static Rect rect_union(Rect a, Rect b) {
    if (rect_empty(a)) return b;
    if (rect_empty(b)) return a;
    return (Rect){a.x0 < b.x0 ? a.x0 : b.x0, a.y0 < b.y0 ? a.y0 : b.y0, a.x1 > b.x1 ? a.x1 : b.x1, a.y1 > b.y1 ? a.y1 : b.y1};
}
static Rect rect_clamp(float x0, float y0, float x1, float y1) {
    Rect r = {(int)floorf(fmaxf(x0, 0.0f)), (int)floorf(fmaxf(y0, 0.0f)),
              (int)ceilf(fminf(x1, (float)RT_SIZE)), (int)ceilf(fminf(y1, (float)RT_SIZE))};
    if (rect_empty(r)) r = (Rect){0, 0, 0, 0};
    return r;
}

/* the texels a draw reading a render target may sample (a texel of slack for the filter) */
static Rect sampled_rect(const GpuDraw *d, const GpuVertex *v) {
    float u0 = 1e9f, v0 = 1e9f, u1 = -1e9f, v1 = -1e9f;
    for (u32 k = d->first; k < d->first + d->count; k++) {
        float u = v[k].s, t = v[k].t;
        if (!d->fst) {
            if (!(v[k].q > 0.0f)) return (Rect){0, 0, RT_SIZE, RT_SIZE};
            u = u / v[k].q * (float)d->tw;
            t = t / v[k].q * (float)d->th;
        }
        u0 = fminf(u0, u); u1 = fmaxf(u1, u);
        v0 = fminf(v0, t); v1 = fmaxf(v1, t);
    }
    if (d->region[0] >= 0.0f) {                 /* region clamp */
        u0 = fmaxf(u0, d->region[0]); u1 = fminf(u1, d->region[2] + 1.0f);
        v0 = fmaxf(v0, d->region[1]); v1 = fminf(v1, d->region[3] + 1.0f);
        if (u1 < u0) u1 = u0 + 1.0f;
        if (v1 < v0) v1 = v0 + 1.0f;
    }
    Rect r = rect_clamp(u0 - 2.0f, v0 - 2.0f, u1 + 2.0f, v1 + 2.0f);
    return rect_empty(r) ? (Rect){0, 0, 1, 1} : r;
}

/* the pixels a draw may write: its vertices within the scissor (2D moved for widescreen: the whole width) */
static Rect drawn_rect(const GpuDraw *d, const GpuVertex *v, int wide_3d) {
    float x0 = 1e9f, y0 = 1e9f, x1 = -1e9f, y1 = -1e9f;
    for (u32 k = d->first; k < d->first + d->count; k++) {
        x0 = fminf(x0, v[k].x); x1 = fmaxf(x1, v[k].x);
        y0 = fminf(y0, v[k].y); y1 = fmaxf(y1, v[k].y);
    }
    if (widescreen_on() && kept_43(d, wide_3d)) { x0 = 0.0f; x1 = (float)RT_SIZE; }
    x0 = fmaxf(x0 - 1.0f, (float)d->scissor[0]); x1 = fminf(x1 + 1.0f, (float)d->scissor[1] + 1.0f);
    y0 = fmaxf(y0 - 1.0f, (float)d->scissor[2]); y1 = fminf(y1 + 1.0f, (float)d->scissor[3] + 1.0f);
    return rect_clamp(x0, y0, x1, y1);
}

/* A frame being replayed: the render pass open, what is bound in it (only changes are sent: each one
   costs the GPU backend new descriptor sets / uniform space), and the scratch copy of a target that
   draws read (copy_src: of which target; copy_ok: the part copied; copy_dirty: drawn over since). */
typedef struct {
    SDL_GPUCommandBuffer *cmd;
    const GpuVertex *vs;
    int wide_3d, wide_2d;
    SDL_GPURenderPass *rp;
    u32 fbp, zbp;                       /* the pass's targets */
    SDL_GPUGraphicsPipeline *pipe;
    SDL_GPUTexture *tex;
    SDL_GPUSampler *smp;
    SDL_Rect sc;
    float fix;
    DrawUniforms u;
    int have_u;
    SDL_GPUTexture *copy_src;
    Rect copy_ok, copy_dirty;
} Replay;

static void pass_end(Replay *r) {
    if (!r->rp) return;
    SDL_EndGPURenderPass(r->rp);
    r->rp = NULL;
    r->fbp = ~0u;
}

/* a render pass on the draw's colour and depth targets; nothing bound yet */
static void pass_begin(Replay *r, const GpuDraw *d, SDL_GPUTexture *color, SDL_GPUTexture *depth) {
    pass_end(r);
    SDL_GPUColorTargetInfo ci = {0};
    ci.texture = color;
    ci.load_op = SDL_GPU_LOADOP_LOAD;
    ci.store_op = SDL_GPU_STOREOP_STORE;
    SDL_GPUDepthStencilTargetInfo di = {0};
    di.texture = depth;
    di.load_op = SDL_GPU_LOADOP_LOAD;
    di.store_op = SDL_GPU_STOREOP_STORE;
    di.stencil_load_op = SDL_GPU_LOADOP_DONT_CARE;
    di.stencil_store_op = SDL_GPU_STOREOP_DONT_CARE;
    r->rp = SDL_BeginGPURenderPass(r->cmd, &ci, 1, &di);
    r->fbp = d->fbp;
    r->zbp = d->zbp;
    SDL_GPUViewport vp = {0, 0, (float)(RT_SIZE * scale), (float)(RT_SIZE * scale), 0, 1};
    SDL_SetGPUViewport(r->rp, &vp);
    SDL_GPUBufferBinding bb = {vbuf, 0};
    SDL_BindGPUVertexBuffers(r->rp, 0, &bb, 1);
    float target_size[4] = {RT_SIZE, RT_SIZE, 1.0f / RT_SIZE, 1.0f / RT_SIZE};
    SDL_PushGPUVertexUniformData(r->cmd, 0, target_size, sizeof target_size);
    r->pipe = NULL;
    r->tex = NULL;
    r->smp = NULL;
    r->sc = (SDL_Rect){-1, -1, -1, -1};
    r->fix = -1.0f;
    r->have_u = 0;
}

/* The texture a draw samples: a decoded one, a render target, or none (white). A draw reading the
   target it draws on gets the scratch copy, made again if the part it samples is not in it or was
   drawn over (sampled_rect). *across: the texture's width in texels (RT_SIZE for a target). */
static SDL_GPUTexture *draw_texture(Replay *r, const GpuDraw *d, SDL_GPUTexture *color, float *across) {
    *across = (float)d->tw;
    if (!d->textured) return white;
    if (d->tex >= 0) {
        Tex *t = tex_slot((u32)d->tex);
        if (t->id != (u32)d->tex || !t->tex) return white;
        t->last_used = frame_no;
        return t->tex;
    }
    if (d->tex >= -1) return white;
    SDL_GPUTexture *src = find_color((u32)(-2 - d->tex));
    *across = RT_SIZE;               /* a target is RT_SIZE wide; S/Q still counts in TEX0's size (TW, TH) */
    if (!src) return white;
    if (src != color) return src;
    Rect need = sampled_rect(d, r->vs);
    if (r->copy_src != src || !rect_inside(need, r->copy_ok) || rect_meets(need, r->copy_dirty)) {
        pass_end(r);
        SDL_GPUCopyPass *cp = SDL_BeginGPUCopyPass(r->cmd);
        u32 x = (u32)need.x0 * scale, y = (u32)need.y0 * scale;
        SDL_GPUTextureLocation a = {src, 0, 0, x, y, 0}, b = {scratch, 0, 0, x, y, 0};
        SDL_CopyGPUTextureToTexture(cp, &a, &b, (u32)(need.x1 - need.x0) * scale, (u32)(need.y1 - need.y0) * scale, 1, false);
        SDL_EndGPUCopyPass(cp);
        r->copy_src = src;
        r->copy_ok = need;
        r->copy_dirty = (Rect){0, 0, 0, 0};
        rt_copies++;
        rt_copy_px += (u64)(need.x1 - need.x0) * (need.y1 - need.y0) * scale * scale;
    }
    return scratch;
}

/* the draw's scissor in target pixels; 2D kept 3/4 as wide in widescreen: what was off the 4:3
   screen stays off */
static SDL_Rect draw_scissor(const Replay *r, const GpuDraw *d) {
    SDL_Rect sc = {(int)d->scissor[0] * scale, (int)d->scissor[2] * scale,
                   (int)(d->scissor[1] - d->scissor[0] + 1) * scale, (int)(d->scissor[3] - d->scissor[2] + 1) * scale};
    if (kept_43(d, r->wide_3d) && widescreen_on() && !anchored(d, r->wide_3d) && !r->wide_2d) {
        float c = (float)(d->fbw * 32);
        int x0 = (int)((c + ((float)d->scissor[0] - c) * 0.75f) * scale);
        int x1 = (int)((c + ((float)d->scissor[1] + 1 - c) * 0.75f) * scale);
        sc.x = x0;
        sc.w = x1 - x0;
    }
    return sc;
}

/* the draw's pipeline, scissor, blend constant, uniforms and texture, where they changed */
static void draw_bind(Replay *r, const GpuDraw *d, SDL_GPUTexture *tex, float across) {
    SDL_GPUGraphicsPipeline *pipe = pipe_for(d);
    if (pipe != r->pipe) { SDL_BindGPUGraphicsPipeline(r->rp, pipe); r->pipe = pipe; }
    SDL_Rect sc = draw_scissor(r, d);
    if (memcmp(&sc, &r->sc, sizeof sc)) { SDL_SetGPUScissor(r->rp, &sc); r->sc = sc; }
    float fix = (float)((d->alpha >> 32) & 0xFF) / 128.0f;
    if (fix != r->fix) { SDL_FColor bc = {fix, fix, fix, fix}; SDL_SetGPUBlendConstants(r->rp, bc); r->fix = fix; }
    u32 wm = 0xF;
    int zw = d->zwrite, st;
    atest_masks(d, &wm, &zw, &st);
    float tw = (float)d->tw, th = (float)d->th, ntw = across, nth = d->tex < -1 && d->textured ? across : th;
    DrawUniforms u = {{(s32)d->textured, (s32)d->tfx, (s32)d->tcc, (s32)d->fst},
                      {st, (s32)d->atest[1], (s32)d->atest[2], (s32)d->atest[3]},
                      {tw, th, 1.0f / ntw, 1.0f / nth},
                      {d->region[0], d->region[1], d->region[2], d->region[3]}};
    if (!r->have_u || memcmp(&u, &r->u, sizeof u)) { SDL_PushGPUFragmentUniformData(r->cmd, 0, &u, sizeof u); r->u = u; r->have_u = 1; }
    int smp = (d->filter ? 1 : 0) | (d->wrap_u ? 2 : 0) | (d->wrap_v ? 4 : 0);
    if (d->tex < -1) smp |= 6;
    if (tex != r->tex || samplers[smp] != r->smp) {
        SDL_GPUTextureSamplerBinding tsb = {tex, samplers[smp]};
        SDL_BindGPUFragmentSamplers(r->rp, 0, &tsb, 1);
        r->tex = tex;
        r->smp = samplers[smp];
    }
}

/* SSTHEH_GPU_DEBUG / SSTHEH_GPU_STATS: a line about the frame now and then */
static void frame_logs(const GpuFrame *f) {
    if (getenv("SSTHEH_GPU_DEBUG") && frame_no % 100 == 1) {
        GpuDraw *d = &f->draws[0];
        GpuVertex *v = &f->verts[d->first];
        rt_log("gpu", "frame %u: %u draws, %u verts, %u uploads; draw0 fbp %X zbp %X tex %d count %u v0 (%.1f %.1f %.4f) rgba %.0f %.0f %.0f %.0f",
               frame_no, f->ndraws, f->nverts, f->nuploads, d->fbp, d->zbp, d->tex, d->count, v->x, v->y, v->z, v->r, v->g, v->b, v->a);
    }
    if (getenv("SSTHEH_GPU_STATS") && frame_no % 50 == 0) {
        u64 live_bytes, live = gpu_tex_stats(&live_bytes);
        fprintf(stderr, "[gpu] frame %u: %u draws, %u verts; last 50 frames: %llu uploads, %.1f MB, %llu target copies, %.1f Mpx; live textures %llu, %.1f MB\n",
               frame_no, f->ndraws, f->nverts, (unsigned long long)up_count, up_bytes / 1048576.0,
               (unsigned long long)rt_copies, rt_copy_px / 1e6, (unsigned long long)live, live_bytes / 1048576.0);
        up_bytes = up_count = 0;
        rt_copies = rt_copy_px = 0;
    }
}

/* A recorded frame drawn on the GPU (verts: NULL, or the vertices moved for an interpolated frame). */
void gpu_render(GpuFrame *f, const GpuVertex *verts) {
    if (want_scale && want_scale != scale) rescale(want_scale);
    if (!dev || !f || !f->ndraws) return;
    if (inflight[inflight_at]) {
        SDL_WaitForGPUFences(dev, true, &inflight[inflight_at], 1);
        SDL_ReleaseGPUFence(dev, inflight[inflight_at]);
        inflight[inflight_at] = NULL;
    }
    memcpy(shown_priv, f->priv, sizeof shown_priv);
    have_shown_priv = 1;
    frame_no++;
    frame_logs(f);
    Replay r = {0};
    r.cmd = SDL_AcquireGPUCommandBuffer(dev);
    upload_verts(r.cmd, f, verts);
    r.vs = verts ? verts : f->verts;
    r.wide_3d = frame_wide_3d(f);
    r.wide_2d = frame_wide_2d(f);
    r.fbp = r.zbp = ~0u;
    u32 drawn[MAX_RT];                  /* frame buffers drawn in this frame, and whether at the sides */
    int drawn_sides[MAX_RT], ndrawn = 0;
    for (u32 i = 0; i < f->ndraws; i++) {
        GpuDraw *d = &f->draws[i];
        SDL_GPUTexture *color = target(colors, &ncolors, d->fbp, 0);
        int k = 0;
        while (k < ndrawn && drawn[k] != d->fbp) k++;
        if (k == ndrawn && ndrawn < MAX_RT) { drawn[k] = d->fbp; drawn_sides[k] = 0; ndrawn++; }
        if (k < ndrawn) drawn_sides[k] |= d->sides || (r.wide_2d && d->covers);
        SDL_GPUTexture *depth = target(depths, &ndepths, d->zbp, 1);
        float across;
        SDL_GPUTexture *tex = draw_texture(&r, d, color, &across);
        if (!r.rp || d->fbp != r.fbp || d->zbp != r.zbp) pass_begin(&r, d, color, depth);
        draw_bind(&r, d, tex, across);
        SDL_DrawGPUPrimitives(r.rp, d->count, 1, d->first, 0);
        if (color == r.copy_src) r.copy_dirty = rect_union(r.copy_dirty, drawn_rect(d, r.vs, r.wide_3d));
    }
    pass_end(&r);
    for (int k = 0; k < ndrawn; k++)
        for (int j = 0; j < ncolors; j++)
            if (colors[j].key == drawn[k]) colors[j].sides = drawn_sides[k];
    inflight[inflight_at] = SDL_SubmitGPUCommandBufferAndAcquireFence(r.cmd);
    inflight_at ^= 1;
}

/* ------------------------------------------------------------------------------- display */

/* The displayed rectangle: the enabled circuit's DISPFB (FBP, DBX, DBY) and DISPLAY (size). */
static SDL_GPUTexture *displayed(float rect[4], int *pw, int *ph) {
    u64 pmode = have_shown_priv ? shown_priv[0] : gs_priv_read(0x0000);
    int circuit2 = (pmode & 2) != 0;
    u64 dispfb = have_shown_priv ? shown_priv[circuit2 ? 3 : 1] : gs_priv_read(circuit2 ? 0x0090 : 0x0070);
    u64 display = have_shown_priv ? shown_priv[circuit2 ? 4 : 2] : gs_priv_read(circuit2 ? 0x00A0 : 0x0080);
    u32 fbp = dispfb & 0x1FF, dbx = (dispfb >> 32) & 0x7FF, dby = (dispfb >> 43) & 0x7FF;
    u32 magh = ((display >> 23) & 15) + 1, dw = ((display >> 32) & 0xFFF) + 1, dh = ((display >> 44) & 0x7FF) + 1;
    int w = (int)(dw / magh), h = (int)dh;
    if (w <= 0 || h <= 0 || w > 1024 || h > 1024) { w = 640; h = 448; }
    if (kernel_ntsc() && h > 448) h = 448;          /* an NTSC screen shows 448 of the 512 lines asked for */
    *pw = w;
    *ph = h;
    rect[0] = (float)dbx / RT_SIZE;
    rect[1] = (float)dby / RT_SIZE;
    rect[2] = (float)(dbx + w) / RT_SIZE;
    rect[3] = (float)(dby + h) / RT_SIZE;
    return find_color(fbp);
}

/* An RGBA picture into *t (made or remade at w x h). */
static void upload_picture(SDL_GPUTexture **t, int *tw, int *th, const u32 *px, int w, int h) {
    if (!*t || w != *tw || h != *th) {
        if (*t) SDL_ReleaseGPUTexture(dev, *t);
        *t = texture(w, h, SDL_GPU_TEXTUREFORMAT_R8G8B8A8_UNORM, SDL_GPU_TEXTUREUSAGE_SAMPLER);
        *tw = w;
        *th = h;
    }
    SDL_GPUCommandBuffer *cmd = SDL_AcquireGPUCommandBuffer(dev);
    SDL_GPUCopyPass *cp = SDL_BeginGPUCopyPass(cmd);
    SDL_GPUTransferBufferCreateInfo ti = {SDL_GPU_TRANSFERBUFFERUSAGE_UPLOAD, (u32)(w * h * 4), 0};
    SDL_GPUTransferBuffer *tb = SDL_CreateGPUTransferBuffer(dev, &ti);
    memcpy(SDL_MapGPUTransferBuffer(dev, tb, false), px, (size_t)w * h * 4);
    SDL_UnmapGPUTransferBuffer(dev, tb);
    SDL_GPUTextureTransferInfo src = {tb, 0, (u32)w, (u32)h};
    SDL_GPUTextureRegion dst = {0};
    dst.texture = *t;
    dst.w = (u32)w;
    dst.h = (u32)h;
    dst.d = 1;
    SDL_UploadToGPUTexture(cp, &src, &dst, false);
    SDL_EndGPUCopyPass(cp);
    SDL_SubmitGPUCommandBuffer(cmd);
    SDL_ReleaseGPUTransferBuffer(dev, tb);
}

void gpu_set_overlay(const u32 *px, int w, int h) {
    if (!dev) return;
    if (!px) { overlay_on = 0; return; }
    upload_picture(&overlay, &overlay_w, &overlay_h, px, w, h);
    overlay_on = 1;
}

/* An RGBA layer stretched over the whole picture (training); NULL: none. */
void gpu_set_hud(const u32 *px, int w, int h) {
    if (!dev) return;
    if (!px) { hud_on = 0; return; }
    upload_picture(&hud, &hud_w, &hud_h, px, w, h);
    hud_on = 1;
}

/* The video's picture (RGBA) to show instead of the game's; NULL: the game's again. */
void gpu_set_movie(const u32 *px, int w, int h) {
    if (!dev) return;
    if (!px) { movie_on = 0; return; }
    upload_picture(&movie, &movie_w, &movie_h, px, w, h);
    movie_on = 1;
}

/* The displayed picture into a window-sized texture (the swapchain's, or one for a shot). */
static void present_into(SDL_GPUCommandBuffer *cmd, SDL_GPUTexture *swap, u32 sw, u32 sh) {
    float rect[4];
    int w, h;
    SDL_GPUTexture *src = displayed(rect, &w, &h);
    int is_movie = movie_on && movie;
    if (is_movie) {                      /* a 4:3 picture of its own */
        src = movie;
        rect[0] = rect[1] = 0;
        rect[2] = rect[3] = 1;
        w = movie_w;
        h = movie_h;
    }
    /* widescreen with nothing drawn at the sides (a 4:3 picture: title, logos, story scenes): the
       sides show the picture itself, zoomed to the width and blurred (a plain background stays
       plain); it stays sharp in the middle. The blur is made small (a box of taps) and stretched. */
    int fill = 0;
    float mid[4];                        /* the middle 3/4 of the picture's width */
    if (src && widescreen_on() && !is_movie) {
        fill = 1;
        for (int j = 0; j < ncolors; j++)
            if (colors[j].tex == src && colors[j].sides) fill = 0;
        float cw = (rect[2] - rect[0]) * 0.125f, ch = (rect[3] - rect[1]) * 0.125f;
        mid[0] = rect[0] + cw; mid[1] = rect[1]; mid[2] = rect[2] - cw; mid[3] = rect[3];
        if (fill) {
            if (!blur) blur = texture(BLUR_W, BLUR_H, swap_fmt, SDL_GPU_TEXTUREUSAGE_SAMPLER | SDL_GPU_TEXTUREUSAGE_COLOR_TARGET);
            SDL_GPUColorTargetInfo bi = {0};
            bi.texture = blur;
            bi.load_op = SDL_GPU_LOADOP_DONT_CARE;
            bi.store_op = SDL_GPU_STOREOP_STORE;
            SDL_GPURenderPass *bp = SDL_BeginGPURenderPass(cmd, &bi, 1, NULL);
            SDL_GPUViewport vp = {0, 0, BLUR_W, BLUR_H, 0, 1};
            SDL_SetGPUViewport(bp, &vp);
            SDL_BindGPUGraphicsPipeline(bp, present_pipe);
            float zoom[4] = {mid[0], rect[1] + ch, mid[2], rect[3] - ch};    /* 4:3 zoomed to 16:9: the middle 3/4 of the height */
            SDL_PushGPUVertexUniformData(cmd, 0, zoom, sizeof zoom);
            float box[4] = {(zoom[2] - zoom[0]) / 12.0f, (zoom[3] - zoom[1]) / 12.0f, 12.0f, 0};
            SDL_PushGPUFragmentUniformData(cmd, 0, box, sizeof box);
            SDL_GPUTextureSamplerBinding tsb = {src, samplers[1 | 6]};
            SDL_BindGPUFragmentSamplers(bp, 0, &tsb, 1);
            SDL_DrawGPUPrimitives(bp, 3, 1, 0, 0);
            SDL_EndGPURenderPass(bp);
        }
    }
    SDL_GPUColorTargetInfo ci = {0};
    ci.texture = swap;
    ci.load_op = SDL_GPU_LOADOP_CLEAR;
    ci.store_op = SDL_GPU_STOREOP_STORE;
    SDL_GPURenderPass *rp = SDL_BeginGPURenderPass(cmd, &ci, 1, NULL);
    SDL_GPUViewport picture_vp = {0, 0, (float)sw, (float)sh, 0, 1};
    if (src) {
        /* keep the picture's aspect (4:3, or 16:9 in widescreen) inside the window */
        float aspect = widescreen_on() && !is_movie ? 16.0f / 9.0f : 4.0f / 3.0f, ww = (float)sw, wh = (float)sh;
        float vw = ww, vh = ww / aspect;
        if (vh > wh) { vh = wh; vw = wh * aspect; }
        SDL_GPUViewport vp = {(ww - vw) / 2, (wh - vh) / 2, vw, vh, 0, 1};
        picture_vp = vp;
        SDL_SetGPUViewport(rp, &vp);
        SDL_BindGPUGraphicsPipeline(rp, present_pipe);
        if (fill) {                      /* the blurred sides, then only the middle of the picture */
            float full[4] = {0, 0, 1, 1}, one[4] = {0, 0, 1, 0};
            SDL_PushGPUVertexUniformData(cmd, 0, full, sizeof full);
            SDL_PushGPUFragmentUniformData(cmd, 0, one, sizeof one);
            SDL_GPUTextureSamplerBinding bsb = {blur, samplers[1 | 6]};
            SDL_BindGPUFragmentSamplers(rp, 0, &bsb, 1);
            SDL_DrawGPUPrimitives(rp, 3, 1, 0, 0);
            vp.x += vw * 0.125f;
            vp.w = vw *= 0.75f;
            SDL_SetGPUViewport(rp, &vp);
            memcpy(rect, mid, sizeof mid);
            w = w * 3 / 4;
        }
        SDL_PushGPUVertexUniformData(cmd, 0, rect, sizeof rect);
        /* supersampling: as many taps per axis as picture pixels per window pixel (up to 4) */
        float ratio = (float)(w * scale) / vw;
        int taps = ratio <= 1.0f ? 1 : (int)ceilf(ratio);
        if (taps > 4) taps = 4;
        float down[4] = {(rect[2] - rect[0]) / vw, (rect[3] - rect[1]) / vh, (float)taps, 0};
        SDL_PushGPUFragmentUniformData(cmd, 0, down, sizeof down);
        SDL_GPUTextureSamplerBinding tsb = {src, samplers[1 | 6]};
        SDL_BindGPUFragmentSamplers(rp, 0, &tsb, 1);
        SDL_DrawGPUPrimitives(rp, 3, 1, 0, 0);
    }
    if (hud_on && hud && !is_movie) {
        SDL_SetGPUViewport(rp, &picture_vp);
        SDL_BindGPUGraphicsPipeline(rp, overlay_pipe);
        float full[4] = {0, 0, 1, 1}, one[4] = {0, 0, 1, 1};
        SDL_PushGPUVertexUniformData(cmd, 0, full, sizeof full);
        SDL_PushGPUFragmentUniformData(cmd, 0, one, sizeof one);
        SDL_GPUTextureSamplerBinding tsb = {hud, samplers[6]};
        SDL_BindGPUFragmentSamplers(rp, 0, &tsb, 1);
        SDL_DrawGPUPrimitives(rp, 3, 1, 0, 0);
    }
    if (overlay_on && overlay) {
        SDL_GPUViewport vp = {4, 4, (float)overlay_w, (float)overlay_h, 0, 1};
        SDL_SetGPUViewport(rp, &vp);
        SDL_BindGPUGraphicsPipeline(rp, overlay_pipe);
        float full[4] = {0, 0, 1, 1}, one[4] = {0, 0, 1, 1};
        SDL_PushGPUVertexUniformData(cmd, 0, full, sizeof full);
        SDL_PushGPUFragmentUniformData(cmd, 0, one, sizeof one);
        SDL_GPUTextureSamplerBinding tsb = {overlay, samplers[6]};
        SDL_BindGPUFragmentSamplers(rp, 0, &tsb, 1);
        SDL_DrawGPUPrimitives(rp, 3, 1, 0, 0);
    }
    SDL_EndGPURenderPass(rp);
}

void gpu_present(void) {
    if (!dev || !win) return;
    SDL_GPUCommandBuffer *cmd = SDL_AcquireGPUCommandBuffer(dev);
    SDL_GPUTexture *swap;
    u32 sw, sh;
    if (!SDL_WaitAndAcquireGPUSwapchainTexture(cmd, win, &swap, &sw, &sh) || !swap) {
        SDL_SubmitGPUCommandBuffer(cmd);
        return;
    }
    if (!fixed_scale) {
        int ph = widescreen_on() ? (int)sw * 9 / 16 : (int)sw * 3 / 4;     /* the picture's height */
        want_scale = scale_for((int)sh < ph ? (int)sh : ph);
    }
    present_into(cmd, swap, sw, sh);
    SDL_SubmitGPUCommandBuffer(cmd);
}

/* For --shot with SSTHEH_SHOT_PRESENT=WxH: the picture as a window that size would show it. */
int gpu_read_presented(u32 *out, int w, int h) {
    SDL_GPUTexture *t = texture((u32)w, (u32)h, swap_fmt, SDL_GPU_TEXTUREUSAGE_SAMPLER | SDL_GPU_TEXTUREUSAGE_COLOR_TARGET);
    SDL_GPUTransferBufferCreateInfo ti = {SDL_GPU_TRANSFERBUFFERUSAGE_DOWNLOAD, (u32)(w * h * 4), 0};
    SDL_GPUTransferBuffer *tb = SDL_CreateGPUTransferBuffer(dev, &ti);
    SDL_GPUCommandBuffer *cmd = SDL_AcquireGPUCommandBuffer(dev);
    present_into(cmd, t, (u32)w, (u32)h);
    SDL_GPUCopyPass *cp = SDL_BeginGPUCopyPass(cmd);
    SDL_GPUTextureRegion reg = {0};
    reg.texture = t;
    reg.w = (u32)w;
    reg.h = (u32)h;
    reg.d = 1;
    SDL_GPUTextureTransferInfo dst = {tb, 0, (u32)w, (u32)h};
    SDL_DownloadFromGPUTexture(cp, &reg, &dst);
    SDL_EndGPUCopyPass(cp);
    SDL_GPUFence *fence = SDL_SubmitGPUCommandBufferAndAcquireFence(cmd);
    SDL_WaitForGPUFences(dev, true, &fence, 1);
    SDL_ReleaseGPUFence(dev, fence);
    const u32 *px = SDL_MapGPUTransferBuffer(dev, tb, false);
    for (int i = 0; i < w * h; i++) out[i] = px[i] | 0xFF000000u;
    SDL_UnmapGPUTransferBuffer(dev, tb);
    SDL_ReleaseGPUTransferBuffer(dev, tb);
    SDL_ReleaseGPUTexture(dev, t);
    return 0;
}

/* For --shot: the displayed picture read back, at the PS2's resolution (SSTHEH_SHOT_FULL=1: at the
   internal render resolution). */
int gpu_read_display(u32 *out, int max_w, int max_h, int *pw, int *ph) {
    float rect[4];
    int w, h;
    SDL_GPUTexture *src = displayed(rect, &w, &h);
    rt_log("gpu", "read display: rect %.3f %.3f %.3f %.3f, %dx%d, target %s (%d targets:%s%X %X %X)", rect[0], rect[1], rect[2], rect[3],
           w, h, src ? "found" : "MISSING", ncolors, "", ncolors > 0 ? colors[0].key : 0, ncolors > 1 ? colors[1].key : 0,
           ncolors > 2 ? colors[2].key : 0);
    if (w > max_w) w = max_w;
    if (h > max_h) h = max_h;
    *pw = w;
    *ph = h;
    if (!src) { memset(out, 0, (size_t)w * h * 4); return 0; }
    u32 x0 = (u32)(rect[0] * RT_SIZE) * scale, y0 = (u32)(rect[1] * RT_SIZE) * scale;
    u32 bw = (u32)w * scale, bh = (u32)h * scale;
    SDL_GPUTransferBufferCreateInfo ti = {SDL_GPU_TRANSFERBUFFERUSAGE_DOWNLOAD, bw * bh * 4, 0};
    SDL_GPUTransferBuffer *tb = SDL_CreateGPUTransferBuffer(dev, &ti);
    SDL_GPUCommandBuffer *cmd = SDL_AcquireGPUCommandBuffer(dev);
    SDL_GPUCopyPass *cp = SDL_BeginGPUCopyPass(cmd);
    SDL_GPUTextureRegion reg = {0};
    reg.texture = src;
    reg.x = x0;
    reg.y = y0;
    reg.w = bw;
    reg.h = bh;
    reg.d = 1;
    SDL_GPUTextureTransferInfo dst = {tb, 0, bw, bh};
    SDL_DownloadFromGPUTexture(cp, &reg, &dst);
    SDL_EndGPUCopyPass(cp);
    SDL_GPUFence *fence = SDL_SubmitGPUCommandBufferAndAcquireFence(cmd);
    SDL_WaitForGPUFences(dev, true, &fence, 1);
    SDL_ReleaseGPUFence(dev, fence);
    const u32 *px = SDL_MapGPUTransferBuffer(dev, tb, false);
    if (getenv("SSTHEH_SHOT_FULL") && (int)bw <= max_w && (int)bh <= max_h) {
        for (u32 i = 0; i < bw * bh; i++) out[i] = px[i] | 0xFF000000u;
        *pw = (int)bw;
        *ph = (int)bh;
    } else
        for (int y = 0; y < h; y++)
            for (int x = 0; x < w; x++) out[y * w + x] = px[(u32)y * scale * bw + (u32)x * scale] | 0xFF000000u;
    SDL_UnmapGPUTransferBuffer(dev, tb);
    SDL_ReleaseGPUTransferBuffer(dev, tb);
    return 0;
}
