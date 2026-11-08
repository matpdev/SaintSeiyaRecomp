/*
 * What the native functions in port/hle/ share: reading and writing the game's memory as the
 * types they hold, and calling the game's own functions.
 *
 * A native function is either a replacement (port/hle.txt: "address name": the game's code at that
 * address never runs) or a hook ("address name before": it runs on entry, then the game's code).
 * Both see the game's registers in Ctx: arguments in RW(4)..RW(11) (a0..a7) and F(12).. (float
 * ones), the return address in RW(31), results set with SET32 / SET64(2, ...).
 *
 * A hook that calls into the game (game_call) changes the registers the game's own code is about
 * to use: it keeps them first (regs_keep) and puts them back after (regs_back).
 */
#ifndef HLE_H
#define HLE_H

#include <stddef.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"
#include "game.h"

/* ---- the game's memory */
static inline float rd_float(Ctx *c, u32 a) { u32 u = rd32(c, a); float f; memcpy(&f, &u, 4); return f; }
static inline void wr_float(Ctx *c, u32 a, float f) { u32 u; memcpy(&u, &f, 4); wr32(c, a, u); }
static inline float as_float(u32 bits) { float f; memcpy(&f, &bits, 4); return f; }   /* a float constant from the disassembly */

/* ---- calls into the game */
typedef struct { u8 regs[offsetof(Ctx, thread)]; } GuestRegs;     /* the registers (not the thread's state) */
static inline void regs_keep(Ctx *c, GuestRegs *s) { memcpy(s->regs, c, sizeof s->regs); }
static inline void regs_back(Ctx *c, const GuestRegs *s) { memcpy(c, s->regs, sizeof s->regs); }

/* calls the game's function fn with the arguments already in the registers; its result (v0) */
static inline u32 game_call(Ctx *c, u32 fn) {
    SET32(31, 0);
    rt_call(c, fn);
    return RW(2);
}

/* fn(a0, a1) */
static inline u32 game_call2(Ctx *c, u32 fn, u32 a0, u32 a1) {
    SET32(4, a0);
    SET32(5, a1);
    return game_call(c, fn);
}

/* a method: the function at +off in the method table `table`, called with (a0, a1) */
static inline u32 game_method(Ctx *c, u32 table, u32 off, u32 a0, u32 a1) {
    return game_call2(c, rd32(c, table + off), a0, a1);
}

#endif
