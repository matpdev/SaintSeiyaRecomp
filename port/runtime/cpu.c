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

/* --trace: the first call of every function is logged with the thread making it, so the log shows
 * how far execution has got. */
int rt_trace_on;
static u8 called[(0x00500000 - 0x00100000) / 4 / 8];

/* SSTHEH_TRACE_COUNT=from,to (vertical blanks, with --trace): calls per function in that window,
 * printed at its end, most called first */
static u32 *counts, count_from, count_to;

static int by_count(const void *a, const void *b) {
    u32 x = counts[*(const u32 *)a], y = counts[*(const u32 *)b];
    return x < y ? 1 : x > y ? -1 : 0;
}

static void count_call(u32 addr) {
    static int init;
    if (!init) {
        init = 1;
        const char *e = getenv("SSTHEH_TRACE_COUNT");
        if (e && sscanf(e, "%u,%u", &count_from, &count_to) == 2) counts = calloc(0x100000, 4);
    }
    if (!counts) return;
    u32 vb = kernel_vblank_count();
    if (vb >= count_to) {
        static u32 idx[0x100000];
        u32 n = 0;
        for (u32 i = 0; i < 0x100000; i++) if (counts[i]) idx[n++] = i;
        u32 *keep = counts;
        qsort(idx, n, 4, by_count);
        for (u32 i = 0; i < n && i < 300; i++) {
            const FuncEntry *f = rt_find(0x00100000 + idx[i] * 4);
            fprintf(stderr, "[count] %08X %9u %s\n", 0x00100000 + idx[i] * 4, keep[idx[i]], f ? f->name : "?");
        }
        counts = NULL;
        return;
    }
    if (vb >= count_from) {
        u32 i = (addr - 0x00100000) / 4;
        if (i < 0x100000) counts[i]++;
    }
}

void rt_enter(Ctx *c, u32 addr) {
    count_call(addr);
    u32 i = (addr - 0x00100000) / 4;
    if (i >= sizeof called * 8 || called[i / 8] & (1 << (i % 8))) return;
    called[i / 8] |= 1 << (i % 8);
    const FuncEntry *f = rt_find(addr);
    fprintf(stderr, "[trace %5u] t%d %08X %s\n", kernel_vblank_count(), c->thread, addr, f ? f->name : "?");
}
