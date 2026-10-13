/*
 * Dispatch for computed calls/jumps, COP0, and the error paths of the recompiled code.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "r5900.h"
#include "runtime.h"

extern const FuncEntry rt_functab[];
extern const int rt_functab_count;

const FuncEntry *rt_find(u32 addr) {
    int lo = 0, hi = rt_functab_count - 1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (rt_functab[mid].addr == addr) return &rt_functab[mid];
        if (rt_functab[mid].addr < addr) lo = mid + 1;
        else hi = mid - 1;
    }
    return NULL;
}

const char *rt_name_of(u32 addr) {
    const FuncEntry *best = NULL;
    for (int i = 0; i < rt_functab_count && rt_functab[i].addr <= addr; i++) best = &rt_functab[i];
    return best ? best->name : "?";
}

void rt_call(Ctx *c, u32 addr) {
    const FuncEntry *f = rt_find(addr);
    if (!f) rt_fatal(c, "call to %08X, which is not a known function (from %s)", addr, rt_name_of(RW(31) - 8));
    f->fn(c);
}

void rt_jump(Ctx *c, u32 addr) {
    /* A jr to another function is a tail call: run it; the caller then returns. */
    rt_call(c, addr);
}

void rt_unimpl(Ctx *c, u32 pc, u32 raw) {
    rt_fatal(c, "unimplemented instruction %08X at %08X (%s)", raw, pc, rt_name_of(pc));
}

void rt_fell_off(Ctx *c, u32 addr) {
    rt_fatal(c, "execution fell off the end of a function at %08X (%s)", addr, rt_name_of(addr - 4));
}

void rt_break(Ctx *c, u32 pc) {
    rt_fatal(c, "break at %08X (%s)", pc, rt_name_of(pc));
}

/* COP0: only Count (9) and Status (12) matter to user code. Count runs at the EE clock, 294.912 MHz. */
static u32 cop0_status = 0x70030c13;

u32 rt_mfc0(Ctx *c, int reg) {
    (void)c;
    if (reg == 9) {
        struct timespec ts;
        clock_gettime(CLOCK_MONOTONIC, &ts);
        return (u32)((u64)ts.tv_sec * 294912000ull + (u64)ts.tv_nsec * 294912ull / 1000000ull);
    }
    if (reg == 12) return cop0_status;
    if (reg == 15) return 0x2e20;     /* PRId: EE */
    return 0;
}

void rt_mtc0(Ctx *c, int reg, u32 v) {
    (void)c;
    if (reg == 12) cop0_status = v;
}

void rt_ei(Ctx *c) { (void)c; cop0_status |= 0x10000; }
void rt_di(Ctx *c) { (void)c; cop0_status &= ~0x10000u; }
