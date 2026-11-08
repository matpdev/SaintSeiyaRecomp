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

#include "hle.h"

#define EXTRA 5                         /* pieces added at each end (the far ends are narrow) */
#define ELEM 0x220                      /* an element's size */
#define BASE 70                         /* the game's elements */
#define NEW (4 * EXTRA)                 /* 2 borders x 2 ends */
#define TOP0 1                          /* first top-border piece; bottom border = top + 12 */
#define PORTRAIT0 25
#define NCHARS 45                       /* portraits: one per character */

/* the side (one carousel) */
#define SIDE_ELEMENTS 0x10              /* -> its elements (new[]: the count at -0x10 + 4) */
#define SIDE_HIDDEN 0x28                /* -> a byte: the whole side hidden */
#define SIDE_SCENE 0x3C                 /* -> the scene (+0xB0: its method table) */
#define SIDE_MODELS 0x40                /* -> ... -> the models (borders at +0x22C0 top, +0x2300 bottom) */
#define SIDE_LIST 0x48                  /* -> the characters' list (+0x1C: items of 12 bytes, id at +8) */
/* an element */
#define EL_OBJECT 0                     /* -> its drawable (+0x10: method table) */
#define EL_NODE 4                       /* -> its scene node */
#define EL_MODEL 0x14
#define EL_VTABLE 0x50                  /* its own method table */
/* a scene node: place x, y, z, w; flags (bit 0: matrix to make again) */
#define NODE_POS 0xC0
#define NODE_FLAGS 0x8C
/* methods (offsets in the tables above) */
#define M_INIT 0xC                      /* element (vec): scale */
#define M_INTO_LIST 0x14                /* element (layer): into a draw list */
#define M_OUT_OF_LIST 0x18
#define M_HIDE 0x1C                     /* drawable (hide) */
#define M_LAYER 0x50                    /* scene (1) -> the layer */

#define STEP 0x3F8CCCCDu                /* 1.1: a piece's width (floats as in the game's code) */
#define HALF_STRIP 0x40D33334u          /* 6.6: from a strip's middle to its first piece */

static int enabled(void) {
    static int on = -1;
    if (on < 0) on = !(getenv("SSTHEH_WIDE_SELECT") && !atoi(getenv("SSTHEH_WIDE_SELECT")));
    return on;
}

/* The side's elements, if they have the new pieces. */
static u32 elements(Ctx *c, u32 side) {
    u32 e = rd32(c, side + SIDE_ELEMENTS);
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

/* an element's drawable shown or hidden */
static void set_hidden(Ctx *c, u32 element, u32 hide) {
    u32 o = rd32(c, element + EL_OBJECT);
    game_method(c, rd32(c, o + 0x10), M_HIDE, o, hide);
}

/* a scene node put at (x, y, z) */
static void place_node(Ctx *c, u32 node, float x, float y, float z) {
    wr_float(c, node + NODE_POS, x);
    wr_float(c, node + NODE_POS + 4, y);
    wr_float(c, node + NODE_POS + 8, z);
    wr_float(c, node + NODE_POS + 12, 1.0f);
    wr32(c, node + NODE_FLAGS, rd32(c, node + NODE_FLAGS) | 1);
    game_call2(c, FN_NODE_UPDATE, node, 0);
}

/* The strips slide in from one side and out to the other (the place x0: about 12.9 coming in, 0 in
 * place, -13.2 parked out, a strip's length): on a 4:3 screen a parked strip is wholly off it, but its
 * new pieces at the end it leaves behind would be where it was. So the pieces added at one end are
 * shown only while the strip is in place or coming from that end. */
static int end_out(int i, float x0) { return i < 0 ? x0 > 0.5f : i >= 12 ? x0 < -0.5f : 0; }
/* A parked strip stops just past the 4:3 screen: in 16:9 its end would show at a side; it is hidden. */
static int parked(float x0) { return x0 >= 13.0f || x0 <= -13.0f; }

/* every element hidden by the game (0x0017A030), per side */
static struct { u32 side; u32 hide; } hidden[8];
static u32 *hidden_of(u32 side) {
    for (int k = 0; k < 8; k++) if (hidden[k].side == side) return &hidden[k].hide;
    for (int k = 0; k < 8; k++) if (!hidden[k].side) { hidden[k].side = side; return &hidden[k].hide; }
    hidden[0].side = side;
    return &hidden[0].hide;
}

/* malloc (0x00100530) of the elements' block */
void hle_csel_alloc(Ctx *c) {
    if (RW(31) == RA_CSEL_MALLOC && RW(4) == 0x10 + BASE * ELEM && enabled()) SET32(4, 0x10 + (BASE + NEW) * ELEM);
}

/* new[] (0x00102580: block, ctor, dtor, size, count) of the elements */
void hle_csel_array(Ctx *c) {
    if (RW(31) == RA_CSEL_NEW_ARRAY && RW(7) == ELEM && RW(8) == BASE && enabled()) SET32(8, BASE + NEW);
}

/* 0x00179D80 (side): the border pieces' scale and model */
void hle_csel_borders_init(Ctx *c) {
    u32 side = RW(4), e = elements(c, side);
    if (!e) return;
    GuestRegs kept;
    regs_keep(c, &kept);
    SET32(29, RW(29) - 0x40);                       /* a vector on the game's stack */
    u32 vec = RW(29) + 0x10;
    wr_float(c, vec, as_float(STEP));               /* 1.1, 0.1833, 1, 1 */
    wr_float(c, vec + 4, as_float(0x3E3BBBD5));
    wr_float(c, vec + 8, 1.0f);
    wr_float(c, vec + 12, 1.0f);
    u32 models = rd32(c, rd32(c, rd32(c, side + SIDE_MODELS) + 0x18));
    for (int bottom = 0; bottom < 2; bottom++)
        for (int n = 0; n < 2 * EXTRA; n++) {
            u32 p = piece(e, bottom, slot(n)), model = models + (bottom ? 0x2300 : 0x22C0);
            game_method(c, rd32(c, p + EL_VTABLE), M_INIT, p, vec);
            wr32(c, p + EL_MODEL, model);
            game_call2(c, FN_MODEL_ATTACH, model, 0);
            wr32(c, rd32(c, p + 0x10) + 0x20, rd32(c, model + 0x10));
            game_call2(c, FN_ELEMENT_ATTACH, p, 0);
        }
    regs_back(c, &kept);
}

/* 0x00179BF0 (side, f12 = where the strip is): the border pieces' places */
void hle_csel_borders_place(Ctx *c) {
    u32 e = elements(c, RW(4));
    if (!e) return;
    GuestRegs kept;
    regs_keep(c, &kept);
    float place = F(12), x0 = place - as_float(HALF_STRIP);
    u32 hide_all = *hidden_of(RW(4));
    for (u32 k = 0; k < 24; k++)                    /* the game's pieces: hidden while parked */
        set_hidden(c, e + (TOP0 + k) * ELEM, hide_all || parked(place));
    for (int bottom = 0; bottom < 2; bottom++)
        for (int n = 0; n < 2 * EXTRA; n++) {
            int i = slot(n);
            set_hidden(c, piece(e, bottom, i), hide_all || parked(place) || end_out(i, place));
            float y = as_float(bottom ? 0x3EBBBBC2 : 0xBF0CCCD6);                        /* 0.3667, -0.55 */
            float z = as_float(0xBC23D70A) + as_float(0x38D1B717) * (float)i;            /* -0.01 + 0.0001 i */
            place_node(c, rd32(c, piece(e, bottom, i) + EL_NODE), x0 + as_float(STEP) * (float)i, y, z);
        }
    regs_back(c, &kept);
}

/* 0x001798C0 (side, f12), replaced: the portraits' places, 12 + 2 * EXTRA of them with the new
 * pieces (as the game's: all hidden, then shown one after the other along the strip) */
void hle_csel_portraits(Ctx *c) {
    u32 side = RW(4), e = rd32(c, side + SIDE_ELEMENTS);
    int more = elements(c, side) ? EXTRA : 0;
    float x0 = F(12);
    u32 p0 = e + PORTRAIT0 * ELEM;
    for (u32 i = 0; i < NCHARS; i++) set_hidden(c, p0 + i * ELEM, 1);
    /* from 4 (7 on the other side) characters before the cursor, `more` more with the new pieces */
    u32 at = game_call2(c, FN_CAROUSEL_AT, rd32(c, side + SIDE_LIST), (u32)((rd8(c, side + 2) ? -4 : -7) - more));
    float x = x0 - as_float(HALF_STRIP) - as_float(STEP) * (float)more;
    for (int n = 0; n < 12 + 2 * more; n++) {
        u32 items = rd32(c, rd32(c, side + SIDE_LIST) + 0x1C);
        s32 id = (s32)rd32(c, items + at * 12 + 8);
        if (id < 0) id = NCHARS - 1;
        u32 p = p0 + (u32)id * ELEM;
        place_node(c, rd32(c, p + EL_NODE), x, as_float(0xBEBBBBC2), 0.0f);       /* y -0.3667 */
        if (!end_out(n - more, x0) && !(more && parked(x0))) set_hidden(c, p, 0);
        at = game_call2(c, FN_CAROUSEL_NEXT, rd32(c, side + SIDE_LIST), at);
        x = as_float(STEP) + x;
    }
}

/* the new pieces into (M_INTO_LIST) or out of (M_OUT_OF_LIST) the scene's draw lists, as the game
   does its own */
static void lists(Ctx *c, u32 side, u32 e, u32 op) {
    rt_log("csel", "side %08X: %d new strip pieces %s the draw lists", side, 4 * EXTRA, op == M_INTO_LIST ? "into" : "out of");
    for (int n = 0; n < 2 * EXTRA; n++) {
        u32 top = piece(e, 0, slot(n)), bottom = piece(e, 1, slot(n));
        int in = game_call2(c, FN_IN_DRAW_LIST, rd32(c, top), 0) == 1;
        if (in != (op == M_OUT_OF_LIST)) continue;       /* adding what is out, removing what is in */
        u32 scene = rd32(c, side + SIDE_SCENE);
        u32 layer = game_method(c, rd32(c, scene + 0xB0), M_LAYER, scene, 1);
        game_method(c, rd32(c, top + EL_VTABLE), op, top, layer);
        layer = game_method(c, rd32(c, scene + 0xB0), M_LAYER, scene, 1);
        game_method(c, rd32(c, bottom + EL_VTABLE), op, bottom, layer);
    }
}

/* 0x0017A1E0 (side): elements into the draw lists */
void hle_csel_lists(Ctx *c) {
    u32 side = RW(4), e = elements(c, side);
    if (!e) return;
    GuestRegs kept;
    regs_keep(c, &kept);
    lists(c, side, e, M_INTO_LIST);
    regs_back(c, &kept);
}

/* 0x001419B0 (is it in a draw list?): from 0x00177310, the screen closing (s0 = side) takes the
 * top border out of the lists: the new pieces too */
void hle_csel_closing(Ctx *c) {
    if (RW(31) != RA_CSEL_CLOSING) return;
    u32 side = RW(16), e = elements(c, side);
    if (!e || RW(4) != rd32(c, e + TOP0 * ELEM)) return;    /* the first piece: once */
    GuestRegs kept;
    regs_keep(c, &kept);
    lists(c, side, e, M_OUT_OF_LIST);
    regs_back(c, &kept);
}

/* 0x0017A030 (side, hide, which): which < 0: every element shown or hidden */
void hle_csel_show(Ctx *c) {
    if ((s32)RW(6) >= 0) return;
    u32 side = RW(4), e = elements(c, side);
    if (!e) return;
    GuestRegs kept;
    regs_keep(c, &kept);
    u32 hide = (RW(5) & 0xFF) || rd8(c, rd32(c, side + SIDE_HIDDEN));
    *hidden_of(side) = hide;
    for (int bottom = 0; bottom < 2; bottom++)
        for (int n = 0; n < 2 * EXTRA; n++) set_hidden(c, piece(e, bottom, slot(n)), hide);
    regs_back(c, &kept);
}
