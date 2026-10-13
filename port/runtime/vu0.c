/*
 * VU0 in macro mode: COP2 instructions issued by the EE, decoded at run time.
 *
 * Encoding (COP2, bit 25 set): dest mask in bits 21-24 (x = bit 24 .. w = bit 21), ft 16-20, fs 11-15.
 * "Special1" instructions (low 6 bits < 0x3C) have fd in bits 6-10 and the operation in bits 0-5;
 * "special2" instructions use ((bits 6-10) << 2 | bits 0-1) as the operation.
 * vf0 always reads (0, 0, 0, 1) and vi0 reads 0; writes to them are dropped.
 */
#include <stdio.h>

#include "r5900.h"
#include "runtime.h"

#define FIELD(raw, lo, n) (((raw) >> (lo)) & ((1u << (n)) - 1))

static inline f32 vclamp(f32 x) { return fpu(x); }

static void store(Ctx *c, int reg, int dest, const f32 v[4]) {
    if (reg == 0) return;
    for (int i = 0; i < 4; i++)
        if (dest & (8 >> i)) c->vf[reg].f[i] = vclamp(v[i]);
}

static void store_acc(Ctx *c, int dest, const f32 v[4]) {
    for (int i = 0; i < 4; i++)
        if (dest & (8 >> i)) c->vacc.f[i] = vclamp(v[i]);
}

static void vf0_fix(Ctx *c) {
    c->vf[0].f[0] = c->vf[0].f[1] = c->vf[0].f[2] = 0.0f;
    c->vf[0].f[3] = 1.0f;
}

/* Arithmetic family: kind 0 add, 1 sub, 2 madd (acc + a*b), 3 msub (acc - a*b), 4 mul, 5 max, 6 min. */
static void arith(Ctx *c, int kind, int to_acc, int dest, int fd, int fs, const f32 b[4]) {
    f32 r[4];
    const f32 *a = c->vf[fs].f, *acc = c->vacc.f;
    for (int i = 0; i < 4; i++) {
        switch (kind) {
        case 0: r[i] = a[i] + b[i]; break;
        case 1: r[i] = a[i] - b[i]; break;
        case 2: r[i] = acc[i] + a[i] * b[i]; break;
        case 3: r[i] = acc[i] - a[i] * b[i]; break;
        case 4: r[i] = a[i] * b[i]; break;
        case 5: r[i] = a[i] > b[i] ? a[i] : b[i]; break;
        default: r[i] = a[i] < b[i] ? a[i] : b[i]; break;
        }
    }
    if (to_acc) store_acc(c, dest, r);
    else store(c, fd, dest, r);
}

static void bcast(f32 out[4], f32 v) { out[0] = out[1] = out[2] = out[3] = v; }

void vu0_exec(Ctx *c, u32 raw) {
    if (!(raw & (1u << 25))) rt_fatal(c, "COP2 instruction %08X is not a VU0 macro operation", raw);
    vf0_fix(c);
    int dest = FIELD(raw, 21, 4), ft = FIELD(raw, 16, 5), fs = FIELD(raw, 11, 5), fd = FIELD(raw, 6, 5);
    int low = raw & 0x3F;
    f32 b[4];

    if (low < 0x3C) {                         /* special1 */
        static const signed char bc_kind[8] = {0, 1, 2, 3, 5, 6, 4, -1};   /* 0x00..0x1B in groups of 4 */
        if (low < 0x1C) {
            int kind = bc_kind[low >> 2];
            bcast(b, c->vf[ft].f[low & 3]);
            arith(c, kind, 0, dest, fd, fs, b);
            return;
        }
        switch (low) {
        case 0x1C: bcast(b, c->q); arith(c, 4, 0, dest, fd, fs, b); return;      /* vmulq */
        case 0x20: bcast(b, c->q); arith(c, 0, 0, dest, fd, fs, b); return;      /* vaddq */
        case 0x21: bcast(b, c->q); arith(c, 2, 0, dest, fd, fs, b); return;      /* vmaddq */
        case 0x24: bcast(b, c->q); arith(c, 1, 0, dest, fd, fs, b); return;      /* vsubq */
        case 0x25: bcast(b, c->q); arith(c, 3, 0, dest, fd, fs, b); return;      /* vmsubq */
        case 0x28: arith(c, 0, 0, dest, fd, fs, c->vf[ft].f); return;            /* vadd */
        case 0x29: arith(c, 2, 0, dest, fd, fs, c->vf[ft].f); return;            /* vmadd */
        case 0x2A: arith(c, 4, 0, dest, fd, fs, c->vf[ft].f); return;            /* vmul */
        case 0x2B: arith(c, 5, 0, dest, fd, fs, c->vf[ft].f); return;            /* vmax */
        case 0x2C: arith(c, 1, 0, dest, fd, fs, c->vf[ft].f); return;            /* vsub */
        case 0x2D: arith(c, 3, 0, dest, fd, fs, c->vf[ft].f); return;            /* vmsub */
        case 0x2F: arith(c, 6, 0, dest, fd, fs, c->vf[ft].f); return;            /* vmini */
        case 0x2E: {                                                              /* vopmsub */
            const f32 *a = c->vf[fs].f, *t = c->vf[ft].f;
            f32 r[4] = {c->vacc.f[0] - a[1] * t[2], c->vacc.f[1] - a[2] * t[0], c->vacc.f[2] - a[0] * t[1], 0};
            store(c, fd, 0xE, r);
            return;
        }
        case 0x30: if (fd) c->vi[fd & 15] = c->vi[fs & 15] + c->vi[ft & 15]; return;   /* viadd */
        case 0x31: if (fd) c->vi[fd & 15] = c->vi[fs & 15] - c->vi[ft & 15]; return;   /* visub */
        case 0x32: if (ft) c->vi[ft & 15] = c->vi[fs & 15] + ((s32)(fd << 27) >> 27); return; /* viaddi */
        case 0x34: if (fd) c->vi[fd & 15] = c->vi[fs & 15] & c->vi[ft & 15]; return;   /* viand */
        case 0x35: if (fd) c->vi[fd & 15] = c->vi[fs & 15] | c->vi[ft & 15]; return;   /* vior */
        }
    } else {                                  /* special2 */
        int op = (FIELD(raw, 6, 5) << 2) | (raw & 3);
        if (op < 0x10) {                      /* vaddabc vsubabc vmaddabc vmsubabc */
            static const int kind[4] = {0, 1, 2, 3};
            bcast(b, c->vf[ft].f[op & 3]);
            arith(c, kind[op >> 2], 1, dest, 0, fs, b);
            return;
        }
        if (op >= 0x18 && op < 0x1C) { bcast(b, c->vf[ft].f[op & 3]); arith(c, 4, 1, dest, 0, fs, b); return; }
        switch (op) {
        case 0x10: case 0x11: case 0x12: case 0x13: {                             /* vitof0/4/12/15 */
            static const f32 scale[4] = {1.0f, 1.0f / 16, 1.0f / 4096, 1.0f / 32768};
            f32 r[4];
            for (int i = 0; i < 4; i++) r[i] = (f32)(s32)c->vf[fs].u[i] * scale[op & 3];
            store(c, ft, dest, r);
            return;
        }
        case 0x14: case 0x15: case 0x16: case 0x17: {                             /* vftoi0/4/12/15 */
            static const f32 scale[4] = {1.0f, 16.0f, 4096.0f, 32768.0f};
            if (!ft) return;
            for (int i = 0; i < 4; i++)
                if (dest & (8 >> i)) c->vf[ft].u[i] = (u32)fpu_cvtw(c->vf[fs].f[i] * scale[op & 3]);
            return;
        }
        case 0x1C: bcast(b, c->q); arith(c, 4, 1, dest, 0, fs, b); return;       /* vmulaq */
        case 0x1D: {                                                              /* vabs */
            f32 r[4];
            for (int i = 0; i < 4; i++) r[i] = c->vf[fs].f[i] < 0 ? -c->vf[fs].f[i] : c->vf[fs].f[i];
            store(c, ft, dest, r);
            return;
        }
        case 0x20: bcast(b, c->q); arith(c, 0, 1, dest, 0, fs, b); return;       /* vaddaq */
        case 0x21: bcast(b, c->q); arith(c, 2, 1, dest, 0, fs, b); return;       /* vmaddaq */
        case 0x28: arith(c, 0, 1, dest, 0, fs, c->vf[ft].f); return;             /* vadda */
        case 0x29: arith(c, 2, 1, dest, 0, fs, c->vf[ft].f); return;             /* vmadda */
        case 0x2A: arith(c, 4, 1, dest, 0, fs, c->vf[ft].f); return;             /* vmula */
        case 0x2C: arith(c, 1, 1, dest, 0, fs, c->vf[ft].f); return;             /* vsuba */
        case 0x2D: arith(c, 3, 1, dest, 0, fs, c->vf[ft].f); return;             /* vmsuba */
        case 0x2E: {                                                              /* vopmula */
            const f32 *a = c->vf[fs].f, *t = c->vf[ft].f;
            f32 r[4] = {a[1] * t[2], a[2] * t[0], a[0] * t[1], 0};
            store_acc(c, 0xE, r);
            return;
        }
        case 0x2F: return;                                                        /* vnop */
        case 0x30: store(c, ft, dest, c->vf[fs].f); return;                      /* vmove */
        case 0x31: {                                                              /* vmr32 */
            const f32 *a = c->vf[fs].f;
            f32 r[4] = {a[1], a[2], a[3], a[0]};
            store(c, ft, dest, r);
            return;
        }
        case 0x38: {                                                              /* vdiv */
            f32 a = c->vf[fs].f[FIELD(raw, 21, 2)], d = c->vf[ft].f[FIELD(raw, 23, 2)];
            c->q = fpu_div(a, d);
            return;
        }
        case 0x39: c->q = fpu_sqrt(c->vf[ft].f[FIELD(raw, 23, 2)]); return;     /* vsqrt */
        case 0x3A: {                                                              /* vrsqrt */
            f32 a = c->vf[fs].f[FIELD(raw, 21, 2)], d = fpu_sqrt(c->vf[ft].f[FIELD(raw, 23, 2)]);
            c->q = fpu_div(a, d);
            return;
        }
        case 0x3B: return;                                                        /* vwaitq */
        case 0x3C: if (ft) c->vi[ft & 15] = (u16)c->vf[fs].u[FIELD(raw, 21, 2)]; return;  /* vmtir */
        case 0x3D:                                                                /* vmfir */
            for (int i = 0; i < 4; i++)
                if (ft && (dest & (8 >> i))) c->vf[ft].u[i] = (u32)(s32)(s16)c->vi[fs & 15];
            return;
        }
    }
    rt_fatal(c, "unimplemented VU0 macro instruction %08X", raw);
}

u32 vu0_cfc2(Ctx *c, int reg) {
    if (reg < 16) return c->vi[reg];
    switch (reg) {
    case 16: return c->vu0_status;
    case 17: return c->vu0_mac;
    case 18: return c->vu0_clip;
    case 22: { u32 u; memcpy(&u, &c->q, 4); return u; }
    case 29: return 0;          /* VPU-STAT: VU0/VU1 idle */
    }
    return 0;
}

void vu0_ctc2(Ctx *c, int reg, u32 v) {
    if (reg > 0 && reg < 16) { c->vi[reg] = (u16)v; return; }
    switch (reg) {
    case 16: c->vu0_status = v; return;
    case 18: c->vu0_clip = v; return;
    case 22: memcpy(&c->q, &v, 4); return;
    case 31: rt_log("vu0", "CMSAR1 = %X (start VU1 microprogram): not emulated yet", v); return;
    }
}
