/*
 * Character select in widescreen: longer portrait strips.
 *
 * The two carousels (one per side) are 3D strips: each is 12 pieces of top border, 12 of bottom
 * border and 12 portraits (out of the 45 characters) side by side, 1.1 units apart. On a 4:3
 * screen their ends were off the screen; the widescreen camera shows them stopping short of the
 * 16:9 edges. Here each strip gets EXTRA more pieces at both ends of both borders, and 2 * EXTRA
 * more portraits, made and handled as the game makes and handles its own:
 *
 *   0x0017B160 the side's set-up: new[] of 70 elements of 0x220 bytes (0 the cursor, 1..12 top
 *              border, 13..24 bottom border, 25..69 the 45 portraits; ctor 0x0030DD60, dtor
 *              0x00177A40), kept at side+0x10. Its malloc (0x00100530, called from 0x0017B1C8)
 *              and new[] (0x00102580, from 0x0017B1F0) are asked for 70 + NEW elements:
 *              70..70+NEW-1 are the new border pieces.
 *   0x00179D80 border pieces' set-up (scale, model at models+0x22C0 / +0x2300, attach)
 *   0x00179BF0 border pieces' places (every frame the strip moves)
 *   0x001798C0 portraits' places: all hidden, 12 shown from 4 (7 on the other side) before the
 *              cursor; replaced here by one showing 12 + 2 * EXTRA from EXTRA more before
 *   0x0017A1E0 the elements put into the scene's draw lists; 0x001755E0 (from 0x00177310) takes
 *              them out when the screen closes
 *   0x0017A030 all elements shown or hidden (the screen fading in and out)
 * The new pieces' calls are the game's own (port/hle.txt "before" hooks run them next to it).
 * SSTHEH_WIDE_SELECT=0: the strips as on the disc.
 */
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

#include "r5900.h"
#include "runtime.h"

#define EXTRA 5                         /* pieces added at each end (the far ends are narrow) */
#define ELEM 0x220
#define BASE 70                         /* the game's elements */
#define NEW (4 * EXTRA)                 /* 2 borders x 2 ends */
#define TOP0 1                          /* first top-border piece; bottom border = top + 12 */
#define PORTRAIT0 25

static int enabled(void) {
    static int on = -1;
    if (on < 0) on = !(getenv("SSTHEH_WIDE_SELECT") && !atoi(getenv("SSTHEH_WIDE_SELECT")));
    return on;
}

/* The side's elements, if they have the new pieces. */
static u32 elements(Ctx *c, u32 side) {
    u32 e = rd32(c, side + 0x10);
    if (!e || rd32(c, e - 0x10 + 4) != BASE + NEW) return 0;
    return e;
}

/* The new border piece for slot i (-EXTRA..-1 before the strip, 12..12+EXTRA-1 after) of the top
 * (0) or bottom (1) border. */
static u32 piece(u32 e, int bottom, int i) {
    int k = i < 0 ? i + EXTRA : i - 12 + EXTRA;     /* 0 .. 2 * EXTRA - 1 */
    return e + (u32)(BASE + bottom * 2 * EXTRA + k) * ELEM;
}
static int slot(int n) { return n < EXTRA ? n - EXTRA : 12 + n - EXTRA; }   /* n = 0 .. 2 * EXTRA - 1 */

/* Calls into the game from a "before" hook keep the hooked function's registers. */
typedef struct { u8 regs[offsetof(Ctx, thread)]; } Saved;
static void save(Ctx *c, Saved *s) { memcpy(s->regs, c, sizeof s->regs); }
static void restore(Ctx *c, const Saved *s) { memcpy(c, s->regs, sizeof s->regs); }

static u32 call(Ctx *c, u32 fn, u32 a0, u32 a1) {
    SET32(4, a0);
    SET32(5, a1);
    SET32(31, 0);
    rt_call(c, fn);
    return RW(2);
}
static u32 method(Ctx *c, u32 table, u32 off, u32 a0, u32 a1) { return call(c, rd32(c, table + off), a0, a1); }

static void wrf(Ctx *c, u32 a, float f) { u32 u; memcpy(&u, &f, 4); wr32(c, a, u); }
static float fl(u32 u) { float f; memcpy(&f, &u, 4); return f; }

/* malloc (0x00100530) of the elements' block */
void hle_csel_alloc(Ctx *c) {
    if (RW(31) == 0x0017B1D0 && RW(4) == 0x10 + BASE * ELEM && enabled()) SET32(4, 0x10 + (BASE + NEW) * ELEM);
}

/* new[] (0x00102580: block, ctor, dtor, size, count) of the elements */
void hle_csel_array(Ctx *c) {
    if (RW(31) == 0x0017B1F8 && RW(7) == ELEM && RW(8) == BASE && enabled()) SET32(8, BASE + NEW);
}

/* 0x00179D80 (side): the border pieces' scale and model */
void hle_csel_borders_init(Ctx *c) {
    u32 side = RW(4), e = elements(c, side);
    if (!e) return;
    Saved s;
    save(c, &s);
    SET32(29, RW(29) - 0x40);
    u32 vec = RW(29) + 0x10;
    wrf(c, vec, fl(0x3F8CCCCD));                    /* 1.1, 0.1833, 1, 1 */
    wrf(c, vec + 4, fl(0x3E3BBBD5));
    wrf(c, vec + 8, 1.0f);
    wrf(c, vec + 12, 1.0f);
    u32 models = rd32(c, rd32(c, rd32(c, side + 0x40) + 0x18));
    for (int bottom = 0; bottom < 2; bottom++)
        for (int n = 0; n < 2 * EXTRA; n++) {
            u32 p = piece(e, bottom, slot(n)), model = models + (bottom ? 0x2300 : 0x22C0);
            method(c, rd32(c, p + 0x50), 0xC, p, vec);
            wr32(c, p + 0x14, model);
            call(c, 0x0014EE30, model, 0);
            wr32(c, rd32(c, p + 0x10) + 0x20, rd32(c, model + 0x10));
            call(c, 0x0030D620, p, 0);
        }
    restore(c, &s);
}

/* 0x00179BF0 (side, f12 = where the strip is): the border pieces' places */
void hle_csel_borders_place(Ctx *c) {
    u32 e = elements(c, RW(4));
    if (!e) return;
    Saved s;
    save(c, &s);
    float x0 = F(12) - fl(0x40D33334);              /* - 6.6 */
    for (int bottom = 0; bottom < 2; bottom++)
        for (int n = 0; n < 2 * EXTRA; n++) {
            int i = slot(n);
            u32 node = rd32(c, piece(e, bottom, i) + 4);
            wrf(c, node + 0xC0, x0 + fl(0x3F8CCCCD) * (float)i);
            wrf(c, node + 0xC4, fl(bottom ? 0x3EBBBBC2 : 0xBF0CCCD6));      /* 0.3667, -0.55 */
            wrf(c, node + 0xC8, fl(0xBC23D70A) + fl(0x38D1B717) * (float)i);   /* -0.01 + 0.0001 i */
            wrf(c, node + 0xCC, 1.0f);
            wr32(c, node + 0x8C, rd32(c, node + 0x8C) | 1);
            call(c, 0x002A1E20, node, 0);
        }
    restore(c, &s);
}

/* 0x001798C0 (side, f12), replaced: the portraits' places, 12 + 2 * EXTRA of them with the new
 * pieces (as the game's: all hidden, then shown one after the other along the strip) */
void hle_csel_portraits(Ctx *c) {
    u32 side = RW(4), e = rd32(c, side + 0x10);
    int more = elements(c, side) ? EXTRA : 0;
    float x0 = F(12);
    u32 p0 = e + PORTRAIT0 * ELEM;
    for (u32 i = 0; i < 45; i++) {
        u32 o = rd32(c, p0 + i * ELEM);
        method(c, rd32(c, o + 0x10), 0x1C, o, 1);
    }
    u32 at = call(c, 0x0031EFD0, rd32(c, side + 0x48), (u32)((rd8(c, side + 2) ? -4 : -7) - more));
    float x = x0 - fl(0x40D33334) - fl(0x3F8CCCCD) * (float)more;
    for (int n = 0; n < 12 + 2 * more; n++) {
        u32 items = rd32(c, rd32(c, side + 0x48) + 0x1C);
        s32 id = (s32)rd32(c, items + at * 12 + 8);
        if (id < 0) id = 44;
        u32 p = p0 + (u32)id * ELEM, node = rd32(c, p + 4);
        wrf(c, node + 0xC0, x);
        wrf(c, node + 0xC4, fl(0xBEBBBBC2));         /* -0.3667 */
        wrf(c, node + 0xC8, 0.0f);
        wrf(c, node + 0xCC, 1.0f);
        wr32(c, node + 0x8C, rd32(c, node + 0x8C) | 1);
        call(c, 0x002A1E20, node, 0);
        u32 o = rd32(c, p);
        method(c, rd32(c, o + 0x10), 0x1C, o, 0);
        at = call(c, 0x0031F0B0, rd32(c, side + 0x48), at);
        x = fl(0x3F8CCCCD) + x;
    }
}

/* the new pieces into (add 0x14) or out of (0x18) the scene's draw lists, as the game does its own */
static void lists(Ctx *c, u32 side, u32 e, u32 op) {
    rt_log("csel", "side %08X: %d new strip pieces %s the draw lists", side, 4 * EXTRA, op == 0x14 ? "into" : "out of");
    for (int n = 0; n < 2 * EXTRA; n++) {
        u32 top = piece(e, 0, slot(n)), bottom = piece(e, 1, slot(n));
        int in = call(c, 0x001419B0, rd32(c, top), 0) == 1;
        if (in != (op == 0x18)) continue;               /* adding what is out, removing what is in */
        u32 scene = rd32(c, side + 0x3C);
        u32 layer = method(c, rd32(c, scene + 0xB0), 0x50, scene, 1);
        method(c, rd32(c, top + 0x50), op, top, layer);
        layer = method(c, rd32(c, scene + 0xB0), 0x50, scene, 1);
        method(c, rd32(c, bottom + 0x50), op, bottom, layer);
    }
}

/* 0x0017A1E0 (side): elements into the draw lists */
void hle_csel_lists(Ctx *c) {
    u32 side = RW(4), e = elements(c, side);
    if (!e) return;
    Saved s;
    save(c, &s);
    lists(c, side, e, 0x14);
    restore(c, &s);
}

/* 0x001419B0 (is it in a draw list?): from 0x00177310, the screen closing (s0 = side) takes the
 * top border out of the lists: the new pieces too */
void hle_csel_closing(Ctx *c) {
    if (RW(31) != 0x00177318) return;
    u32 side = RW(16), e = elements(c, side);
    if (!e || RW(4) != rd32(c, e + TOP0 * ELEM)) return;    /* the first piece: once */
    Saved s;
    save(c, &s);
    lists(c, side, e, 0x18);
    restore(c, &s);
}

/* 0x0017A030 (side, hide, which): which < 0: every element shown or hidden */
void hle_csel_show(Ctx *c) {
    if ((s32)RW(6) >= 0) return;
    u32 side = RW(4), e = elements(c, side);
    if (!e) return;
    Saved s;
    save(c, &s);
    u32 hide = (RW(5) & 0xFF) || rd8(c, rd32(c, side + 0x28));
    for (int bottom = 0; bottom < 2; bottom++)
        for (int n = 0; n < 2 * EXTRA; n++) {
            u32 o = rd32(c, piece(e, bottom, slot(n)));
            method(c, rd32(c, o + 0x10), 0x1C, o, hide);
        }
    restore(c, &s);
}
