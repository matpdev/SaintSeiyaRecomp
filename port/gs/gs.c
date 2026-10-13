/*
 * Graphics Synthesizer in software: GIF packets -> GS registers -> GS memory.
 *
 * Adapted from Tenkaichi3Decomp's port/src/gs/gs_core.c (MIT licence, see licenses/): GS memory with
 * its real layout (4 MB; pages, blocks and columns per pixel format), host -> GS uploads, texturing
 * with palettes, alpha blending and test, depth test with the depth buffer in GS memory, frame
 * masks, and a rasteriser for points, lines, triangles and sprites. Added here: GS -> GS copies,
 * one GIF parser state per path, and the display read-out (gs_display, for the window).
 *
 * Not here yet: mip-mapping, fog, dithering, bilinear filtering, GS -> host transfers.
 */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"
#include "gs.h"
#include "vu.h"
#include "perf.h"

PerfCounters perf;

typedef struct {
    float x, y;
    u32 z;
    float s, t, q;
    int u, v;
    u8 r, g, b, a;
} Vertex;

static struct {
    u64 prim, prim_raw, rgbaq, st, uv, texa, prmodecont, prmode;
    u64 tex0[2], tex1[2], clamp[2], xyoffset[2], scissor[2], alpha[2], test[2], frame[2], zbuf[2], fba[2];
    u64 bitbltbuf, trxpos, trxreg, trxdir;
    float q;
    Vertex vtx[3];
    int vcount;
    int transfer;
    u32 tx, ty, tw, th, tpos;
} gs = {.prmodecont = 1};

/* ------------------------------------------------------------------------------- GS memory */

static u32 vram[1 << 20];
static const u8 kBlock32[4][8] = {{0, 1, 4, 5, 16, 17, 20, 21}, {2, 3, 6, 7, 18, 19, 22, 23},
                                  {8, 9, 12, 13, 24, 25, 28, 29}, {10, 11, 14, 15, 26, 27, 30, 31}};
static const u8 kBlock16[8][4] = {{0, 2, 8, 10}, {1, 3, 9, 11}, {4, 6, 12, 14}, {5, 7, 13, 15},
                                  {16, 18, 24, 26}, {17, 19, 25, 27}, {20, 22, 28, 30}, {21, 23, 29, 31}};
static const u8 kBlock16S[8][4] = {{0, 2, 16, 18}, {1, 3, 17, 19}, {8, 10, 24, 26}, {9, 11, 25, 27},
                                   {4, 6, 20, 22}, {5, 7, 21, 23}, {12, 14, 28, 30}, {13, 15, 29, 31}};
static const u8 kCol32[8][8] = {{0, 1, 4, 5, 8, 9, 12, 13}, {2, 3, 6, 7, 10, 11, 14, 15},
                                {16, 17, 20, 21, 24, 25, 28, 29}, {18, 19, 22, 23, 26, 27, 30, 31},
                                {32, 33, 36, 37, 40, 41, 44, 45}, {34, 35, 38, 39, 42, 43, 46, 47},
                                {48, 49, 52, 53, 56, 57, 60, 61}, {50, 51, 54, 55, 58, 59, 62, 63}};
static const u8 kCol16[8][16] = {
    {0, 2, 8, 10, 16, 18, 24, 26, 1, 3, 9, 11, 17, 19, 25, 27}, {4, 6, 12, 14, 20, 22, 28, 30, 5, 7, 13, 15, 21, 23, 29, 31},
    {32, 34, 40, 42, 48, 50, 56, 58, 33, 35, 41, 43, 49, 51, 57, 59}, {36, 38, 44, 46, 52, 54, 60, 62, 37, 39, 45, 47, 53, 55, 61, 63},
    {64, 66, 72, 74, 80, 82, 88, 90, 65, 67, 73, 75, 81, 83, 89, 91}, {68, 70, 76, 78, 84, 86, 92, 94, 69, 71, 77, 79, 85, 87, 93, 95},
    {96, 98, 104, 106, 112, 114, 120, 122, 97, 99, 105, 107, 113, 115, 121, 123},
    {100, 102, 108, 110, 116, 118, 124, 126, 101, 103, 109, 111, 117, 119, 125, 127}};
static const u8 kCol8First[4][16] = {{0, 4, 16, 20, 32, 36, 48, 52, 2, 6, 18, 22, 34, 38, 50, 54},
                                     {8, 12, 24, 28, 40, 44, 56, 60, 10, 14, 26, 30, 42, 46, 58, 62},
                                     {33, 37, 49, 53, 1, 5, 17, 21, 35, 39, 51, 55, 3, 7, 19, 23},
                                     {41, 45, 57, 61, 9, 13, 25, 29, 43, 47, 59, 63, 11, 15, 27, 31}};
static const u8 kCol4First[4][32] = {
    {0, 8, 32, 40, 64, 72, 96, 104, 2, 10, 34, 42, 66, 74, 98, 106, 4, 12, 36, 44, 68, 76, 100, 108, 6, 14, 38, 46, 70, 78, 102, 110},
    {16, 24, 48, 56, 80, 88, 112, 120, 18, 26, 50, 58, 82, 90, 114, 122, 20, 28, 52, 60, 84, 92, 116, 124, 22, 30, 54, 62, 86, 94, 118, 126},
    {65, 73, 97, 105, 1, 9, 33, 41, 67, 75, 99, 107, 3, 11, 35, 43, 69, 77, 101, 109, 5, 13, 37, 45, 71, 79, 103, 111, 7, 15, 39, 47},
    {81, 89, 113, 121, 17, 25, 49, 57, 83, 91, 115, 123, 19, 27, 51, 59, 85, 93, 117, 125, 21, 29, 53, 61, 87, 95, 119, 127, 23, 31, 55, 63}};
static u8 col8[16][16];
static u16 col4[16][32];

static void tables_init(void) {
    for (int y = 0; y < 16; y++) {
        int col = y >> 2;
        for (int x = 0; x < 16; x++) col8[y][x] = (u8)(kCol8First[y & 3][(col & 1) ? (x ^ 4) : x] + col * 64);
        for (int x = 0; x < 32; x++) col4[y][x] = (u16)(kCol4First[y & 3][(col & 1) ? (x ^ 4) : x] + col * 128);
    }
}

/* Reads (write = 0) or writes the pixel (x, y) of a buffer at bp (blocks), width bw (64 pixels), format psm. */
static u32 vram_rw(u32 bp, u32 bw, u32 psm, u32 x, u32 y, int write, u32 v) {
    u32 a, *w, zx = 0;
    if (bw == 0) bw = 1;
    if ((psm & 0x30) == 0x30) { zx = 0x18; psm &= 0x0F; }   /* depth formats: blocks in another order */
    switch (psm) {
    case 0x02: case 0x0A:
        a = ((bp + ((y >> 1) & ~0x1Fu) * bw + ((x >> 1) & ~0x1Fu) +
              ((psm == 0x0A ? kBlock16S : kBlock16)[(y >> 3) & 7][(x >> 4) & 3] ^ zx)) << 7) + kCol16[y & 7][x & 15];
        w = &vram[(a >> 1) & 0xFFFFF];
        if (write) { *w = (*w & ~(0xFFFFu << ((a & 1) * 16))) | (v & 0xFFFF) << ((a & 1) * 16); return 0; }
        return (*w >> ((a & 1) * 16)) & 0xFFFF;
    case 0x13:
        a = ((bp + ((y >> 1) & ~0x1Fu) * (bw >> 1) + ((x >> 2) & ~0x1Fu) + kBlock32[(y >> 4) & 3][(x >> 4) & 7]) << 8) + col8[y & 15][x & 15];
        w = &vram[(a >> 2) & 0xFFFFF];
        if (write) { *w = (*w & ~(0xFFu << ((a & 3) * 8))) | (v & 0xFF) << ((a & 3) * 8); return 0; }
        return (*w >> ((a & 3) * 8)) & 0xFF;
    case 0x14:
        a = ((bp + ((y >> 2) & ~0x1Fu) * (bw >> 1) + ((x >> 2) & ~0x1Fu) + kBlock16[(y >> 4) & 7][(x >> 5) & 3]) << 9) + col4[y & 15][x & 31];
        w = &vram[(a >> 3) & 0xFFFFF];
        if (write) { *w = (*w & ~(0xFu << ((a & 7) * 4))) | (v & 0xF) << ((a & 7) * 4); return 0; }
        return (*w >> ((a & 7) * 4)) & 0xF;
    default:
        a = ((bp + (y & ~0x1Fu) * bw + ((x >> 1) & ~0x1Fu) + (kBlock32[(y >> 3) & 3][(x >> 3) & 7] ^ zx)) << 6) + kCol32[y & 7][x & 7];
        w = &vram[a & 0xFFFFF];
        switch (psm) {
        case 0x01: if (write) { *w = (*w & 0xFF000000u) | (v & 0xFFFFFF); return 0; } return *w & 0xFFFFFF;
        case 0x1B: if (write) { *w = (*w & 0x00FFFFFFu) | v << 24; return 0; } return *w >> 24;
        case 0x24: if (write) { *w = (*w & 0xF0FFFFFFu) | (v & 15) << 24; return 0; } return (*w >> 24) & 15;
        case 0x2C: if (write) { *w = (*w & 0x0FFFFFFFu) | (v & 15) << 28; return 0; } return *w >> 28;
        default: if (write) { *w = v; return 0; } return *w;
        }
    }
}

static int psm_bits(u32 psm) {
    if ((psm & 0x30) == 0x30) psm &= 0x0F;
    switch (psm) {
    case 0x01: return 24;
    case 0x02: case 0x0A: return 16;
    case 0x13: case 0x1B: return 8;
    case 0x14: case 0x24: case 0x2C: return 4;
    default: return 32;
    }
}

/* A stored colour of format psm as R | G << 8 | B << 16 | A << 24 (TEXA supplies alpha). */
static u32 expand(u32 c, u32 psm) {
    u32 ta0 = gs.texa & 0xFF, ta1 = (gs.texa >> 32) & 0xFF, aem = (gs.texa >> 15) & 1;
    if ((psm & 0x30) == 0x30) psm &= 0x0F;
    if (psm == 0x00) return c;
    if (psm == 0x01) { c &= 0xFFFFFF; return c | ((aem && c == 0 ? 0 : ta0) << 24); }
    u32 r = (c & 31) << 3, g = ((c >> 5) & 31) << 3, b = ((c >> 10) & 31) << 3;
    u32 a = (c & 0x8000) ? ta1 : (aem && (c & 0x7FFF) == 0 ? 0 : ta0);
    return r | g << 8 | b << 16 | a << 24;
}

/* ------------------------------------------------------------------------------- textures */

static u32 texel(int ctx, int u, int v) {
    u64 t0 = gs.tex0[ctx], cl = gs.clamp[ctx];
    u32 tbp = t0 & 0x3FFF, tbw = (t0 >> 14) & 0x3F, psm = (t0 >> 20) & 0x3F;
    u32 tw = 1u << ((t0 >> 26) & 15), th = 1u << ((t0 >> 30) & 15);
    u32 cbp = (t0 >> 37) & 0x3FFF, cpsm = (t0 >> 51) & 15, csa = (t0 >> 56) & 31;
    u32 wms = cl & 3, wmt = (cl >> 2) & 3;
    int minu = (cl >> 4) & 0x3FF, maxu = (cl >> 14) & 0x3FF, minv = (cl >> 24) & 0x3FF, maxv = (cl >> 34) & 0x3FF;
    if (wms == 0) u &= (int)tw - 1;
    else if (wms == 1) u = u < 0 ? 0 : u >= (int)tw ? (int)tw - 1 : u;
    else if (wms == 2) u = u < minu ? minu : u > maxu ? maxu : u;
    else u = (u & minu) | maxu;
    if (wmt == 0) v &= (int)th - 1;
    else if (wmt == 1) v = v < 0 ? 0 : v >= (int)th ? (int)th - 1 : v;
    else if (wmt == 2) v = v < minv ? minv : v > maxv ? maxv : v;
    else v = (v & minv) | maxv;
    u32 c = vram_rw(tbp, tbw, psm, (u32)u, (u32)v, 0, 0);
    if (psm_bits(psm) > 8) return expand(c, psm);
    /* palette (CSM1): 16 colours are an 8 x 2 block at CBP (CSA selects one of 32 such in 32-bit
       palettes: here the offset moves down the block), 256 colours a 16 x 16 block in the GS's order */
    if (psm_bits(psm) == 8) {
        c = (c & 0xE7) | ((c & 8) << 1) | ((c & 0x10) >> 1);
        return expand(vram_rw(cbp, 1, cpsm, c & 15, c >> 4, 0, 0), cpsm);
    }
    c += (csa & 15) * 16;
    return expand(vram_rw(cbp, 1, cpsm, c & 7, (c >> 3) & 31, 0, 0), cpsm);
}

/* ------------------------------------------------------------------------------- pixels */

static void pixel(int ctx, int x, int y, u32 z, u32 src) {
    u64 test = gs.test[ctx], al = gs.alpha[ctx], zb = gs.zbuf[ctx], sc = gs.scissor[ctx], fr = gs.frame[ctx];
    u32 fbp = (fr & 0x1FF) << 5, fbw = (fr >> 16) & 0x3F, fpsm = (fr >> 24) & 0x3F;
    int write_rgb = 1, write_z = !((zb >> 32) & 1);

    if (x < (int)(sc & 0x7FF) || x > (int)((sc >> 16) & 0x7FF) || y < (int)((sc >> 32) & 0x7FF) ||
        y > (int)((sc >> 48) & 0x7FF) || x < 0 || y < 0 || x >= 2048 || y >= 2048)
        return;
    u32 sa = src >> 24;
    if (test & 1) {
        u32 ref = (test >> 4) & 0xFF;
        int pass;
        switch ((test >> 1) & 7) {
        case 0: pass = 0; break;
        case 1: pass = 1; break;
        case 2: pass = sa < ref; break;
        case 3: pass = sa <= ref; break;
        case 4: pass = sa == ref; break;
        case 5: pass = sa >= ref; break;
        case 6: pass = sa > ref; break;
        default: pass = sa != ref; break;
        }
        if (!pass) {
            switch ((test >> 12) & 3) {
            case 0: return;
            case 1: write_z = 0; break;
            case 2: write_rgb = 0; break;
            default: write_z = 0; break;
            }
        }
    }
    u32 zbp = (u32)(zb & 0x1FF) << 5, zpsm = 0x30 | (u32)((zb >> 24) & 15);
    u32 zmax = psm_bits(zpsm) == 32 ? 0xFFFFFFFFu : psm_bits(zpsm) == 24 ? 0xFFFFFFu : 0xFFFFu;
    if (z > zmax) z = zmax;
    if ((test >> 16) & 1) {
        u32 zd = vram_rw(zbp, fbw, zpsm, (u32)x, (u32)y, 0, 0);
        switch ((test >> 17) & 3) {
        case 0: return;
        case 1: break;
        case 2: if (z < zd) return; break;
        default: if (z <= zd) return; break;
        }
    }
    u32 d = vram_rw(fbp, fbw, fpsm, (u32)x, (u32)y, 0, 0);
    if (psm_bits(fpsm) == 16)
        d = (d & 31) << 3 | ((d >> 5) & 31) << 11 | ((d >> 10) & 31) << 19 | ((d & 0x8000) ? 0x80000000u : 0);
    else if (fpsm == 1)
        d |= 0x80000000u;
    u32 out[3] = {src & 0xFF, (src >> 8) & 0xFF, (src >> 16) & 0xFF};
    if ((gs.prim >> 6) & 1) {                       /* blending: ((A - B) * C >> 7) + D */
        u32 s[3] = {out[0], out[1], out[2]};
        u32 c = ((al >> 4) & 3) == 0 ? sa : ((al >> 4) & 3) == 1 ? d >> 24 : (u32)((al >> 32) & 0xFF);
        for (int i = 0; i < 3; i++) {
            int dc = (int)((d >> (8 * i)) & 0xFF);
            int a = (al & 3) == 0 ? (int)s[i] : (al & 3) == 1 ? dc : 0;
            int b = ((al >> 2) & 3) == 0 ? (int)s[i] : ((al >> 2) & 3) == 1 ? dc : 0;
            int dd = ((al >> 6) & 3) == 0 ? (int)s[i] : ((al >> 6) & 3) == 1 ? dc : 0;
            int v = (((a - b) * (int)c) >> 7) + dd;
            out[i] = v < 0 ? 0 : v > 255 ? 255 : (u32)v;
        }
    }
    if (gs.fba[ctx]) sa |= 0x80;
    if (write_rgb) {
        u32 c = out[0] | out[1] << 8 | out[2] << 16 | sa << 24, m = (u32)(fr >> 32);
        if (psm_bits(fpsm) == 16) {
            c = out[0] >> 3 | (out[1] >> 3) << 5 | (out[2] >> 3) << 10 | (sa & 0x80) << 8;
            m = ((m >> 3) & 0x1F) | ((m >> 6) & 0x3E0) | ((m >> 9) & 0x7C00) | ((m >> 16) & 0x8000);
        }
        if (m) c = (vram_rw(fbp, fbw, fpsm, (u32)x, (u32)y, 0, 0) & m) | (c & ~m);
        vram_rw(fbp, fbw, fpsm, (u32)x, (u32)y, 1, c);
    }
    if (write_z) vram_rw(zbp, fbw, zpsm, (u32)x, (u32)y, 1, z);
}

static u32 shade(int ctx, u32 vc, float s, float t, float q, int u, int v) {
    u64 t0 = gs.tex0[ctx];
    u32 tfx = (t0 >> 35) & 3, tcc = (t0 >> 34) & 1, tc, c[4], out = 0;
    if (!((gs.prim >> 4) & 1)) return vc;
    if ((gs.prim >> 8) & 1) {
        tc = texel(ctx, u >> 4, v >> 4);
    } else {
        float w = q != 0.0f ? 1.0f / q : 1.0f;
        tc = texel(ctx, (int)(s * w * (float)(1u << ((t0 >> 26) & 15))), (int)(t * w * (float)(1u << ((t0 >> 30) & 15))));
    }
    for (int i = 0; i < 3; i++) {
        u32 cv = (vc >> (8 * i)) & 0xFF, ct = (tc >> (8 * i)) & 0xFF, av = vc >> 24;
        c[i] = tfx == 0 ? (ct * cv) >> 7 : tfx == 1 ? ct : ((ct * cv) >> 7) + av;
        if (c[i] > 255) c[i] = 255;
        out |= c[i] << (8 * i);
    }
    u32 av = vc >> 24, at = tc >> 24;
    c[3] = !tcc ? av : tfx == 0 ? (at * av) >> 7 : tfx == 2 ? at + av : at;
    if (c[3] > 255) c[3] = 255;
    return out | c[3] << 24;
}

/* ------------------------------------------------------------------------------- primitives */

static u32 vcol(const Vertex *v) { return v->r | v->g << 8 | v->b << 16 | (u32)v->a << 24; }

static void draw_sprite(int ctx, const Vertex *a, const Vertex *b) {
    if (a->x > b->x) { const Vertex *t = a; a = b; b = t; }
    float x0 = a->x, x1 = b->x, y0 = a->y, y1 = b->y;
    int xa = (int)(x0 + 0.9375f), xb = (int)(x1 + 0.9375f);
    int ya = (int)((y0 <= y1 ? y0 : y1) + 0.9375f), yb = (int)((y0 <= y1 ? y1 : y0) + 0.9375f);
    u32 col = vcol(b);
    for (int y = ya; y < yb; y++) {
        float fy = y1 != y0 ? ((float)y - y0) / (y1 - y0) : 0.0f;
        for (int x = xa; x < xb; x++) {
            float fx = x1 != x0 ? ((float)x - x0) / (x1 - x0) : 0.0f;
            pixel(ctx, x, y, b->z, shade(ctx, col, a->s + (b->s - a->s) * fx, a->t + (b->t - a->t) * fy, b->q,
                                         (int)((float)a->u + (float)(b->u - a->u) * fx),
                                         (int)((float)a->v + (float)(b->v - a->v) * fy)));
        }
    }
}

static float edge(const Vertex *a, const Vertex *b, float x, float y) {
    return (b->x - a->x) * (y - a->y) - (b->y - a->y) * (x - a->x);
}

static void draw_triangle(int ctx, const Vertex *a, const Vertex *b, const Vertex *c) {
    float area = edge(a, b, c->x, c->y);
    if (area == 0.0f) return;
    int gouraud = (gs.prim >> 3) & 1;
    float minx = a->x, maxx = a->x, miny = a->y, maxy = a->y;
    if (b->x < minx) minx = b->x; if (c->x < minx) minx = c->x;
    if (b->x > maxx) maxx = b->x; if (c->x > maxx) maxx = c->x;
    if (b->y < miny) miny = b->y; if (c->y < miny) miny = c->y;
    if (b->y > maxy) maxy = b->y; if (c->y > maxy) maxy = c->y;
    if (minx < 0) minx = 0; if (miny < 0) miny = 0;
    if (maxx > 2047) maxx = 2047; if (maxy > 2047) maxy = 2047;
    for (int y = (int)miny; y <= (int)maxy; y++)
        for (int x = (int)minx; x <= (int)maxx; x++) {
            double w0 = (double)edge(b, c, (float)x, (float)y) / area, w1 = (double)edge(c, a, (float)x, (float)y) / area;
            double w2 = 1.0 - w0 - w1;
            if (w0 < 0.0 || w1 < 0.0 || w2 < -1e-9) continue;
            u32 col = gouraud
                ? (u32)(a->r * w0 + b->r * w1 + c->r * w2 + 0.5) | (u32)(a->g * w0 + b->g * w1 + c->g * w2 + 0.5) << 8 |
                  (u32)(a->b * w0 + b->b * w1 + c->b * w2 + 0.5) << 16 | (u32)(a->a * w0 + b->a * w1 + c->a * w2 + 0.5) << 24
                : vcol(c);
            pixel(ctx, x, y, (u32)((double)a->z * w0 + (double)b->z * w1 + (double)c->z * w2 + 0.5),
                  shade(ctx, col, (float)(a->s * w0 + b->s * w1 + c->s * w2), (float)(a->t * w0 + b->t * w1 + c->t * w2),
                        (float)(a->q * w0 + b->q * w1 + c->q * w2), (int)(a->u * w0 + b->u * w1 + c->u * w2),
                        (int)(a->v * w0 + b->v * w1 + c->v * w2)));
        }
}

static void draw_line(int ctx, const Vertex *a, const Vertex *b) {
    float dx = b->x - a->x, dy = b->y - a->y, ax = dx < 0 ? -dx : dx, ay = dy < 0 ? -dy : dy;
    int n = (int)(ax > ay ? ax : ay);
    for (int i = 0; i <= n; i++) {
        float f = n ? (float)i / (float)n : 0.0f;
        pixel(ctx, (int)(a->x + dx * f), (int)(a->y + dy * f), b->z, vcol(b));
    }
}

u64 gs_prims;
u32 kernel_vblank_count(void);

/* SSTHEH_PRIMS=<vblank>: list the first 40 primitives drawn from that vertical blank on (tests) */
static void prim_log(int ctx, int type) {
    static int want = -2;
    if (want == -2) want = getenv("SSTHEH_PRIMS") ? atoi(getenv("SSTHEH_PRIMS")) : -1;
    static int shown;
    if (want < 0 || (int)kernel_vblank_count() < want || shown >= 40) return;
    shown++;
    const Vertex *a = &gs.vtx[0], *b = &gs.vtx[gs.vcount ? gs.vcount - 1 : 0];
    u64 t0 = gs.tex0[ctx], fr = gs.frame[ctx];
    fprintf(stderr, "  [%u] prim %d ctx %d (%.1f,%.1f)-(%.1f,%.1f) z %08X rgba %02X%02X%02X%02X tme %d abe %d tex %04X psm %02X "
                    "%dx%d | fbp %03X fbw %u fpsm %02X fbmsk %08X | scissor %llX alpha %llX test %llX\n",
            kernel_vblank_count(), type, ctx, a->x, a->y, b->x, b->y, b->z, b->r, b->g, b->b, b->a, (int)((gs.prim >> 4) & 1),
            (int)((gs.prim >> 6) & 1), (unsigned)(t0 & 0x3FFF), (unsigned)((t0 >> 20) & 0x3F), 1 << ((t0 >> 26) & 15),
            1 << ((t0 >> 30) & 15), (unsigned)(fr & 0x1FF), (unsigned)((fr >> 16) & 0x3F), (unsigned)((fr >> 24) & 0x3F),
            (unsigned)(fr >> 32), (unsigned long long)gs.scissor[ctx], (unsigned long long)gs.alpha[ctx],
            (unsigned long long)gs.test[ctx]);
}

static void vertex(u32 x, u32 y, u32 z, int kick) {
    int ctx = (gs.prim >> 9) & 1, type = gs.prim & 7;
    Vertex v;
    v.x = ((float)(int)x - (float)(gs.xyoffset[ctx] & 0xFFFF)) / 16.0f;
    v.y = ((float)(int)y - (float)((gs.xyoffset[ctx] >> 32) & 0xFFFF)) / 16.0f;
    v.z = z;
    v.r = gs.rgbaq & 0xFF; v.g = (gs.rgbaq >> 8) & 0xFF; v.b = (gs.rgbaq >> 16) & 0xFF; v.a = (gs.rgbaq >> 24) & 0xFF;
    u32 st0 = (u32)gs.st, st1 = (u32)(gs.st >> 32);
    memcpy(&v.s, &st0, 4);
    memcpy(&v.t, &st1, 4);
    v.q = gs.q;
    v.u = gs.uv & 0x3FFF;
    v.v = (gs.uv >> 16) & 0x3FFF;
    if (gs.vcount < 3) gs.vtx[gs.vcount++] = v;
    else { gs.vtx[0] = gs.vtx[1]; gs.vtx[1] = gs.vtx[2]; gs.vtx[2] = v; }
    if (kick && gs.vcount >= (type == 6 || type == 1 || type == 2 ? 2 : type == 0 ? 1 : 3)) prim_log(ctx, type);
    switch (type) {
    case 0: if (kick) { pixel(ctx, (int)v.x, (int)v.y, v.z, vcol(&v)); gs_prims++; perf.prims++; } gs.vcount = 0; break;
    case 1: if (gs.vcount == 2) { if (kick) { draw_line(ctx, &gs.vtx[0], &gs.vtx[1]); gs_prims++; perf.prims++; } gs.vcount = 0; } break;
    case 2: if (gs.vcount == 2) { if (kick) { draw_line(ctx, &gs.vtx[0], &gs.vtx[1]); gs_prims++; perf.prims++; } gs.vtx[0] = gs.vtx[1]; gs.vcount = 1; } break;
    case 3: if (gs.vcount == 3) { if (kick) { draw_triangle(ctx, &gs.vtx[0], &gs.vtx[1], &gs.vtx[2]); gs_prims++; perf.prims++; } gs.vcount = 0; } break;
    case 4: if (gs.vcount == 3 && kick) { draw_triangle(ctx, &gs.vtx[0], &gs.vtx[1], &gs.vtx[2]); gs_prims++; perf.prims++; } break;
    case 5:
        if (gs.vcount == 3) {
            if (kick) { draw_triangle(ctx, &gs.vtx[0], &gs.vtx[1], &gs.vtx[2]); gs_prims++; perf.prims++; }
            gs.vtx[1] = gs.vtx[2];
            gs.vcount = 2;
        }
        break;
    case 6: if (gs.vcount == 2) { if (kick) { draw_sprite(ctx, &gs.vtx[0], &gs.vtx[1]); gs_prims++; perf.prims++; } gs.vcount = 0; } break;
    default: break;
    }
}

/* ------------------------------------------------------------------------------- transfers */

static void local_to_local(void) {
    u32 sbp = gs.bitbltbuf & 0x3FFF, sbw = (gs.bitbltbuf >> 16) & 0x3F, spsm = (gs.bitbltbuf >> 24) & 0x3F;
    u32 dbp = (gs.bitbltbuf >> 32) & 0x3FFF, dbw = (gs.bitbltbuf >> 48) & 0x3F, dpsm = (gs.bitbltbuf >> 56) & 0x3F;
    u32 sx = gs.trxpos & 0x7FF, sy = (gs.trxpos >> 16) & 0x7FF, dx = (gs.trxpos >> 32) & 0x7FF, dy = (gs.trxpos >> 48) & 0x7FF;
    u32 w = gs.trxreg & 0xFFF, h = (gs.trxreg >> 32) & 0xFFF;
    static u32 tmp[2048 * 2048 / 4];
    if ((u64)w * h > sizeof tmp / 4) return;
    for (u32 y = 0; y < h; y++)
        for (u32 x = 0; x < w; x++) tmp[y * w + x] = vram_rw(sbp, sbw, spsm, sx + x, sy + y, 0, 0);
    for (u32 y = 0; y < h; y++)
        for (u32 x = 0; x < w; x++) vram_rw(dbp, dbw, dpsm, dx + x, dy + y, 1, tmp[y * w + x]);
}

static void transfer_begin(void) {
    u32 dir = gs.trxdir & 3;
    gs.transfer = dir == 0;
    gs.tx = (gs.trxpos >> 32) & 0x7FF;
    gs.ty = (gs.trxpos >> 48) & 0x7FF;
    gs.tw = gs.trxreg & 0xFFF;
    gs.th = (gs.trxreg >> 32) & 0xFFF;
    gs.tpos = 0;
    if (dir == 2) local_to_local();
}

static void transfer_data(const u8 *p, u32 bytes) {
    if (!gs.transfer || gs.tw == 0) return;
    u32 dbp = (gs.bitbltbuf >> 32) & 0x3FFF, dbw = (gs.bitbltbuf >> 48) & 0x3F, dpsm = (gs.bitbltbuf >> 56) & 0x3F;
    u32 bits = (u32)psm_bits(dpsm), total = gs.tw * gs.th;
    for (u32 i = 0; i * bits < bytes * 8 && gs.tpos < total; gs.tpos++, i++) {
        u32 x = gs.tx + gs.tpos % gs.tw, y = gs.ty + gs.tpos / gs.tw, c;
        switch (bits) {
        case 32: c = p[i * 4] | p[i * 4 + 1] << 8 | p[i * 4 + 2] << 16 | (u32)p[i * 4 + 3] << 24; break;
        case 24: c = p[i * 3] | p[i * 3 + 1] << 8 | p[i * 3 + 2] << 16; break;
        case 16: c = p[i * 2] | p[i * 2 + 1] << 8; break;
        case 8: c = p[i]; break;
        default: c = (p[i / 2] >> ((i & 1) * 4)) & 15; break;
        }
        vram_rw(dbp, dbw, dpsm, x, y, 1, c);
    }
}

/* ------------------------------------------------------------------------------- registers */

static void prim_update(void) {
    gs.prim = (gs.prmodecont & 1) ? gs.prim_raw : (gs.prim_raw & 7) | (gs.prmode & 0x7F8);
}

static void reg_write(u32 addr, u64 d) {
    switch (addr) {
    case 0x00: gs.prim_raw = d; prim_update(); gs.vcount = 0; break;
    case 0x01: gs.rgbaq = d; { u32 q = (u32)(d >> 32); memcpy(&gs.q, &q, 4); } break;
    case 0x02: gs.st = d; break;
    case 0x03: gs.uv = d; break;
    case 0x04: vertex(d & 0xFFFF, (d >> 16) & 0xFFFF, (u32)((d >> 32) & 0xFFFFFF), 1); break;
    case 0x05: vertex(d & 0xFFFF, (d >> 16) & 0xFFFF, (u32)(d >> 32), 1); break;
    case 0x06: case 0x07: gs.tex0[addr - 6] = d; break;
    case 0x08: case 0x09: gs.clamp[addr - 8] = d; break;
    case 0x0C: vertex(d & 0xFFFF, (d >> 16) & 0xFFFF, (u32)((d >> 32) & 0xFFFFFF), 0); break;
    case 0x0D: vertex(d & 0xFFFF, (d >> 16) & 0xFFFF, (u32)(d >> 32), 0); break;
    case 0x14: case 0x15: gs.tex1[addr - 0x14] = d; break;
    case 0x16: case 0x17:
        gs.tex0[addr - 0x16] = (gs.tex0[addr - 0x16] & ~0x1FFFFFE003F00000ull) | (d & 0x1FFFFFE003F00000ull);
        break;
    case 0x18: case 0x19: gs.xyoffset[addr - 0x18] = d; break;
    case 0x1A: gs.prmodecont = d; prim_update(); break;
    case 0x1B: gs.prmode = d; prim_update(); break;
    case 0x3B: gs.texa = d; break;
    case 0x40: case 0x41: gs.scissor[addr - 0x40] = d; break;
    case 0x42: case 0x43: gs.alpha[addr - 0x42] = d; break;
    case 0x47: case 0x48: gs.test[addr - 0x47] = d; break;
    case 0x4A: case 0x4B: gs.fba[addr - 0x4A] = d & 1; break;
    case 0x4C: case 0x4D: gs.frame[addr - 0x4C] = d; break;
    case 0x4E: case 0x4F: gs.zbuf[addr - 0x4E] = d; break;
    case 0x50: gs.bitbltbuf = d; break;
    case 0x51: gs.trxpos = d; break;
    case 0x52: gs.trxreg = d; break;
    case 0x53: gs.trxdir = d; transfer_begin(); break;
    default: break;
    }
}

/* ------------------------------------------------------------------------------- GIF */

typedef struct { u64 tag_lo, tag_hi; u32 loops, reg; } GifState;
static GifState paths[3];
static u64 gif_tags;

/* GIF data of one path, whole quadwords; a packet may continue in the next call. For PATH1
 * (`stop_at_eop`) the transfer ends with the packet that has EOP set; returns quadwords used. */
static u32 gif(GifState *st, const u8 *p, u32 qwc, int stop_at_eop) {
    const u64 *q = (const u64 *)p;
    u32 used = 0;
    while (used < qwc) {
        if (st->loops == 0) {
            if (stop_at_eop && st->tag_lo && ((st->tag_lo >> 15) & 1)) { st->tag_lo = 0; return used; }
            st->tag_lo = q[0];
            st->tag_hi = q[1];
            q += 2;
            used++;
            gif_tags++;
            st->loops = st->tag_lo & 0x7FFF;
            st->reg = 0;
            {
                static int want = -2, shown;
                if (want == -2) want = getenv("SSTHEH_PRIMS") ? atoi(getenv("SSTHEH_PRIMS")) : -1;
                if (want >= 0 && (int)kernel_vblank_count() >= want && shown < 12 && ((st->tag_lo >> 47) & 7) == 4) {
                    shown++;
                    long ee = (const u8 *)q - rt_ram;
                    fprintf(stderr, "  GIF at EE %08lX path%d tag %016llX %016llX nloop %u flg %u nreg %u\n",
                            ee >= 0 && ee < 0x2000000 ? ee : -1L, (int)(st - paths) + 1,
                            (unsigned long long)st->tag_lo, (unsigned long long)st->tag_hi, st->loops,
                            (unsigned)((st->tag_lo >> 58) & 3), (unsigned)((st->tag_lo >> 60) & 15));
                    if (shown == 1) {
                        u64 sig[2] = {0x3400000000008004ull, 0x512};
                        for (u32 o = 0; o + 16 <= 0x2000000; o += 16)
                            if (!memcmp(rt_ram + o, sig, 16)) fprintf(stderr, "     tag found in RAM at %08X\n", o);
                        for (u32 o = 0; o + 16 <= 0x4000; o += 16)
                            if (!memcmp(rt_spr + o, sig, 16)) fprintf(stderr, "     tag found in scratchpad at %08X\n", 0x70000000 + o);
                    }
                    for (int k = 0; k < 6 && k < (int)(qwc - used); k++)
                        fprintf(stderr, "     %016llX %016llX\n", (unsigned long long)q[k * 2], (unsigned long long)q[k * 2 + 1]);
                }
            }
            if (((st->tag_lo >> 46) & 1)) reg_write(0, (st->tag_lo >> 47) & 0x7FF);
            if (st->loops == 0 && stop_at_eop && ((st->tag_lo >> 15) & 1)) { st->tag_lo = 0; return used; }
            continue;
        }
        u32 flg = (st->tag_lo >> 58) & 3, nreg = (st->tag_lo >> 60) & 15;
        if (nreg == 0) nreg = 16;
        if (flg == 0) {
            u32 r = (st->tag_hi >> (4 * st->reg)) & 15;
            u64 lo = q[0], hi = q[1];
            switch (r) {
            case 0x0: reg_write(0, lo & 0x7FF); break;
            case 0x1: {
                u32 qq;
                memcpy(&qq, &gs.q, 4);
                reg_write(1, (lo & 0xFF) | ((lo >> 32) & 0xFF) << 8 | (hi & 0xFF) << 16 | ((hi >> 32) & 0xFF) << 24 | (u64)qq << 32);
                break;
            }
            case 0x2: gs.st = lo; { u32 qq = (u32)hi; memcpy(&gs.q, &qq, 4); } break;
            case 0x3: reg_write(3, (lo & 0x3FFF) | ((lo >> 32) & 0x3FFF) << 16); break;
            case 0x4: vertex(lo & 0xFFFF, (lo >> 32) & 0xFFFF, (u32)((hi >> 4) & 0xFFFFFF), !((hi >> 47) & 1)); break;
            case 0x5: vertex(lo & 0xFFFF, (lo >> 32) & 0xFFFF, (u32)hi, !((hi >> 47) & 1)); break;
            case 0xC: vertex(lo & 0xFFFF, (lo >> 32) & 0xFFFF, (u32)((hi >> 4) & 0xFFFFFF), 0); break;
            case 0xD: vertex(lo & 0xFFFF, (lo >> 32) & 0xFFFF, (u32)hi, 0); break;
            case 0xE: reg_write((u32)(hi & 0xFF), lo); break;
            case 0xF: break;
            default: reg_write(r, lo); break;
            }
            q += 2;
            used++;
            if (++st->reg == nreg) { st->reg = 0; st->loops--; }
        } else if (flg == 1) {
            for (int half = 0; half < 2 && st->loops; half++) {
                u32 r = (st->tag_hi >> (4 * st->reg)) & 15;
                if (r != 0xE && r != 0xF) reg_write(r, q[half]);
                if (++st->reg == nreg) { st->reg = 0; st->loops--; }
            }
            q += 2;
            used++;
        } else {
            u32 n = st->loops < qwc - used ? st->loops : qwc - used;
            transfer_data((const u8 *)q, n * 16);
            q += 2 * n;
            used += n;
            st->loops -= n;
        }
    }
    return used;
}

u32 kernel_vblank_count(void);

void gif_path1(const u8 *vu_mem, u32 addr) {
    static u8 buf[0x4000 * 2];
    static int told;
    u32 a = (addr & 0x3FF) * 16;
    static int want = -2, dumped;
    if (want == -2) want = getenv("SSTHEH_PRIMS") ? atoi(getenv("SSTHEH_PRIMS")) : -1;
    if (want >= 0 && (int)kernel_vblank_count() >= want && dumped < 2) {
        dumped++;
        fprintf(stderr, "  XGKICK %03X packet:\n", addr & 0x3FF);
        for (int q = 0; q < 14; q++) {
            u32 w[4];
            memcpy(w, vu_mem + ((a + q * 16) & 0x3FFF), 16);
            fprintf(stderr, "    %03X: %08X %08X %08X %08X\n", ((addr & 0x3FF) + q) & 0x3FF, w[0], w[1], w[2], w[3]);
        }
    }
    if (rt_verbose > 1 && told < 40) {
        u64 t[2];
        memcpy(t, vu_mem + a, 16);
        told++;
        rt_log("gif", "XGKICK %03X: tag %016llX %016llX (nloop %u eop %u pre %u prim %03X flg %u nreg %u)", addr & 0x3FF,
               (unsigned long long)t[0], (unsigned long long)t[1], (unsigned)(t[0] & 0x7FFF), (unsigned)((t[0] >> 15) & 1),
               (unsigned)((t[0] >> 46) & 1), (unsigned)((t[0] >> 47) & 0x7FF), (unsigned)((t[0] >> 58) & 3), (unsigned)((t[0] >> 60) & 15));
    }
    memcpy(buf, vu_mem + a, 0x4000 - a);
    memcpy(buf + (0x4000 - a), vu_mem, a);
    paths[0].tag_lo = 0;
    paths[0].loops = 0;
    u64 t = perf_now();
    gif(&paths[0], buf, 0x400, 1);
    perf.gs_ns += perf_now() - t;
}

void gif_path2(const u8 *data, u32 qwc) {
    u64 t = perf_now();
    gif(&paths[1], data, qwc, 0);
    perf.gs_ns += perf_now() - t;
}

void gif_dma(const u8 *data, u32 qwc) {
    u64 t = perf_now();
    gif(&paths[2], data, qwc, 0);
    perf.gs_ns += perf_now() - t;
}

/* ------------------------------------------------------------------------------- display */

/* The picture the CRT circuit shows: PMODE enables circuits 1/2; DISPFBn gives the buffer (FBP in
 * 2048-word pages, FBW in 64 pixels, PSM, DBX/DBY), DISPLAYn the size (DW+1 / MAGH+1, DH+1). */
int gs_display(u32 *out, int max_w, int max_h, int *w, int *h) {
    static int init;
    if (!init) { tables_init(); init = 1; }
    u64 pmode = gs_priv_read(0x0000), dispfb, display;
    int circuit = (pmode & 2) ? 2 : 1;
    dispfb = gs_priv_read(circuit == 2 ? 0x0090 : 0x0070);
    display = gs_priv_read(circuit == 2 ? 0x00A0 : 0x0080);
    u32 fbp = (dispfb & 0x1FF) << 5, fbw = (dispfb >> 9) & 0x3F, psm = (dispfb >> 15) & 0x1F;
    u32 dbx = (dispfb >> 32) & 0x7FF, dby = (dispfb >> 43) & 0x7FF;
    u32 magh = ((display >> 23) & 15) + 1, dw = ((display >> 32) & 0xFFF) + 1, dh = ((display >> 44) & 0x7FF) + 1;
    int pw = (int)(dw / magh), ph = (int)dh;
    if (pw <= 0 || ph <= 0 || fbw == 0) { pw = 640; ph = 448; fbw = 10; }
    if (pw > max_w) pw = max_w;
    if (ph > max_h) ph = max_h;
    for (int y = 0; y < ph; y++)
        for (int x = 0; x < pw; x++) {
            u32 c = vram_rw(fbp, fbw, psm, dbx + (u32)x, dby + (u32)y, 0, 0);
            if (psm_bits(psm) == 16) c = (c & 31) << 3 | ((c >> 5) & 31) << 11 | ((c >> 10) & 31) << 19;
            out[y * pw + x] = c | 0xFF000000u;
        }
    *w = pw;
    *h = ph;
    return 0;
}

void gs_init(void) { tables_init(); }

u64 gs_stats_tags(void) { return gif_tags; }

/* All of GS memory seen as one 1024 x 1024 buffer of 32-bit pixels (tests). */
void gs_dump_vram(u32 *out) {
    for (u32 y = 0; y < 1024; y++)
        for (u32 x = 0; x < 1024; x++) out[y * 1024 + x] = vram_rw(0, 16, 0, x, y, 0, 0) | 0xFF000000u;
}
