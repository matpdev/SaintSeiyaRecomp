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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"
#include "gs.h"
#include "gpu.h"
#include "shaders.h"        /* generated from port/gs/shaders by configure.py */

#define RT_SIZE 1024
#define MAX_RT 64
#define MAX_TEX 8192

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

typedef struct { u32 key; SDL_GPUTexture *tex; } Target;
static Target colors[MAX_RT], depths[MAX_RT];
static int ncolors, ndepths;

typedef struct { u32 id; SDL_GPUTexture *tex; u32 last_used; u32 w, h; } Tex;
static Tex texs[MAX_TEX];
static u32 frame_no;

typedef struct { u64 key; SDL_GPUGraphicsPipeline *p; } Pipe;
static Pipe pipes[2048];
static int npipes;

static SDL_GPUTexture *overlay;               /* the performance panel */
static int overlay_w, overlay_h, overlay_on;

/* ------------------------------------------------------------------------------- setup */

static SDL_GPUShader *shader(const unsigned char *code, size_t size, SDL_GPUShaderStage stage, int samplers_n, int uniforms_n) {
    SDL_GPUShaderCreateInfo ci = {0};
    ci.code = code;
    ci.code_size = size;
    ci.entrypoint = "main";
    ci.format = SDL_GPU_SHADERFORMAT_SPIRV;
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

int gpu_init(void *sdl_window) {
    const char *sc = getenv("SSTHEH_SCALE");
    if (sc && atoi(sc) >= 1 && atoi(sc) <= 4) scale = atoi(sc);
    win = sdl_window;
    dev = SDL_CreateGPUDevice(SDL_GPU_SHADERFORMAT_SPIRV, false, NULL);
    if (!dev) { rt_log("gpu", "no GPU device: %s", SDL_GetError()); return -1; }
    if (win && !SDL_ClaimWindowForGPUDevice(dev, win)) { rt_log("gpu", "window: %s", SDL_GetError()); return -1; }
    rt_log("gpu", "%s renderer, scale %d", SDL_GetGPUDeviceDriver(dev), scale);
    depth_fmt = SDL_GPUTextureSupportsFormat(dev, SDL_GPU_TEXTUREFORMAT_D32_FLOAT, SDL_GPU_TEXTURETYPE_2D,
                                             SDL_GPU_TEXTUREUSAGE_DEPTH_STENCIL_TARGET)
                    ? SDL_GPU_TEXTUREFORMAT_D32_FLOAT : SDL_GPU_TEXTUREFORMAT_D24_UNORM;
    swap_fmt = win ? SDL_GetGPUSwapchainTextureFormat(dev, win) : SDL_GPU_TEXTUREFORMAT_R8G8B8A8_UNORM;
    vs = shader(gs_vert_spv, sizeof gs_vert_spv, SDL_GPU_SHADERSTAGE_VERTEX, 0, 1);
    fs = shader(gs_frag_spv, sizeof gs_frag_spv, SDL_GPU_SHADERSTAGE_FRAGMENT, 1, 1);
    pvs = shader(present_vert_spv, sizeof present_vert_spv, SDL_GPU_SHADERSTAGE_VERTEX, 0, 1);
    pfs = shader(present_frag_spv, sizeof present_frag_spv, SDL_GPU_SHADERSTAGE_FRAGMENT, 1, 0);
    for (int i = 0; i < 8; i++) {
        SDL_GPUSamplerCreateInfo si = {0};
        si.min_filter = si.mag_filter = (i & 1) ? SDL_GPU_FILTER_LINEAR : SDL_GPU_FILTER_NEAREST;
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
    list[*n] = (Target){key, t};
    (*n)++;
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
    SDL_GPUGraphicsPipeline *p = SDL_CreateGPUGraphicsPipeline(dev, &ci);
    if (!p) rt_fatal(NULL, "GPU pipeline: %s", SDL_GetError());
    if (npipes < (int)(sizeof pipes / sizeof *pipes)) pipes[npipes++] = (Pipe){key, p};
    return p;
}

/* ------------------------------------------------------------------------------- replay */

typedef struct {
    s32 mode[4], atest[4];
    float texsize[4], region[4];
} DrawUniforms;

static void upload_frame(SDL_GPUCommandBuffer *cmd, GpuFrame *f) {
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
        void *m = SDL_MapGPUTransferBuffer(dev, vxfer, true);
        memcpy(m, f->verts, vbytes);
        SDL_UnmapGPUTransferBuffer(dev, vxfer);
        SDL_GPUTransferBufferLocation src = {vxfer, 0};
        SDL_GPUBufferRegion dst = {vbuf, 0, vbytes};
        SDL_UploadToGPUBuffer(cp, &src, &dst, true);
    }
    for (u32 i = 0; i < f->nuploads; i++) {
        GpuTexUpload *u = &f->uploads[i];
        Tex *t = tex_slot(u->id);
        if (t->tex) SDL_ReleaseGPUTexture(dev, t->tex);
        t->id = u->id;
        t->w = u->w;
        t->h = u->h;
        t->tex = texture(u->w, u->h, SDL_GPU_TEXTUREFORMAT_R8G8B8A8_UNORM, SDL_GPU_TEXTUREUSAGE_SAMPLER);
        u32 bytes = u->w * u->h * 4;
        SDL_GPUTransferBufferCreateInfo ti = {SDL_GPU_TRANSFERBUFFERUSAGE_UPLOAD, bytes, 0};
        SDL_GPUTransferBuffer *tb = SDL_CreateGPUTransferBuffer(dev, &ti);
        memcpy(SDL_MapGPUTransferBuffer(dev, tb, false), u->px, bytes);
        SDL_UnmapGPUTransferBuffer(dev, tb);
        SDL_GPUTextureTransferInfo src = {tb, 0, u->w, u->h};
        SDL_GPUTextureRegion dst = {0};
        dst.texture = t->tex;
        dst.w = u->w;
        dst.h = u->h;
        dst.d = 1;
        SDL_UploadToGPUTexture(cp, &src, &dst, false);
        SDL_ReleaseGPUTransferBuffer(dev, tb);
    }
    SDL_EndGPUCopyPass(cp);
}

void gpu_render(GpuFrame *f) {
    if (!dev || !f || !f->ndraws) return;
    frame_no++;
    if (getenv("SSTHEH_GPU_DEBUG") && frame_no % 100 == 1) {
        GpuDraw *d = &f->draws[0];
        GpuVertex *v = &f->verts[d->first];
        rt_log("gpu", "frame %u: %u draws, %u verts, %u uploads; draw0 fbp %X zbp %X tex %d count %u v0 (%.1f %.1f %.4f) rgba %.0f %.0f %.0f %.0f",
               frame_no, f->ndraws, f->nverts, f->nuploads, d->fbp, d->zbp, d->tex, d->count, v->x, v->y, v->z, v->r, v->g, v->b, v->a);
    }
    SDL_GPUCommandBuffer *cmd = SDL_AcquireGPUCommandBuffer(dev);
    upload_frame(cmd, f);
    SDL_GPURenderPass *rp = NULL;
    u32 cur_fbp = ~0u, cur_zbp = ~0u;
    SDL_GPUTexture *cur_color = NULL;
    for (u32 i = 0; i < f->ndraws; i++) {
        GpuDraw *d = &f->draws[i];
        SDL_GPUTexture *color = target(colors, &ncolors, d->fbp, 0);
        SDL_GPUTexture *depth = target(depths, &ndepths, d->zbp, 1);
        /* the texture: decoded, a render target, or nothing */
        SDL_GPUTexture *tex = white;
        float tw = (float)d->tw, th = (float)d->th;
        if (d->textured && d->tex >= 0) {
            Tex *t = tex_slot((u32)d->tex);
            if (t->id == (u32)d->tex && t->tex) { tex = t->tex; t->last_used = frame_no; }
        } else if (d->textured && d->tex < -1) {
            u32 src_fbp = (u32)(-2 - d->tex);
            SDL_GPUTexture *src = find_color(src_fbp);
            tw = th = RT_SIZE;
            if (src && src == color) {                 /* reading the target being drawn: copy it first */
                if (rp) { SDL_EndGPURenderPass(rp); rp = NULL; cur_fbp = ~0u; }
                SDL_GPUCopyPass *cp = SDL_BeginGPUCopyPass(cmd);
                SDL_GPUTextureLocation a = {src, 0, 0, 0, 0, 0}, b = {scratch, 0, 0, 0, 0, 0};
                SDL_CopyGPUTextureToTexture(cp, &a, &b, RT_SIZE * scale, RT_SIZE * scale, 1, false);
                SDL_EndGPUCopyPass(cp);
                tex = scratch;
            } else if (src) tex = src;
        }
        if (!rp || d->fbp != cur_fbp || d->zbp != cur_zbp) {
            if (rp) SDL_EndGPURenderPass(rp);
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
            rp = SDL_BeginGPURenderPass(cmd, &ci, 1, &di);
            cur_fbp = d->fbp;
            cur_zbp = d->zbp;
            cur_color = color;
            SDL_GPUViewport vp = {0, 0, (float)(RT_SIZE * scale), (float)(RT_SIZE * scale), 0, 1};
            SDL_SetGPUViewport(rp, &vp);
            SDL_GPUBufferBinding bb = {vbuf, 0};
            SDL_BindGPUVertexBuffers(rp, 0, &bb, 1);
        }
        (void)cur_color;
        SDL_BindGPUGraphicsPipeline(rp, pipe_for(d));
        SDL_Rect sc = {(int)d->scissor[0] * scale, (int)d->scissor[2] * scale,
                       (int)(d->scissor[1] - d->scissor[0] + 1) * scale, (int)(d->scissor[3] - d->scissor[2] + 1) * scale};
        SDL_SetGPUScissor(rp, &sc);
        float fix = (float)((d->alpha >> 32) & 0xFF) / 128.0f;
        SDL_FColor bc = {fix, fix, fix, fix};
        SDL_SetGPUBlendConstants(rp, bc);
        float target_size[4] = {RT_SIZE, RT_SIZE, 1.0f / RT_SIZE, 1.0f / RT_SIZE};
        SDL_PushGPUVertexUniformData(cmd, 0, target_size, sizeof target_size);
        u32 wm = 0xF;
        int zw = d->zwrite, st;
        atest_masks(d, &wm, &zw, &st);
        DrawUniforms u = {{(s32)d->textured, (s32)d->tfx, (s32)d->tcc, (s32)d->fst},
                          {st, (s32)d->atest[1], (s32)d->atest[2], (s32)d->atest[3]},
                          {tw, th, 1.0f / tw, 1.0f / th},
                          {d->region[0], d->region[1], d->region[2], d->region[3]}};
        SDL_PushGPUFragmentUniformData(cmd, 0, &u, sizeof u);
        int smp = (d->filter ? 1 : 0) | (d->wrap_u ? 2 : 0) | (d->wrap_v ? 4 : 0);
        if (d->tex < -1) smp |= 6;
        SDL_GPUTextureSamplerBinding tsb = {tex, samplers[smp]};
        SDL_BindGPUFragmentSamplers(rp, 0, &tsb, 1);
        SDL_DrawGPUPrimitives(rp, d->count, 1, d->first, 0);
    }
    if (rp) SDL_EndGPURenderPass(rp);
    SDL_SubmitGPUCommandBuffer(cmd);
    /* textures unused for a while are dropped */
    if ((frame_no & 255) == 0)
        for (int i = 0; i < MAX_TEX; i++)
            if (texs[i].tex && frame_no - texs[i].last_used > 600) {
                SDL_ReleaseGPUTexture(dev, texs[i].tex);
                texs[i].tex = NULL;
                texs[i].id = 0;
            }
}

/* ------------------------------------------------------------------------------- display */

/* The displayed rectangle: the enabled circuit's DISPFB (FBP, DBX, DBY) and DISPLAY (size). */
static SDL_GPUTexture *displayed(float rect[4], int *pw, int *ph) {
    u64 pmode = gs_priv_read(0x0000);
    int circuit2 = (pmode & 2) != 0;
    u64 dispfb = gs_priv_read(circuit2 ? 0x0090 : 0x0070), display = gs_priv_read(circuit2 ? 0x00A0 : 0x0080);
    u32 fbp = dispfb & 0x1FF, dbx = (dispfb >> 32) & 0x7FF, dby = (dispfb >> 43) & 0x7FF;
    u32 magh = ((display >> 23) & 15) + 1, dw = ((display >> 32) & 0xFFF) + 1, dh = ((display >> 44) & 0x7FF) + 1;
    int w = (int)(dw / magh), h = (int)dh;
    if (w <= 0 || h <= 0 || w > 1024 || h > 1024) { w = 640; h = 448; }
    *pw = w;
    *ph = h;
    rect[0] = (float)dbx / RT_SIZE;
    rect[1] = (float)dby / RT_SIZE;
    rect[2] = (float)(dbx + w) / RT_SIZE;
    rect[3] = (float)(dby + h) / RT_SIZE;
    return find_color(fbp);
}

void gpu_set_overlay(const u32 *px, int w, int h) {
    if (!dev) return;
    if (!px) { overlay_on = 0; return; }
    if (!overlay || w != overlay_w || h != overlay_h) {
        if (overlay) SDL_ReleaseGPUTexture(dev, overlay);
        overlay = texture(w, h, SDL_GPU_TEXTUREFORMAT_R8G8B8A8_UNORM, SDL_GPU_TEXTUREUSAGE_SAMPLER);
        overlay_w = w;
        overlay_h = h;
    }
    SDL_GPUCommandBuffer *cmd = SDL_AcquireGPUCommandBuffer(dev);
    SDL_GPUCopyPass *cp = SDL_BeginGPUCopyPass(cmd);
    SDL_GPUTransferBufferCreateInfo ti = {SDL_GPU_TRANSFERBUFFERUSAGE_UPLOAD, (u32)(w * h * 4), 0};
    SDL_GPUTransferBuffer *tb = SDL_CreateGPUTransferBuffer(dev, &ti);
    memcpy(SDL_MapGPUTransferBuffer(dev, tb, false), px, (size_t)w * h * 4);
    SDL_UnmapGPUTransferBuffer(dev, tb);
    SDL_GPUTextureTransferInfo src = {tb, 0, (u32)w, (u32)h};
    SDL_GPUTextureRegion dst = {0};
    dst.texture = overlay;
    dst.w = (u32)w;
    dst.h = (u32)h;
    dst.d = 1;
    SDL_UploadToGPUTexture(cp, &src, &dst, false);
    SDL_EndGPUCopyPass(cp);
    SDL_SubmitGPUCommandBuffer(cmd);
    SDL_ReleaseGPUTransferBuffer(dev, tb);
    overlay_on = 1;
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
    float rect[4];
    int w, h;
    SDL_GPUTexture *src = displayed(rect, &w, &h);
    SDL_GPUColorTargetInfo ci = {0};
    ci.texture = swap;
    ci.load_op = SDL_GPU_LOADOP_CLEAR;
    ci.store_op = SDL_GPU_STOREOP_STORE;
    SDL_GPURenderPass *rp = SDL_BeginGPURenderPass(cmd, &ci, 1, NULL);
    if (src) {
        /* keep the 4:3 picture's aspect inside the window */
        float aspect = 4.0f / 3.0f, ww = (float)sw, wh = (float)sh;
        float vw = ww, vh = ww / aspect;
        if (vh > wh) { vh = wh; vw = wh * aspect; }
        SDL_GPUViewport vp = {(ww - vw) / 2, (wh - vh) / 2, vw, vh, 0, 1};
        SDL_SetGPUViewport(rp, &vp);
        SDL_BindGPUGraphicsPipeline(rp, present_pipe);
        SDL_PushGPUVertexUniformData(cmd, 0, rect, sizeof rect);
        SDL_GPUTextureSamplerBinding tsb = {src, samplers[1 | 6]};
        SDL_BindGPUFragmentSamplers(rp, 0, &tsb, 1);
        SDL_DrawGPUPrimitives(rp, 3, 1, 0, 0);
    }
    if (overlay_on && overlay) {
        SDL_GPUViewport vp = {4, 4, (float)overlay_w, (float)overlay_h, 0, 1};
        SDL_SetGPUViewport(rp, &vp);
        SDL_BindGPUGraphicsPipeline(rp, overlay_pipe);
        float full[4] = {0, 0, 1, 1};
        SDL_PushGPUVertexUniformData(cmd, 0, full, sizeof full);
        SDL_GPUTextureSamplerBinding tsb = {overlay, samplers[6]};
        SDL_BindGPUFragmentSamplers(rp, 0, &tsb, 1);
        SDL_DrawGPUPrimitives(rp, 3, 1, 0, 0);
    }
    SDL_EndGPURenderPass(rp);
    SDL_SubmitGPUCommandBuffer(cmd);
}

/* For --shot: the displayed picture read back, at the PS2's resolution. */
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
    for (int y = 0; y < h; y++)
        for (int x = 0; x < w; x++) out[y * w + x] = px[(u32)y * scale * bw + (u32)x * scale] | 0xFF000000u;
    SDL_UnmapGPUTransferBuffer(dev, tb);
    SDL_ReleaseGPUTransferBuffer(dev, tb);
    return 0;
}
