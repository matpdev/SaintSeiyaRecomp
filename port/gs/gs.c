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

/* Where a pixel lies inside its page, per format, as an index of units of its own size (words for
 * 32-bit formats, halfwords for 16-bit, bytes for 8-bit, nibbles for 4-bit). A page is 64 x 32
 * pixels of 32 bits, 64 x 64 of 16, 128 x 64 of 8, 128 x 128 of 4. The depth formats are the
 * colour formats with the blocks of a page in another order (block number ^ 0x18). */
static u16 in32[2][32][64], in16[4][64][64], in8[64][128], in4[128][128];

static void tables_init(void) {
    for (int y = 0; y < 16; y++) {
        int col = y >> 2;
        for (int x = 0; x < 16; x++) col8[y][x] = (u8)(kCol8First[y & 3][(col & 1) ? (x ^ 4) : x] + col * 64);
        for (int x = 0; x < 32; x++) col4[y][x] = (u16)(kCol4First[y & 3][(col & 1) ? (x ^ 4) : x] + col * 128);
    }
    for (int z = 0; z < 2; z++) {
        u32 zx = z ? 0x18 : 0;
        for (int y = 0; y < 32; y++)
            for (int x = 0; x < 64; x++) in32[z][y][x] = (u16)(((kBlock32[(y >> 3) & 3][(x >> 3) & 7] ^ zx) << 6) + kCol32[y & 7][x & 7]);
        for (int y = 0; y < 64; y++)
            for (int x = 0; x < 64; x++) {
                in16[z][y][x] = (u16)(((kBlock16[(y >> 3) & 7][(x >> 4) & 3] ^ zx) << 7) + kCol16[y & 7][x & 15]);
                in16[2 + z][y][x] = (u16)(((kBlock16S[(y >> 3) & 7][(x >> 4) & 3] ^ zx) << 7) + kCol16[y & 7][x & 15]);
            }
    }
    for (int y = 0; y < 64; y++)
        for (int x = 0; x < 128; x++) in8[y][x] = (u16)((kBlock32[(y >> 4) & 3][(x >> 4) & 7] << 8) + col8[y & 15][x & 15]);
    for (int y = 0; y < 128; y++)
        for (int x = 0; x < 128; x++) in4[y][x] = (u16)((kBlock16[(y >> 4) & 7][(x >> 5) & 3] << 9) + col4[y & 15][x & 31]);
}

/* Reads (write = 0) or writes the pixel (x, y) of a buffer at bp (blocks), width bw (64 pixels), format psm. */
static inline u32 vram_rw(u32 bp, u32 bw, u32 psm, u32 x, u32 y, int write, u32 v) {
    u32 a, *w, z = 0;
    if (bw == 0) bw = 1;
    if ((psm & 0x30) == 0x30) { z = 1; psm &= 0x0F; }
    switch (psm) {
    case 0x02: case 0x0A:                                   /* 16 bits: halfword index */
        a = ((bp + (y >> 6) * 32 * bw + (x >> 6) * 32) << 7) + in16[(psm == 0x0A) * 2 + z][y & 63][x & 63];
        w = &vram[(a >> 1) & 0xFFFFF];
        if (write) { *w = (*w & ~(0xFFFFu << ((a & 1) * 16))) | (v & 0xFFFF) << ((a & 1) * 16); return 0; }
        return (*w >> ((a & 1) * 16)) & 0xFFFF;
    case 0x13:                                              /* 8 bits: byte index */
        a = ((bp + (y >> 6) * 32 * (bw >> 1) + (x >> 7) * 32) << 8) + in8[y & 63][x & 127];
        w = &vram[(a >> 2) & 0xFFFFF];
        if (write) { *w = (*w & ~(0xFFu << ((a & 3) * 8))) | (v & 0xFF) << ((a & 3) * 8); return 0; }
        return (*w >> ((a & 3) * 8)) & 0xFF;
    case 0x14:                                              /* 4 bits: nibble index */
        a = ((bp + (y >> 7) * 32 * (bw >> 1) + (x >> 7) * 32) << 9) + in4[y & 127][x & 127];
        w = &vram[(a >> 3) & 0xFFFFF];
        if (write) { *w = (*w & ~(0xFu << ((a & 7) * 4))) | (v & 0xF) << ((a & 7) * 4); return 0; }
        return (*w >> ((a & 7) * 4)) & 0xF;
    default:                                                /* 32 bits and the formats inside a 32-bit pixel */
        a = ((bp + (y >> 5) * 32 * bw + (x >> 6) * 32) << 6) + in32[z][y & 31][x & 63];
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

/* The word holding pixel (x, y) of a 32-bit-wide format (colour 0x00/0x01, depth 0x30/0x31). */
static inline u32 *word32(u32 bp, u32 bw, u32 x, u32 y, int z) {
    if (bw == 0) bw = 1;
    return &vram[(((bp + (y >> 5) * 32 * bw + (x >> 6) * 32) << 6) + in32[z][y & 31][x & 63]) & 0xFFFFF];
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

static void pixel_general(int ctx, int x, int y, u32 z, u32 src);

/* The common case, done with one address computation per buffer: a 32- or 24-bit frame buffer and a
 * 32- or 24-bit depth buffer. Everything else goes through pixel_general. */
static void pixel(int ctx, int x, int y, u32 z, u32 src) {
    u64 fr = gs.frame[ctx], zb = gs.zbuf[ctx], test = gs.test[ctx], sc = gs.scissor[ctx];
    u32 fpsm = (fr >> 24) & 0x3F, zpsm = (zb >> 24) & 15;
    if ((fpsm != 0x00 && fpsm != 0x01) || zpsm > 1 || (test & 1)) { pixel_general(ctx, x, y, z, src); return; }
    if (x < (int)(sc & 0x7FF) || x > (int)((sc >> 16) & 0x7FF) || y < (int)((sc >> 32) & 0x7FF) ||
        y > (int)((sc >> 48) & 0x7FF) || x < 0 || y < 0)
        return;
    u32 fbp = (fr & 0x1FF) << 5, fbw = (fr >> 16) & 0x3F;
    int zte = (test >> 16) & 1, zwrite = !((zb >> 32) & 1);
    u32 *zw = NULL;
    if (zte || zwrite) {
        u32 zmax = zpsm == 0 ? 0xFFFFFFFFu : 0xFFFFFFu;
        if (z > zmax) z = zmax;
        zw = word32((u32)(zb & 0x1FF) << 5, fbw, (u32)x, (u32)y, 1);
        if (zte) {
            u32 zd = zpsm == 0 ? *zw : (*zw & 0xFFFFFF);
            switch ((test >> 17) & 3) {
            case 0: return;
            case 1: break;
            case 2: if (z < zd) return; break;
            default: if (z <= zd) return; break;
            }
        }
    }
    u32 *fw = word32(fbp, fbw, (u32)x, (u32)y, 0);
    u32 sa = src >> 24, m = (u32)(fr >> 32);
    u32 out = src & 0xFFFFFF;
    if ((gs.prim >> 6) & 1) {                       /* blending: ((A - B) * C >> 7) + D */
        u64 al = gs.alpha[ctx];
        u32 d = *fw | (fpsm == 1 ? 0x80000000u : 0);
        u32 c = ((al >> 4) & 3) == 0 ? sa : ((al >> 4) & 3) == 1 ? d >> 24 : (u32)((al >> 32) & 0xFF);
        out = 0;
        for (int i = 0; i < 3; i++) {
            int sc_ = (int)((src >> (8 * i)) & 0xFF), dc = (int)((d >> (8 * i)) & 0xFF);
            int A = (al & 3) == 0 ? sc_ : (al & 3) == 1 ? dc : 0;
            int B = ((al >> 2) & 3) == 0 ? sc_ : ((al >> 2) & 3) == 1 ? dc : 0;
            int D = ((al >> 6) & 3) == 0 ? sc_ : ((al >> 6) & 3) == 1 ? dc : 0;
            int v = (((A - B) * (int)c) >> 7) + D;
            out |= (u32)(v < 0 ? 0 : v > 255 ? 255 : v) << (8 * i);
        }
    }
    if (gs.fba[ctx]) sa |= 0x80;
    u32 cval = out | sa << 24;
    if (fpsm == 1) m |= 0xFF000000u;                /* 24-bit: the top byte is not this buffer's */
    *fw = m ? (*fw & m) | (cval & ~m) : cval;
    if (zwrite) *zw = zpsm == 0 ? z : (*zw & 0xFF000000u) | (z & 0xFFFFFF);
}

static void pixel_general(int ctx, int x, int y, u32 z, u32 src) {
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

/* The scissor rectangle of a context, as inclusive pixel bounds. */
static void scissor_of(int ctx, int *x0, int *x1, int *y0, int *y1) {
    u64 sc = gs.scissor[ctx];
    *x0 = (int)(sc & 0x7FF);
    *x1 = (int)((sc >> 16) & 0x7FF);
    *y0 = (int)((sc >> 32) & 0x7FF);
    *y1 = (int)((sc >> 48) & 0x7FF);
}

static void draw_sprite(int ctx, const Vertex *a, const Vertex *b) {
    if (a->x > b->x) { const Vertex *t = a; a = b; b = t; }
    float x0 = a->x, x1 = b->x, y0 = a->y, y1 = b->y;
    int xa = (int)(x0 + 0.9375f), xb = (int)(x1 + 0.9375f);
    int ya = (int)((y0 <= y1 ? y0 : y1) + 0.9375f), yb = (int)((y0 <= y1 ? y1 : y0) + 0.9375f);
    int sx0, sx1, sy0, sy1;
    scissor_of(ctx, &sx0, &sx1, &sy0, &sy1);
    int xs = xa > sx0 ? xa : sx0, xe = xb < sx1 + 1 ? xb : sx1 + 1;
    int ys = ya > sy0 ? ya : sy0, ye = yb < sy1 + 1 ? yb : sy1 + 1;
    u32 col = vcol(b);
    float idx = x1 != x0 ? 1.0f / (x1 - x0) : 0.0f, idy = y1 != y0 ? 1.0f / (y1 - y0) : 0.0f;
    float ds = (b->s - a->s), dt = (b->t - a->t), du = (float)(b->u - a->u), dv = (float)(b->v - a->v);
    int textured = (gs.prim >> 4) & 1;
    for (int y = ys; y < ye; y++) {
        float fy = y1 != y0 ? ((float)y - y0) * idy : 0.0f;
        float t = a->t + dt * fy;
        int v = (int)((float)a->v + dv * fy);
        for (int x = xs; x < xe; x++) {
            u32 c = col;
            if (textured) {
                float fx = x1 != x0 ? ((float)x - x0) * idx : 0.0f;
                c = shade(ctx, col, a->s + ds * fx, t, b->q, (int)((float)a->u + du * fx), v);
            }
            pixel(ctx, x, y, b->z, c);
        }
    }
}

static float edge(const Vertex *a, const Vertex *b, float x, float y) {
    return (b->x - a->x) * (y - a->y) - (b->y - a->y) * (x - a->x);
}

static void draw_triangle(int ctx, const Vertex *a, const Vertex *b, const Vertex *c) {
    float area = edge(a, b, c->x, c->y);
    if (area == 0.0f) return;
    int gouraud = (gs.prim >> 3) & 1, textured = (gs.prim >> 4) & 1;
    float minx = a->x, maxx = a->x, miny = a->y, maxy = a->y;
    if (b->x < minx) minx = b->x; if (c->x < minx) minx = c->x;
    if (b->x > maxx) maxx = b->x; if (c->x > maxx) maxx = c->x;
    if (b->y < miny) miny = b->y; if (c->y < miny) miny = c->y;
    if (b->y > maxy) maxy = b->y; if (c->y > maxy) maxy = c->y;
    int sx0, sx1, sy0, sy1;
    scissor_of(ctx, &sx0, &sx1, &sy0, &sy1);
    int xs = (int)(minx < 0 ? 0 : minx), xe = (int)(maxx > 2047 ? 2047 : maxx);
    int ys = (int)(miny < 0 ? 0 : miny), ye = (int)(maxy > 2047 ? 2047 : maxy);
    if (xs < sx0) xs = sx0;
    if (xe > sx1) xe = sx1;
    if (ys < sy0) ys = sy0;
    if (ye > sy1) ye = sy1;
    if (xs > xe || ys > ye) return;
    /* barycentric weights, stepped across each row: w0 from edge (b, c), w1 from edge (c, a) */
    double inv = 1.0 / (double)area;
    double d0x = -(double)(c->y - b->y) * inv, d1x = -(double)(a->y - c->y) * inv;
    u32 flat = vcol(c);
    for (int y = ys; y <= ye; y++) {
        double w0 = (double)edge(b, c, (float)xs, (float)y) * inv, w1 = (double)edge(c, a, (float)xs, (float)y) * inv;
        for (int x = xs; x <= xe; x++, w0 += d0x, w1 += d1x) {
            double w2 = 1.0 - w0 - w1;
            if (w0 < 0.0 || w1 < 0.0 || w2 < -1e-9) continue;
            u32 col = gouraud
                ? (u32)(a->r * w0 + b->r * w1 + c->r * w2 + 0.5) | (u32)(a->g * w0 + b->g * w1 + c->g * w2 + 0.5) << 8 |
                  (u32)(a->b * w0 + b->b * w1 + c->b * w2 + 0.5) << 16 | (u32)(a->a * w0 + b->a * w1 + c->a * w2 + 0.5) << 24
                : flat;
            if (textured)
                col = shade(ctx, col, (float)(a->s * w0 + b->s * w1 + c->s * w2), (float)(a->t * w0 + b->t * w1 + c->t * w2),
                            (float)(a->q * w0 + b->q * w1 + c->q * w2), (int)(a->u * w0 + b->u * w1 + c->u * w2),
                            (int)(a->v * w0 + b->v * w1 + c->v * w2));
            pixel(ctx, x, y, (u32)((double)a->z * w0 + (double)b->z * w1 + (double)c->z * w2 + 0.5), col);
        }
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
static void record(int ctx, int type, const Vertex *v);   /* GPU recording, below */
extern int gpu_on;

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
    if (gpu_on) {
        /* same vertex bookkeeping as below, recording instead of drawing */
        int need = type == 0 ? 1 : (type == 1 || type == 2 || type == 6) ? 2 : 3;
        if (gs.vcount >= need) {
            if (kick && type <= 6 && type != 7) { record(ctx, type, gs.vtx); gs_prims++; perf.prims++; }
            if (type == 2) { gs.vtx[0] = gs.vtx[1]; gs.vcount = 1; }
            else if (type == 4) { /* strip: keep the last two (shifted on the next vertex) */ }
            else if (type == 5) { gs.vtx[1] = gs.vtx[2]; gs.vcount = 2; }
            else gs.vcount = 0;
        }
        return;
    }
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

/* ------------------------------------------------------------------------------- GPU recording */

#include <pthread.h>
#include "gpu.h"

int gpu_on;
static u32 page_gen[512];                  /* bumped when anything writes into that 8 KB page */
static u8 rt_fbp[512];                     /* frame buffers drawn to (FBP), for render-to-texture */
static pthread_mutex_t rec_lock = PTHREAD_MUTEX_INITIALIZER;
/* Frames: the one being recorded (rec), complete ones waiting for the window (sealed, oldest
 * first), and free ones. A frame is sealed when the game shows a new picture (DISPFB written:
 * gpu_seal_frame, in the order of the GS's work); if nothing waits for it, it keeps recording
 * (the next frame then holds two), so no texture upload is ever lost. */
#define NFRAMES 8
static GpuFrame frames[NFRAMES], *rec = &frames[0];
static GpuFrame *sealed[NFRAMES], *free_frames[NFRAMES];
static int nsealed, nfree;
static u32 rec_frame = 1;                  /* frames sealed */
static u32 last_seal_vb;

static void pages_written(u32 bp_blocks, u32 blocks) {
    for (u32 pg = bp_blocks / 32; pg <= (bp_blocks + blocks) / 32 && pg < bp_blocks / 32 + 512; pg++) page_gen[pg & 511]++;
}

#define GROW(arr, n, cap, type) do { if ((n) >= (cap)) { (cap) = (cap) ? (cap) * 2 : 1024; \
    (arr) = (type *)realloc((arr), (size_t)(cap) * sizeof(type)); } } while (0)

static void frames_init(void) {
    static int done;
    if (done) return;
    done = 1;
    for (int i = 1; i < NFRAMES; i++) free_frames[nfree++] = &frames[i];
}

u64 gs_priv_read(u32 off);
u32 kernel_vblank_count(void);

static void seal_locked(void) {
    frames_init();
    if (!rec->ndraws || nsealed == NFRAMES || !nfree) return;
    static const u32 regs[5] = {0x0000, 0x0070, 0x0080, 0x0090, 0x00A0};
    for (int k = 0; k < 5; k++) rec->priv[k] = gs_priv_read(regs[k]);
    rec->seq = rec_frame;
    sealed[nsealed++] = rec;
    rec = free_frames[--nfree];
    rec->ndraws = rec->nverts = rec->nuploads = rec->nfrees = 0;
    rec_frame++;
    last_seal_vb = kernel_vblank_count();
}

u32 gpu_frames_sealed(void) { return rec_frame; }

void gpu_seal_frame(void) {
    pthread_mutex_lock(&rec_lock);
    seal_locked();
    pthread_mutex_unlock(&rec_lock);
}

/* Window's thread, at every vertical blank: a game that shows pictures without writing DISPFB
 * (one buffer) still gets its frames out, a few vertical blanks late. */
void gpu_vblank_tick(void) {
    pthread_mutex_lock(&rec_lock);
    if (rec->ndraws && kernel_vblank_count() - last_seal_vb >= 3) seal_locked();
    pthread_mutex_unlock(&rec_lock);
}

GpuFrame *gpu_next_frame(void) {
    pthread_mutex_lock(&rec_lock);
    GpuFrame *f = NULL;
    if (nsealed) {
        f = sealed[0];
        memmove(sealed, sealed + 1, (size_t)--nsealed * sizeof *sealed);
    }
    pthread_mutex_unlock(&rec_lock);
    return f;
}

void gpu_release_frame(GpuFrame *f) {
    if (!f) return;
    pthread_mutex_lock(&rec_lock);
    for (u32 i = 0; i < f->nuploads; i++) free(f->uploads[i].px);
    f->ndraws = f->nverts = f->nuploads = f->nfrees = 0;
    free_frames[nfree++] = f;
    pthread_mutex_unlock(&rec_lock);
}

/* ---- texture cache
 * Textures are identified by their content: TEX0, TEXA and a hash of the GS memory pages they read
 * (and of the CLUT's). The game uploads many textures again every frame with the same data, so
 * page versions alone would decode and upload them again each frame. Page versions stay as a fast
 * path: while none of the pages changed, the content is not hashed again.
 * gs.c owns the textures' lifetime: entries are indices 1..GPU_MAX_TEX-1 (the GPU texture slot),
 * the least recently used go when there are too many bytes or no free entry, and the frame tells
 * the GPU side which to release. */
typedef struct { u64 ckey[3]; u32 w, h, last, used; } TexEnt;
static TexEnt tex_ents[GPU_MAX_TEX];
static u32 tex_free[GPU_MAX_TEX], ntex_free, tex_inited;
static u64 tex_bytes;
#define TEX_BUDGET (256ull << 20)

typedef struct { u64 key[3]; u64 ckey[3]; u32 idx; } TexFast;   /* (TEX0, TEXA, page versions) -> entry */
static TexFast tex_fast[8192];
static u32 tex_by_content[16384];          /* content key -> entry (direct mapped) */

static u64 pages_version(u32 first, u32 n) {
    u64 h = 1469598103934665603ull;
    for (u32 pg = first; pg < first + n; pg++) h = (h ^ page_gen[pg & 511]) * 1099511628211ull ^ pg;
    return h;
}

static u64 pages_hash(u32 first, u32 n) {
    u64 h = 0x9E3779B97F4A7C15ull ^ n;
    for (u32 pg = first; pg < first + n; pg++) {
        const u64 *w = (const u64 *)&vram[(pg & 511) * 2048];
        u64 a = h, b = h ^ 0xC2B2AE3D27D4EB4Full;
        for (int i = 0; i < 1024; i += 2) {
            a = (a ^ w[i]) * 0x100000001B3ull;
            b = (b ^ w[i + 1]) * 0xFF51AFD7ED558CCDull;
        }
        h = (h ^ a ^ (b >> 29)) * 0x9E3779B97F4A7C15ull ^ pg;
    }
    return h;
}

/* The 8 KB pages a tw x th texture at bp (blocks), width bw, format psm lies in. */
static void footprint(u32 bp, u32 bw, u32 psm, u32 tw, u32 th, u32 *first, u32 *n) {
    if (bw == 0) bw = 1;
    if ((psm & 0x30) == 0x30) psm &= 0x0F;
    u32 x = tw - 1, y = th - 1, last;
    switch (psm) {
    case 0x02: case 0x0A: last = (y >> 6) * bw + (x >> 6); break;
    case 0x13: last = (y >> 6) * (bw >> 1 ? bw >> 1 : 1) + (x >> 7); break;
    case 0x14: last = (y >> 7) * (bw >> 1 ? bw >> 1 : 1) + (x >> 7); break;
    default: last = (y >> 5) * bw + (x >> 6); break;
    }
    *first = bp / 32;
    *n = last + 1 + ((bp & 31) != 0);
    if (*n > 512) *n = 512;
}

static void tex_release(u32 i) {
    tex_ents[i].used = 0;
    tex_bytes -= (u64)tex_ents[i].w * tex_ents[i].h * 4;
    tex_free[ntex_free++] = i;
    GROW(rec->frees, rec->nfrees, rec->cap_frees, u32);
    rec->frees[rec->nfrees++] = i;
}

/* A free entry for w x h, dropping the least recently used ones (never those of this frame). */
static u32 tex_alloc(u32 w, u32 h) {
    if (!tex_inited) {
        for (u32 i = GPU_MAX_TEX - 1; i >= 1; i--) tex_free[ntex_free++] = i;
        tex_inited = 1;
    }
    u64 need = (u64)w * h * 4;
    static const u32 ages[] = {600, 120, 30, 2, 1};
    for (int k = 0; k < 5 && (tex_bytes + need > TEX_BUDGET || ntex_free == 0); k++)
        for (u32 i = 1; i < GPU_MAX_TEX; i++)
            if (tex_ents[i].used && rec_frame - tex_ents[i].last >= ages[k]) tex_release(i);
    if (ntex_free == 0) return 0;
    u32 i = tex_free[--ntex_free];
    tex_ents[i] = (TexEnt){{0}, w, h, rec_frame, 1};
    tex_bytes += need;
    return i;
}

u32 gpu_tex_stats(u64 *bytes) { *bytes = tex_bytes; return GPU_MAX_TEX - 1 - ntex_free; }

static void transfer_flush(void);

static s32 texture_for(int ctx, u32 *w_out, u32 *h_out) {
    transfer_flush();
    u64 t0 = gs.tex0[ctx];
    u32 tbp = t0 & 0x3FFF, tbw = (t0 >> 14) & 0x3F, psm = (t0 >> 20) & 0x3F;
    u32 tw = 1u << ((t0 >> 26) & 15), th = 1u << ((t0 >> 30) & 15);
    u32 cbp = (t0 >> 37) & 0x3FFF, cpsm = (t0 >> 51) & 15, csa = (t0 >> 56) & 31;
    if (tw > 1024) tw = 1024;
    if (th > 1024) th = 1024;
    *w_out = tw;
    *h_out = th;
    /* a frame buffer the game drew into, read as a 32/24-bit texture: the render target itself */
    if ((tbp & 31) == 0 && rt_fbp[(tbp >> 5) & 511] && psm_bits(psm) >= 24) return -2 - (s32)(tbp >> 5);
    u32 bits = psm_bits(psm), pfirst, pn;
    footprint(tbp, tbw, psm, tw, th, &pfirst, &pn);
    u32 cfirst = cbp / 32, cn = bits <= 8 ? 1 + ((cbp & 31) != 0) : 0;
    u64 base = t0 & 0x1FFFFFFFFFFFFFFFull;
    u64 key[3] = {base, gs.texa, pages_version(pfirst, pn) * 31 + (cn ? pages_version(cfirst, cn) : 0)};
    TexFast *f = &tex_fast[(key[0] ^ key[1] * 7 ^ key[2] * 13) % 8192];
    if (f->idx && !memcmp(f->key, key, sizeof key)) {
        TexEnt *e = &tex_ents[f->idx];
        if (e->used && !memcmp(e->ckey, f->ckey, sizeof f->ckey)) { e->last = rec_frame; return (s32)f->idx; }
    }
    /* the pages changed (or never seen): same content as a texture we have? */
    u64 ckey[3] = {base, gs.texa, pages_hash(pfirst, pn) * 31 + (cn ? pages_hash(cfirst, cn) : 0)};
    u32 *cs = &tex_by_content[(ckey[0] ^ ckey[1] * 7 ^ ckey[2] * 13) % 16384];
    u32 idx = *cs;
    if (!(idx && tex_ents[idx].used && !memcmp(tex_ents[idx].ckey, ckey, sizeof ckey))) {
        /* decode */
        idx = tex_alloc(tw, th);
        if (!idx) return -1;
        u32 *px = malloc((size_t)tw * th * 4);
        for (u32 y = 0; y < th; y++)
            for (u32 x = 0; x < tw; x++) {
                u32 c = vram_rw(tbp, tbw, psm, x, y, 0, 0);
                if (bits > 8) c = expand(c, psm);
                else if (bits == 8) {
                    c = (c & 0xE7) | ((c & 8) << 1) | ((c & 0x10) >> 1);
                    c = expand(vram_rw(cbp, 1, cpsm, c & 15, c >> 4, 0, 0), cpsm);
                } else {
                    c += (csa & 15) * 16;
                    c = expand(vram_rw(cbp, 1, cpsm, c & 7, (c >> 3) & 31, 0, 0), cpsm);
                }
                px[y * tw + x] = c;
            }
        memcpy(tex_ents[idx].ckey, ckey, sizeof ckey);
        *cs = idx;
        GROW(rec->uploads, rec->nuploads, rec->cap_uploads, GpuTexUpload);
        rec->uploads[rec->nuploads++] = (GpuTexUpload){idx, tw, th, px};
    }
    tex_ents[idx].last = rec_frame;
    memcpy(f->key, key, sizeof key);
    memcpy(f->ckey, ckey, sizeof ckey);
    f->idx = idx;
    return (s32)idx;
}

static void put_vertex(const Vertex *v, u32 z_shift, const Vertex *colour_of, int fst) {
    GROW(rec->verts, rec->nverts, rec->cap_verts, GpuVertex);
    GpuVertex *o = &rec->verts[rec->nverts++];
    const Vertex *c = colour_of ? colour_of : v;
    o->x = v->x;
    o->y = v->y;
    o->z = (float)((double)v->z / (double)(1ull << z_shift));
    o->r = c->r; o->g = c->g; o->b = c->b; o->a = c->a;
    if (fst) { o->s = v->u / 16.0f; o->t = v->v / 16.0f; o->q = 1.0f; }
    else { o->s = v->s; o->t = v->t; o->q = v->q; }
    o->_p0 = o->_p1 = 0;
}

/* One primitive (points become 1-pixel quads, lines 1-pixel-wide quads, sprites two triangles). */
static void record(int ctx, int type, const Vertex *v) {
    pthread_mutex_lock(&rec_lock);
    u64 fr = gs.frame[ctx], zb = gs.zbuf[ctx], test = gs.test[ctx], t0 = gs.tex0[ctx], cl = gs.clamp[ctx];
    GROW(rec->draws, rec->ndraws, rec->cap_draws, GpuDraw);
    GpuDraw *d = &rec->draws[rec->ndraws];
    memset(d, 0, sizeof *d);
    d->fbp = fr & 0x1FF;
    d->fbw = (fr >> 16) & 0x3F;
    d->fpsm = (fr >> 24) & 0x3F;
    d->fbmsk = (u32)(fr >> 32);
    d->zbp = zb & 0x1FF;
    d->zpsm = (zb >> 24) & 15;
    d->zwrite = !((zb >> 32) & 1);
    d->ztst = !((test >> 16) & 1) ? 0 : 1 + ((test >> 17) & 3);
    if (d->ztst == 0) d->zwrite = 0;           /* (ZTE = 0 is not allowed by the GS; treat as no depth) */
    d->abe = (gs.prim >> 6) & 1;
    d->alpha = gs.alpha[ctx];
    d->atest[0] = test & 1;
    d->atest[1] = (test >> 1) & 7;
    d->atest[2] = (test >> 4) & 0xFF;
    d->atest[3] = (test >> 12) & 3;
    d->textured = (gs.prim >> 4) & 1;
    d->tfx = (t0 >> 35) & 3;
    d->tcc = (t0 >> 34) & 1;
    d->fst = (gs.prim >> 8) & 1;
    d->tex = -1;
    if (d->textured) d->tex = texture_for(ctx, &d->tw, &d->th);
    d->filter = (gs.tex1[ctx] >> 5) & 1;
    u32 wms = cl & 3, wmt = (cl >> 2) & 3;
    d->wrap_u = wms != 0 && wms != 3;
    d->wrap_v = wmt != 0 && wmt != 3;
    d->region[0] = -1;
    if (wms == 2 || wmt == 2) {
        d->region[0] = wms == 2 ? (float)((cl >> 4) & 0x3FF) : 0;
        d->region[2] = wms == 2 ? (float)((cl >> 14) & 0x3FF) : 4096;
        d->region[1] = wmt == 2 ? (float)((cl >> 24) & 0x3FF) : 0;
        d->region[3] = wmt == 2 ? (float)((cl >> 34) & 0x3FF) : 4096;
    }
    u64 sc = gs.scissor[ctx];
    d->scissor[0] = sc & 0x7FF;
    d->scissor[1] = (sc >> 16) & 0x7FF;
    d->scissor[2] = (sc >> 32) & 0x7FF;
    d->scissor[3] = (sc >> 48) & 0x7FF;
    d->fba = gs.fba[ctx] & 1;
    d->first = rec->nverts;
    u32 zs = d->zpsm == 0 ? 32 : d->zpsm == 1 ? 24 : 16;
    int fst = d->fst, gouraud = (gs.prim >> 3) & 1;
    switch (type) {
    case 3: case 4: case 5: {                   /* triangle */
        const Vertex *flat = gouraud ? NULL : &v[2];
        for (int i = 0; i < 3; i++) put_vertex(&v[i], zs, flat, fst);
        break;
    }
    case 6: {                                   /* sprite: corners from the two vertices */
        Vertex q[4] = {v[0], v[1], v[0], v[1]};
        q[2].x = v[1].x; q[2].s = v[1].s; q[2].u = v[1].u;          /* top right */
        q[3].x = v[0].x; q[3].s = v[0].s; q[3].u = v[0].u;          /* bottom left */
        q[2].y = v[0].y; q[2].t = v[0].t; q[2].v = v[0].v;
        q[3].y = v[1].y; q[3].t = v[1].t; q[3].v = v[1].v;
        for (int i = 0; i < 4; i++) { q[i].z = v[1].z; q[i].q = v[1].q; }
        const Vertex *order[6] = {&q[0], &q[2], &q[3], &q[2], &q[1], &q[3]};
        for (int i = 0; i < 6; i++) put_vertex(order[i], zs, &v[1], fst);
        break;
    }
    default: {                                  /* point / line: a thin quad */
        Vertex a = v[0], b = type == 0 ? v[0] : v[1];
        Vertex q[4] = {a, b, a, b};
        q[0].x -= 0.5f; q[2].x += 0.5f; q[1].x -= 0.5f; q[3].x += 0.5f;
        q[0].y -= 0.5f; q[1].y += 0.5f; q[2].y -= 0.5f; q[3].y += 0.5f;
        const Vertex *order[6] = {&q[0], &q[1], &q[2], &q[2], &q[1], &q[3]};
        for (int i = 0; i < 6; i++) put_vertex(order[i], zs, &b, fst);
        break;
    }
    }
    d->count = rec->nverts - d->first;
    rec->ndraws++;
    rt_fbp[d->fbp & 511] = 1;
    pthread_mutex_unlock(&rec_lock);
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
    pages_written(dbp, ((dbw ? dbw : 1) * 64 * (dy + h) * (u32)psm_bits(dpsm) / 8 + 255) / 256);
}

static void transfer_flush(void);

static void transfer_begin(void) {
    transfer_flush();                                   /* an upload left incomplete */
    u32 dir = gs.trxdir & 3;
    gs.transfer = dir == 0;
    gs.tx = (gs.trxpos >> 32) & 0x7FF;
    gs.ty = (gs.trxpos >> 48) & 0x7FF;
    gs.tw = gs.trxreg & 0xFFF;
    gs.th = (gs.trxreg >> 32) & 0xFFF;
    gs.tpos = 0;
    if (dir == 2) local_to_local();
}

static void transfer_write(const u8 *p, u32 bytes) {
    if (!gs.transfer || gs.tw == 0) return;
    u32 dbp = (gs.bitbltbuf >> 32) & 0x3FFF, dbw = (gs.bitbltbuf >> 48) & 0x3F, dpsm = (gs.bitbltbuf >> 56) & 0x3F;
    pages_written(dbp, ((dbw ? dbw : 1) * 64 * (gs.ty + gs.th + 64) * (u32)psm_bits(dpsm) / 8 + 255) / 256);
    u32 bits = (u32)psm_bits(dpsm), total = gs.tw * gs.th;
    u32 i = 0;
    if (dpsm == 0x00 || dpsm == 0x02 || dpsm == 0x0A || dpsm == 0x13 || dpsm == 0x14) {
        /* whole runs of a row with the page tables (textures are uploaded again every frame) */
        u32 bw = dbw ? dbw : 1, count = bytes * 8 / bits;
        u8 *v8 = (u8 *)vram;
        u16 *v16 = (u16 *)vram;
        while (i < count && gs.tpos < total) {
            u32 col = gs.tpos % gs.tw, y = gs.ty + gs.tpos / gs.tw, x = gs.tx + col, run = gs.tw - col;
            if (run > count - i) run = count - i;
            if (dpsm == 0x00) {
                u32 base = (dbp + (y >> 5) * 32 * bw) << 6;
                for (u32 j = 0; j < run; j++, x++) memcpy(&vram[(base + ((x >> 6) << 11) + in32[0][y & 31][x & 63]) & 0xFFFFF], p + (i + j) * 4, 4);
            } else if (dpsm == 0x13) {
                u32 base = (dbp + (y >> 6) * 32 * (bw >> 1)) << 8;
                for (u32 j = 0; j < run; j++, x++) v8[(base + ((x >> 7) << 13) + in8[y & 63][x & 127]) & 0x3FFFFF] = p[i + j];
            } else if (dpsm == 0x14) {
                u32 base = (dbp + (y >> 7) * 32 * (bw >> 1)) << 9;
                for (u32 j = 0; j < run; j++, x++) {
                    u32 a = base + ((x >> 7) << 14) + in4[y & 127][x & 127], k = i + j;
                    u8 *b = &v8[(a >> 1) & 0x3FFFFF];
                    u32 cv = (p[k >> 1] >> ((k & 1) * 4)) & 15;
                    *b = (a & 1) ? (u8)((*b & 0x0F) | cv << 4) : (u8)((*b & 0xF0) | cv);
                }
            } else {
                u32 base = (dbp + (y >> 6) * 32 * bw) << 7;
                for (u32 j = 0; j < run; j++, x++)
                    memcpy(&v16[(base + ((x >> 6) << 12) + in16[(dpsm == 0x0A) * 2][y & 63][x & 63]) & 0x1FFFFF], p + (i + j) * 2, 2);
            }
            i += run;
            gs.tpos += run;
        }
    }
    for (; i * bits < bytes * 8 && gs.tpos < total; gs.tpos++, i++) {
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

/* Image uploads (host -> GS) are kept whole until complete and dropped when the same data was
 * last written to the same place and those pages haven't changed since: the game uploads many
 * textures again every frame, and writing them would also make the texture cache hash them again.
 * SSTHEH_UPLOAD_DEDUP=0: always write. */
static u8 *tbuf;
static u32 tbuf_len, tbuf_cap, tbuf_need;
typedef struct { u64 key, hash, pages; u32 used; } Upload;
static Upload uploads_seen[1024];
u64 upload_skipped, upload_written;

static u64 hash_bytes(const u8 *p, u32 n) {
    u64 h = 0xCBF29CE484222325ull ^ n;
    u32 i = 0;
    for (; i + 8 <= n; i += 8) { u64 w; memcpy(&w, p + i, 8); h = (h ^ w) * 0x100000001B3ull; h ^= h >> 29; }
    for (; i < n; i++) h = (h ^ p[i]) * 0x100000001B3ull;
    return h;
}

static void upload_pages(u32 *first, u32 *n) {
    u32 dbp = (gs.bitbltbuf >> 32) & 0x3FFF, dbw = (gs.bitbltbuf >> 48) & 0x3F, dpsm = (gs.bitbltbuf >> 56) & 0x3F;
    u32 blocks = ((dbw ? dbw : 1) * 64 * (gs.ty + gs.th + 64) * (u32)psm_bits(dpsm) / 8 + 255) / 256;
    *first = dbp / 32;
    *n = (dbp + blocks) / 32 - dbp / 32 + 1;
    if (*n > 512) *n = 512;
}

static void transfer_flush(void) {
    if (!tbuf_len) return;
    static int dedup = -1;
    if (dedup < 0) dedup = !(getenv("SSTHEH_UPLOAD_DEDUP") && !atoi(getenv("SSTHEH_UPLOAD_DEDUP")));
    u32 len = tbuf_len;
    tbuf_len = 0;
    int complete = len >= tbuf_need;
    u64 key = ((gs.bitbltbuf >> 32) & 0xFFFFFFFFull) * 0x9E3779B97F4A7C15ull ^ (u64)gs.tx << 48 ^ (u64)gs.ty << 32 ^ (u64)gs.tw << 16 ^ gs.th;
    Upload *e = &uploads_seen[(key ^ key >> 29) % 1024];
    u32 first, n;
    upload_pages(&first, &n);
    u64 h = 0;
    if (dedup && complete) {
        h = hash_bytes(tbuf, len);
        if (e->used && e->key == key && e->hash == h && e->pages == pages_version(first, n)) {
            gs.tpos = gs.tw * gs.th;                   /* the transfer is over, nothing changes */
            upload_skipped++;
            return;
        }
    }
    transfer_write(tbuf, len);
    upload_written++;
    if (dedup && complete) *e = (Upload){key, h, pages_version(first, n), 1};
}

static void transfer_data(const u8 *p, u32 bytes) {
    if (!gs.transfer || gs.tw == 0) return;
    if (!tbuf_len) tbuf_need = (gs.tw * gs.th * (u32)psm_bits((gs.bitbltbuf >> 56) & 0x3F) + 7) / 8;
    if (tbuf_len + bytes > tbuf_cap) { tbuf_cap = (tbuf_len + bytes) * 2; tbuf = realloc(tbuf, tbuf_cap); }
    memcpy(tbuf + tbuf_len, p, bytes);
    tbuf_len += bytes;
    if (tbuf_len >= tbuf_need) transfer_flush();
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
    u64 t = perf_stamp();
    gif(&paths[0], buf, 0x400, 1);
    if (t) perf.gs_ns += perf_now() - t;
}

void gif_path2(const u8 *data, u32 qwc) {
    u64 t = perf_stamp();
    gif(&paths[1], data, qwc, 0);
    if (t) perf.gs_ns += perf_now() - t;
}

void gif_dma(const u8 *data, u32 qwc) {
    u64 t = perf_stamp();
    gif(&paths[2], data, qwc, 0);
    if (t) perf.gs_ns += perf_now() - t;
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
