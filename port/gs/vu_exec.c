/*
 * VU micro mode: an interpreter for the microprograms the game runs on VU1 (and VU0).
 *
 * An instruction is a pair: the upper word (bits 32-63: FMAC operations; bit 63 I, 62 E, 61 M,
 * 60 D, 59 T) and the lower word (bits 0-31: loads/stores, integer, branches, FDIV, EFU, XGKICK).
 * With I set, the lower word is a float loaded into the I register. E ends the program after the
 * next pair. Branches have one delay pair.
 *
 * Timing: the hardware stalls on FMAC register dependencies, so executing pairs in order gives the
 * same results, except for what is written after a latency without a stall: Q (DIV/SQRT/RSQRT,
 * 7 or 13 cycles), P (EFU, 11 to 54 cycles), and the MAC, status and clip flags, which the flag instructions (FMAND, FCAND,
 * ...) see 4 cycles after the FMAC operation that set them; pipelined loops rely on that (e.g.
 * FCAND reading the CLIP of the vertex before). Both are modelled, one cycle per pair. Within a
 * pair the lower half runs before the upper half's result is written.
 *
 * Upper encoding (as COP2 macro mode): dest 21-24, ft 16-20, fs 11-15, fd 6-10, operation 0-5
 * (0x3C-0x3F: ((bits 6-10) << 2 | bits 0-1)). Lower: opcode 25-31 (0x40: operation in 0-5, or
 * 0x3C-0x3F with bits 6-10), it/ft 16-20, is/fs 11-15, id/fd 6-10, imm11 0-10, dest 21-24.
 * Flags: MAC (component i = x..w: zero bit 3-i, sign 7-i), status (Z S U O I D, sticky copies
 * 6-11), clip (6 bits per CLIP, the last four kept).
 */
#include <immintrin.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"
#include "vu.h"
#include "gs.h"
#include "perf.h"
#include "vu_internal.h"

static Vu vus[2] = {
    {.id = 0, .mem = vu0_mem, .code = vu0_code, .mem_mask = 0xFFF, .code_mask = 0xFFF},
    {.id = 1, .mem = vu1_mem, .code = vu1_code, .mem_mask = 0x3FFF, .code_mask = 0x3FFF},
};
u32 vu1_itop, vu1_top;
static u64 programs_run, pairs_run;


/* ------------------------------------------------------------------------------- upper (FMAC) */

/* Each pair is decoded once (when first run after its code was uploaded) into a Dec; the upper
 * operation then runs on all four components at once with SSE. Results are clamped to +-FLT_MAX
 * (no infinities on the VU); denormals are flushed to zero by running with FTZ/DAZ set. */
static Dec decs[2][0x4000 / 8];

static int code_dirty[2] = {1, 1};

/* SSTHEH_VUSNAP=1: count distinct VU1 code memory contents seen at program starts (tests) */
static void snap_count(void) {
    static u64 seen[4096];
    static u32 nseen, starts;
    starts++;
    if (code_dirty[1]) {
        code_dirty[1] = 0;
        u64 h = 1469598103934665603ull;
        const u64 *w = (const u64 *)vu1_code;
        for (int i = 0; i < 0x4000 / 8; i++) h = (h ^ w[i]) * 1099511628211ull;
        u32 k = 0;
        for (; k < nseen; k++) if (seen[k] == h) break;
        if (k == nseen && nseen < 4096) {
            seen[nseen++] = h;
            rt_log("vu", "VU1 code snapshot %u: %016llX (after %u program starts)", nseen, (unsigned long long)h, starts);
        }
    }
}

void vu_jit_code_changed(void);
int vu_jit_run(Vu *v);

void vu_code_written(int id, u32 addr, u32 bytes) {
    code_dirty[id & 1] = 1;
    if (id & 1) vu_jit_code_changed();
    Dec *d = decs[id & 1];
    u32 n = (id & 1) ? 0x4000 / 8 : 0x1000 / 8;
    for (u32 i = addr / 8; i <= (addr + bytes - 1) / 8 && i < addr / 8 + n; i++) d[i % n].valid = 0;
}

void vu_decode(Dec *d, u32 lo, u32 hi) {
    memset(d, 0, sizeof *d);
    d->lo = lo;
    d->hi = hi;
    d->ibit = hi >> 31;
    d->ebit = (hi >> 30) & 1;
    d->lnop = !d->ibit && lo == 0x8000033Cu;
    d->valid = 1;
    u32 w = hi;
    d->dest = (w >> 21) & 15;
    d->ft = (w >> 16) & 31;
    d->fs = (w >> 11) & 31;
    d->fd = (w >> 6) & 31;
    d->bc = w & 3;
    int low = w & 0x3F, op = -1, bsrc = 0;
    if (low < 0x3C) {
        if (low < 0x1C) {
            static const signed char f1[7] = {0, 1, 2, 3, 5, 6, 4};
            op = f1[low >> 2];
            bsrc = 1;
        } else switch (low) {
            case 0x1C: op = 4; bsrc = 3; break;          /* mulq */
            case 0x1D: op = 5; bsrc = 2; break;          /* maxi */
            case 0x1E: op = 4; bsrc = 2; break;          /* muli */
            case 0x1F: op = 6; bsrc = 2; break;          /* minii */
            case 0x20: op = 0; bsrc = 3; break;          /* addq */
            case 0x21: op = 2; bsrc = 3; break;          /* maddq */
            case 0x22: op = 0; bsrc = 2; break;          /* addi */
            case 0x23: op = 2; bsrc = 2; break;          /* maddi */
            case 0x24: op = 1; bsrc = 3; break;          /* subq */
            case 0x25: op = 3; bsrc = 3; break;          /* msubq */
            case 0x26: op = 1; bsrc = 2; break;          /* subi */
            case 0x27: op = 3; bsrc = 2; break;          /* msubi */
            case 0x28: op = 0; break;                    /* add */
            case 0x29: op = 2; break;                    /* madd */
            case 0x2A: op = 4; break;                    /* mul */
            case 0x2B: op = 5; break;                    /* max */
            case 0x2C: op = 1; break;                    /* sub */
            case 0x2D: op = 3; break;                    /* msub */
            case 0x2E: d->kind = UK_OPMSUB; return;      /* opmsub */
            case 0x2F: op = 6; break;                    /* mini */
            default: return;
        }
    } else {
        int s2 = ((w >> 6) & 0x1F) << 2 | (w & 3);
        d->to_acc = 1;
        if (s2 < 0x10) { op = s2 >> 2; bsrc = 1; }               /* adda/suba/madda/msuba + bc */
        else if (s2 >= 0x18 && s2 < 0x1C) { op = 4; bsrc = 1; }  /* mulabc */
        else switch (s2) {
            case 0x10: case 0x11: case 0x12: case 0x13: d->kind = UK_ITOF; d->sc = s2 & 3; return;
            case 0x14: case 0x15: case 0x16: case 0x17: d->kind = UK_FTOI; d->sc = s2 & 3; return;
            case 0x1C: op = 4; bsrc = 3; break;          /* mulaq */
            case 0x1D: d->kind = UK_ABS; return;
            case 0x1E: op = 4; bsrc = 2; break;          /* mulai */
            case 0x1F: d->kind = UK_CLIP; return;        /* clip.xyz fs, ft.w */
            case 0x20: op = 0; bsrc = 3; break;          /* addaq */
            case 0x21: op = 2; bsrc = 3; break;          /* maddaq */
            case 0x22: op = 0; bsrc = 2; break;          /* addai */
            case 0x23: op = 2; bsrc = 2; break;          /* maddai */
            case 0x24: op = 1; bsrc = 3; break;          /* subaq */
            case 0x25: op = 3; bsrc = 3; break;          /* msubaq */
            case 0x26: op = 1; bsrc = 2; break;          /* subai */
            case 0x27: op = 3; bsrc = 2; break;          /* msubai */
            case 0x28: op = 0; break;                    /* adda */
            case 0x29: op = 2; break;                    /* madda */
            case 0x2A: op = 4; break;                    /* mula */
            case 0x2C: op = 1; break;                    /* suba */
            case 0x2D: op = 3; break;                    /* msuba */
            case 0x2E: d->kind = UK_OPMULA; return;      /* opmula */
            default: return;                             /* nop and the rest */
        }
    }
    d->kind = UK_ARITH;
    d->op = (u8)op;
    d->bsrc = (u8)bsrc;
}

/* ------------------------------------------------------------------------------- lower */

/* the same, for translated programs (vu_jit.c) */
int vu_lower(Vu *v, u32 w, u32 pc, u32 *target) { return lower(v, w, pc, target); }

/* ------------------------------------------------------------------------------- run */

static void run(Vu *v) {
    int ending = 0, branch_pending = 0;
    u32 branch_target = 0;
    programs_run++;
    v->vf[0].f[0] = v->vf[0].f[1] = v->vf[0].f[2] = 0.0f;
    v->vf[0].f[3] = 1.0f;
    u32 csr = _mm_getcsr();
    _mm_setcsr(csr | 0x8040);                        /* FTZ | DAZ: denormals are zero, as on the VU */
    Dec *decv = decs[v->id];
    for (int guard = 0; guard < 1 << 22; guard++) {
        u32 pc = v->pc & v->code_mask;
        Dec *d = &decv[pc / 8];
        if (!d->valid) {
            u32 lo, hi;
            memcpy(&lo, v->code + pc, 4);
            memcpy(&hi, v->code + pc + 4, 4);
            vu_decode(d, lo, hi);
        }
        v->pc = (pc + 8) & v->code_mask;
        pairs_run++;
        if (v->q_wait && --v->q_wait == 0) v->q = v->q_next;
        if (v->p_wait && --v->p_wait == 0) v->p = v->p_next;

        UpperOut uo;
        upper(v, d, &uo);
        int taken = 0;
        u32 target = 0;
        if (d->ibit) memcpy(&v->i, &d->lo, 4);           /* I bit: the lower word is a constant */
        else if (!d->lnop) taken = lower(v, d->lo, pc, &target);
        commit_upper(&uo);
        flags_advance(v);

        if (branch_pending) {
            v->pc = branch_target & v->code_mask;
            branch_pending = 0;
        }
        if (taken) { branch_pending = 1; branch_target = target; }
        if (ending) break;
        if (d->ebit) ending = 1;                         /* E: one more pair, then stop */
    }
    if (v->q_wait) { v->q = v->q_next; v->q_wait = 0; }
    if (v->p_wait) { v->p = v->p_next; v->p_wait = 0; }
    _mm_setcsr(csr);
}

void vu_start(int id, int addr, u32 itop) {
    Vu *v = &vus[id & 1];
    static int dumped;
    if (id == 1 && !dumped && getenv("SSTHEH_VUDUMP") && programs_run > 200) {
        dumped = 1;
        FILE *f = fopen("build/vu1_code.bin", "wb"); fwrite(vu1_code, 1, sizeof vu1_code, f); fclose(f);
        f = fopen("build/vu1_mem.bin", "wb"); fwrite(vu1_mem, 1, sizeof vu1_mem, f); fclose(f);
        rt_log("vu", "dumped VU1 code and data before starting %03X", addr);
    }
    if (id == 1) vu1_itop = itop;
    static int snap = -1;
    if (snap < 0) snap = getenv("SSTHEH_VUSNAP") != NULL;
    if (id == 1 && snap) snap_count();
    if (addr >= 0) v->pc = (u32)addr * 8;
    u64 t = perf_now();
    v->vf[0].f[0] = v->vf[0].f[1] = v->vf[0].f[2] = 0.0f;
    v->vf[0].f[3] = 1.0f;
    u32 csr = _mm_getcsr();
    _mm_setcsr(csr | 0x8040);                        /* FTZ | DAZ, as in run() */
    int done = vu_jit_run(v);
    _mm_setcsr(csr);
    static u64 native_runs, partial_runs;
    if (done) { programs_run++; native_runs++; }
    else {
        if (v->id == 1) partial_runs++;
        run(v);
    }
    if (id == 1 && (programs_run & 0xFFFFF) == 0)
        rt_log("vu", "VU1: %llu programs fully native, %llu (partly) interpreted, %llu pairs interpreted",
               (unsigned long long)native_runs, (unsigned long long)partial_runs, (unsigned long long)pairs_run);
    u64 dt = perf_now() - t;
    perf.vu_ns += dt;
    perf.gs_ns -= 0;   /* (XGKICK time, inside run(), is also in gs_ns) */
}

void vu_stats(void) {
    rt_log("vu", "%llu programs, %llu instruction pairs", (unsigned long long)programs_run, (unsigned long long)pairs_run);
}
