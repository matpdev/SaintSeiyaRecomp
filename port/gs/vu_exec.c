/*
 * VU micro mode: an interpreter for the microprograms the game runs on VU1 (and VU0).
 *
 * An instruction is a pair: the upper word (bits 32-63: FMAC operations; bit 63 I, 62 E, 61 M,
 * 60 D, 59 T) and the lower word (bits 0-31: loads/stores, integer, branches, FDIV, EFU, XGKICK).
 * With I set, the lower word is a float loaded into the I register. E ends the program after the
 * next pair. Branches have one delay pair.
 *
 * Timing: the hardware stalls on FMAC register dependencies, so executing pairs in order gives the
 * same results, except for Q (DIV/SQRT/RSQRT), which is written after a latency without a stall
 * (7 or 13 cycles); that latency is modelled, one cycle per pair. Within a pair the lower half
 * runs before the upper half's result is written.
 *
 * Upper encoding (as COP2 macro mode): dest 21-24, ft 16-20, fs 11-15, fd 6-10, operation 0-5
 * (0x3C-0x3F: ((bits 6-10) << 2 | bits 0-1)). Lower: opcode 25-31 (0x40: operation in 0-5, or
 * 0x3C-0x3F with bits 6-10), it/ft 16-20, is/fs 11-15, id/fd 6-10, imm11 0-10, dest 21-24.
 * Flags: MAC (component i = x..w: zero bit 3-i, sign 7-i), status (Z S U O I D, sticky copies
 * 6-11), clip (6 bits per CLIP, the last four kept).
 */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"
#include "vu.h"
#include "gs.h"
#include "perf.h"

typedef struct {
    VF vf[32];
    u16 vi[16];
    VF acc;
    float q, p, i, r;
    float q_next;
    int q_wait;                 /* pairs until q_next lands in q */
    u32 mac, status, clip;
    u32 pc;                     /* in bytes */
    u8 *mem, *code;
    u32 mem_mask, code_mask;
    int id;
} Vu;

static Vu vus[2] = {
    {.id = 0, .mem = vu0_mem, .code = vu0_code, .mem_mask = 0xFFF, .code_mask = 0xFFF},
    {.id = 1, .mem = vu1_mem, .code = vu1_code, .mem_mask = 0x3FFF, .code_mask = 0x3FFF},
};
u32 vu1_itop, vu1_top;
static u64 programs_run, pairs_run;

static inline float clampf(float x) { return fpu(x); }

static inline VF *R(Vu *v, int n) {
    v->vf[0].f[0] = v->vf[0].f[1] = v->vf[0].f[2] = 0.0f;
    v->vf[0].f[3] = 1.0f;
    return &v->vf[n];
}

/* ------------------------------------------------------------------------------- upper (FMAC) */

static void set_flags(Vu *v, int dest, const float r[4]) {
    u32 mac = 0;
    for (int k = 0; k < 4; k++) {
        if (!(dest & (8 >> k))) continue;
        if (r[k] == 0.0f) mac |= 1u << (3 - k);
        if (signbit(r[k])) mac |= 1u << (7 - k);
    }
    v->mac = mac;
    u32 st = v->status & 0xFC0;
    if (mac & 0x0F) st |= 0x41;
    if (mac & 0xF0) st |= 0x82;
    v->status = st;
}

typedef struct { int kind; int reg; int dest; float val[4]; } UpperOut;   /* kind 0 none, 1 vf, 2 acc */

static void upper(Vu *v, u32 w, UpperOut *o) {
    int dest = (w >> 21) & 15, ft = (w >> 16) & 31, fs = (w >> 11) & 31, fd = (w >> 6) & 31;
    int low = w & 0x3F, bc = w & 3;
    const float *a = R(v, fs)->f, *t = R(v, ft)->f, *acc = v->acc.f;
    float b[4], r[4];
    o->kind = 0;
    o->dest = dest;
    int op = -1, to_acc = 0, bsrc = 0;    /* op: 0 add 1 sub 2 madd 3 msub 4 mul 5 max 6 mini; bsrc: 0 ft, 1 bc, 2 I, 3 Q */

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
            case 0x2E:                                    /* opmsub */
                r[0] = acc[0] - a[1] * t[2]; r[1] = acc[1] - a[2] * t[0]; r[2] = acc[2] - a[0] * t[1]; r[3] = 0;
                for (int k = 0; k < 4; k++) o->val[k] = clampf(r[k]);
                o->kind = 1; o->reg = fd; o->dest = 0xE;
                set_flags(v, 0xE, o->val);
                return;
            case 0x2F: op = 6; break;                    /* mini */
            default: return;
        }
    } else {
        int s2 = ((w >> 6) & 0x1F) << 2 | (w & 3);
        to_acc = 1;
        if (s2 < 0x10) { op = s2 >> 2; bsrc = 1; }               /* adda/suba/madda/msuba + bc */
        else if (s2 >= 0x18 && s2 < 0x1C) { op = 4; bsrc = 1; }  /* mulabc */
        else switch (s2) {
            case 0x10: case 0x11: case 0x12: case 0x13: {        /* itof */
                static const float sc[4] = {1.0f, 1.0f / 16, 1.0f / 4096, 1.0f / 32768};
                for (int k = 0; k < 4; k++) o->val[k] = (float)(s32)R(v, fs)->u[k] * sc[s2 & 3];
                o->kind = 1; o->reg = ft;
                return;
            }
            case 0x14: case 0x15: case 0x16: case 0x17: {        /* ftoi */
                static const float sc[4] = {1.0f, 16.0f, 4096.0f, 32768.0f};
                for (int k = 0; k < 4; k++) { s32 iv = fpu_cvtw(a[k] * sc[s2 & 3]); memcpy(&o->val[k], &iv, 4); }
                o->kind = 1; o->reg = ft;
                return;
            }
            case 0x1C: op = 4; bsrc = 3; break;          /* mulaq */
            case 0x1D:                                    /* abs */
                for (int k = 0; k < 4; k++) o->val[k] = fabsf(a[k]);
                o->kind = 1; o->reg = ft;
                return;
            case 0x1E: op = 4; bsrc = 2; break;          /* mulai */
            case 0x1F: {                                  /* clip.xyz fs, ft.w */
                float lim = fabsf(t[3]);
                u32 c = 0;
                if (a[0] > lim) c |= 1;
                if (a[0] < -lim) c |= 2;
                if (a[1] > lim) c |= 4;
                if (a[1] < -lim) c |= 8;
                if (a[2] > lim) c |= 16;
                if (a[2] < -lim) c |= 32;
                v->clip = ((v->clip << 6) | c) & 0xFFFFFF;
                return;
            }
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
            case 0x2E:                                    /* opmula */
                o->val[0] = clampf(a[1] * t[2]); o->val[1] = clampf(a[2] * t[0]); o->val[2] = clampf(a[0] * t[1]); o->val[3] = 0;
                o->kind = 2; o->dest = 0xE;
                set_flags(v, 0xE, o->val);
                return;
            default: return;                             /* nop and the rest */
        }
    }
    if (op < 0) return;
    for (int k = 0; k < 4; k++)
        b[k] = bsrc == 0 ? t[k] : bsrc == 1 ? t[bc] : bsrc == 2 ? v->i : v->q;
    for (int k = 0; k < 4; k++) {
        switch (op) {
        case 0: r[k] = a[k] + b[k]; break;
        case 1: r[k] = a[k] - b[k]; break;
        case 2: r[k] = acc[k] + a[k] * b[k]; break;
        case 3: r[k] = acc[k] - a[k] * b[k]; break;
        case 4: r[k] = a[k] * b[k]; break;
        case 5: r[k] = a[k] > b[k] ? a[k] : b[k]; break;
        default: r[k] = a[k] < b[k] ? a[k] : b[k]; break;
        }
        o->val[k] = (op >= 5) ? r[k] : clampf(r[k]);
    }
    o->kind = to_acc ? 2 : 1;
    o->reg = fd;
    if (op < 5) set_flags(v, dest, o->val);
}

static void commit_upper(Vu *v, const UpperOut *o) {
    if (o->kind == 0) return;
    float *d = o->kind == 2 ? v->acc.f : (o->reg ? v->vf[o->reg].f : NULL);
    if (!d) return;
    for (int k = 0; k < 4; k++)
        if (o->dest & (8 >> k)) d[k] = o->val[k];
}

/* ------------------------------------------------------------------------------- lower */

static inline u8 *qw(Vu *v, u32 addr) { return v->mem + ((addr * 16) & v->mem_mask); }

static void store_vf(Vu *v, int reg, int dest, const u32 val[4]) {
    if (!reg) return;
    u32 tmp[4];
    memcpy(tmp, val, 16);
    for (int k = 0; k < 4; k++)
        if (dest & (8 >> k)) v->vf[reg].u[k] = tmp[k];
}

static void set_q(Vu *v, float x, int latency) {
    v->q_next = clampf(x);
    v->q_wait = latency;
}

/* Returns 1 for a taken branch, with the target (bytes) in *target. */
static int lower(Vu *v, u32 w, u32 pc, u32 *target) {
    int op = w >> 25;
    int it = (w >> 16) & 31, is = (w >> 11) & 31, id = (w >> 6) & 31, dest = (w >> 21) & 15;
    s32 imm11 = ((s32)(w << 21)) >> 21;
    u16 *vi = v->vi;
    u32 imm15 = ((w >> 10) & 0x7800) | (w & 0x7FF), imm12 = ((w >> 10) & 0x800) | (w & 0x7FF);
#define VI(n) (((n) & 15) ? vi[(n) & 15] : 0)
#define SETVI(n, x) do { if ((n) & 15) vi[(n) & 15] = (u16)(x); } while (0)
#define BR(cond) do { if (cond) { *target = pc + 8 + imm11 * 8; return 1; } return 0; } while (0)
    switch (op) {
    case 0x00: { u32 val[4]; memcpy(val, qw(v, (u32)(VI(is) + imm11)), 16); store_vf(v, it, dest, val); return 0; }  /* LQ */
    case 0x01: {                                                                                                     /* SQ */
        u8 *m = qw(v, (u32)(VI(it) + imm11));
        for (int k = 0; k < 4; k++) if (dest & (8 >> k)) memcpy(m + 4 * k, &R(v, is)->u[k], 4);
        return 0;
    }
    case 0x04: {                                                                                                     /* ILW */
        u8 *m = qw(v, (u32)(VI(is) + imm11));
        for (int k = 0; k < 4; k++) if (dest & (8 >> k)) { u32 x; memcpy(&x, m + 4 * k, 4); SETVI(it, x); break; }
        return 0;
    }
    case 0x05: {                                                                                                     /* ISW */
        u8 *m = qw(v, (u32)(VI(is) + imm11));
        u32 x = VI(it);
        for (int k = 0; k < 4; k++) if (dest & (8 >> k)) memcpy(m + 4 * k, &x, 4);
        return 0;
    }
    case 0x08: SETVI(it, VI(is) + imm15); return 0;                                     /* IADDIU */
    case 0x09: SETVI(it, VI(is) - imm15); return 0;                                     /* ISUBIU */
    case 0x10: vi[1] = (v->clip & 0xFFFFFF) == (w & 0xFFFFFF); return 0;               /* FCEQ */
    case 0x11: v->clip = w & 0xFFFFFF; return 0;                                        /* FCSET */
    case 0x12: vi[1] = (v->clip & w & 0xFFFFFF) != 0; return 0;                        /* FCAND */
    case 0x13: vi[1] = ((v->clip | w) & 0xFFFFFF) == 0xFFFFFF; return 0;               /* FCOR */
    case 0x14: SETVI(it, (v->status & 0xFFF) == imm12); return 0;                       /* FSEQ */
    case 0x15: v->status = (v->status & 0x3F) | (imm12 & 0xFC0); return 0;              /* FSSET */
    case 0x16: SETVI(it, v->status & imm12); return 0;                                  /* FSAND */
    case 0x17: SETVI(it, v->status | imm12); return 0;                                  /* FSOR */
    case 0x18: SETVI(it, (v->mac & 0xFFFF) == VI(is)); return 0;                        /* FMEQ */
    case 0x1A: SETVI(it, v->mac & VI(is)); return 0;                                    /* FMAND */
    case 0x1B: SETVI(it, v->mac | VI(is)); return 0;                                    /* FMOR */
    case 0x1C: SETVI(it, v->clip & 0xFFF); return 0;                                    /* FCGET */
    case 0x20: BR(1);                                                                   /* B */
    case 0x21: SETVI(it, (pc + 16) / 8); BR(1);                                         /* BAL */
    case 0x24: *target = VI(is) * 8; return 1;                                          /* JR */
    case 0x25: { u32 t = VI(is) * 8; SETVI(it, (pc + 16) / 8); *target = t; return 1; } /* JALR */
    case 0x28: BR(VI(it) == VI(is));                                                    /* IBEQ */
    case 0x29: BR(VI(it) != VI(is));                                                    /* IBNE */
    case 0x2C: BR((s16)VI(is) < 0);                                                     /* IBLTZ */
    case 0x2D: BR((s16)VI(is) > 0);                                                     /* IBGTZ */
    case 0x2E: BR((s16)VI(is) <= 0);                                                    /* IBLEZ */
    case 0x2F: BR((s16)VI(is) >= 0);                                                    /* IBGEZ */
    case 0x40: break;
    default: return 0;
    }
    int low = w & 0x3F;
    switch (low) {
    case 0x30: SETVI(id, VI(is) + VI(it)); return 0;                                    /* IADD */
    case 0x31: SETVI(id, VI(is) - VI(it)); return 0;                                    /* ISUB */
    case 0x32: SETVI(it, VI(is) + (((s32)(w << 21)) >> 27)); return 0;                  /* IADDI */
    case 0x34: SETVI(id, VI(is) & VI(it)); return 0;                                    /* IAND */
    case 0x35: SETVI(id, VI(is) | VI(it)); return 0;                                    /* IOR */
    }
    if (low < 0x3C) return 0;
    int s2 = ((w >> 6) & 0x1F) << 2 | (w & 3);
    int fsf = (w >> 21) & 3, ftf = (w >> 23) & 3;
    const float *a = R(v, is)->f, *t = R(v, it)->f;
    switch (s2) {
    case 0x30: store_vf(v, it, dest, R(v, is)->u); return 0;                           /* MOVE */
    case 0x31: { u32 x[4] = {R(v, is)->u[1], R(v, is)->u[2], R(v, is)->u[3], R(v, is)->u[0]}; store_vf(v, it, dest, x); return 0; }  /* MR32 */
    case 0x34: { u32 val[4]; memcpy(val, qw(v, VI(is)), 16); store_vf(v, it, dest, val); SETVI(is, VI(is) + 1); return 0; }  /* LQI */
    case 0x35: { u8 *m = qw(v, VI(it)); for (int k = 0; k < 4; k++) if (dest & (8 >> k)) memcpy(m + 4 * k, &R(v, is)->u[k], 4); SETVI(it, VI(it) + 1); return 0; }  /* SQI */
    case 0x36: { SETVI(is, VI(is) - 1); u32 val[4]; memcpy(val, qw(v, VI(is)), 16); store_vf(v, it, dest, val); return 0; }  /* LQD */
    case 0x37: { SETVI(it, VI(it) - 1); u8 *m = qw(v, VI(it)); for (int k = 0; k < 4; k++) if (dest & (8 >> k)) memcpy(m + 4 * k, &R(v, is)->u[k], 4); return 0; }  /* SQD */
    case 0x38: set_q(v, fpu_div(a[fsf], t[ftf]), 7); return 0;                         /* DIV */
    case 0x39: set_q(v, sqrtf(fabsf(t[ftf])), 7); return 0;                            /* SQRT */
    case 0x3A: set_q(v, fpu_div(a[fsf], sqrtf(fabsf(t[ftf]))), 13); return 0;          /* RSQRT */
    case 0x3B: if (v->q_wait) { v->q = v->q_next; v->q_wait = 0; } return 0;           /* WAITQ */
    case 0x3C: SETVI(it, R(v, is)->u[fsf]); return 0;                                   /* MTIR */
    case 0x3D: { u32 x = (u32)(s32)(s16)VI(is); u32 val[4] = {x, x, x, x}; store_vf(v, it, dest, val); return 0; }  /* MFIR */
    case 0x3E: {                                                                        /* ILWR */
        u8 *m = qw(v, VI(is));
        for (int k = 0; k < 4; k++) if (dest & (8 >> k)) { u32 x; memcpy(&x, m + 4 * k, 4); SETVI(it, x); break; }
        return 0;
    }
    case 0x3F: { u8 *m = qw(v, VI(is)); u32 x = VI(it); for (int k = 0; k < 4; k++) if (dest & (8 >> k)) memcpy(m + 4 * k, &x, 4); return 0; }  /* ISWR */
    case 0x40: case 0x41: {                                                             /* RNEXT / RGET */
        u32 r;
        memcpy(&r, &v->r, 4);
        if (s2 == 0x40) {
            int x = (r >> 4) & 1, y = (r >> 22) & 1;
            r = (((r << 1) | (u32)(x ^ y)) & 0x7FFFFF) | 0x3F800000;
            memcpy(&v->r, &r, 4);
        }
        u32 val[4] = {r, r, r, r};
        store_vf(v, it, dest, val);
        return 0;
    }
    case 0x42: { u32 r = (R(v, is)->u[fsf] & 0x7FFFFF) | 0x3F800000; memcpy(&v->r, &r, 4); return 0; }   /* RINIT */
    case 0x43: { u32 r; memcpy(&r, &v->r, 4); r = ((r ^ R(v, is)->u[fsf]) & 0x7FFFFF) | 0x3F800000; memcpy(&v->r, &r, 4); return 0; }  /* RXOR */
    case 0x64: { u32 x; memcpy(&x, &v->p, 4); u32 val[4] = {x, x, x, x}; store_vf(v, it, dest, val); return 0; }  /* MFP */
    case 0x68: SETVI(it, vu1_top); return 0;                                            /* XTOP */
    case 0x69: SETVI(it, vu1_itop); return 0;                                           /* XITOP */
    case 0x6C: if (v->id == 1) gif_path1(vu1_mem, VI(is)); return 0;                   /* XGKICK */
    case 0x70: v->p = a[0] * a[0] + a[1] * a[1] + a[2] * a[2]; return 0;                /* ESADD */
    case 0x71: v->p = fpu_div(1.0f, a[0] * a[0] + a[1] * a[1] + a[2] * a[2]); return 0; /* ERSADD */
    case 0x72: v->p = sqrtf(a[0] * a[0] + a[1] * a[1] + a[2] * a[2]); return 0;         /* ELENG */
    case 0x73: v->p = fpu_div(1.0f, sqrtf(a[0] * a[0] + a[1] * a[1] + a[2] * a[2])); return 0;  /* ERLENG */
    case 0x74: v->p = atan2f(a[1], a[0]); return 0;                                     /* EATANxy */
    case 0x75: v->p = atan2f(a[2], a[0]); return 0;                                     /* EATANxz */
    case 0x76: v->p = a[0] + a[1] + a[2] + a[3]; return 0;                              /* ESUM */
    case 0x78: v->p = sqrtf(fabsf(a[fsf])); return 0;                                   /* ESQRT */
    case 0x79: v->p = fpu_div(1.0f, sqrtf(fabsf(a[fsf]))); return 0;                    /* ERSQRT */
    case 0x7A: v->p = fpu_div(1.0f, a[fsf]); return 0;                                  /* ERCPR */
    case 0x7B: return 0;                                                                /* WAITP */
    case 0x7C: v->p = sinf(a[fsf]); return 0;                                           /* ESIN */
    case 0x7D: v->p = atanf(a[fsf]); return 0;                                          /* EATAN */
    case 0x7E: v->p = expf(-a[fsf]); return 0;                                          /* EEXP */
    }
    static u8 told[128];
    if (s2 < 128 && !told[s2]++) rt_log("vu", "VU%d: unknown lower instruction %08X", v->id, w);
    return 0;
#undef VI
#undef SETVI
#undef BR
}

/* ------------------------------------------------------------------------------- run */

static void run(Vu *v) {
    int ending = 0, branch_pending = 0;
    u32 branch_target = 0;
    programs_run++;
    for (int guard = 0; guard < 1 << 22; guard++) {
        u32 pc = v->pc & v->code_mask;
        u32 lo, hi;
        memcpy(&lo, v->code + pc, 4);
        memcpy(&hi, v->code + pc + 4, 4);
        v->pc = (pc + 8) & v->code_mask;
        pairs_run++;
        if (v->q_wait && --v->q_wait == 0) v->q = v->q_next;

        UpperOut uo;
        upper(v, hi, &uo);
        int taken = 0;
        u32 target = 0;
        if (hi & 0x80000000u) memcpy(&v->i, &lo, 4);   /* I bit: the lower word is a constant */
        else taken = lower(v, lo, pc, &target);
        commit_upper(v, &uo);

        if (branch_pending) {
            v->pc = branch_target & v->code_mask;
            branch_pending = 0;
        }
        if (taken) { branch_pending = 1; branch_target = target; }
        if (ending) break;
        if (hi & 0x40000000u) ending = 1;               /* E: one more pair, then stop */
    }
    if (v->q_wait) { v->q = v->q_next; v->q_wait = 0; }
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
    if (addr >= 0) v->pc = (u32)addr * 8;
    u64 t = perf_now();
    run(v);
    u64 dt = perf_now() - t;
    perf.vu_ns += dt;
    perf.gs_ns -= 0;   /* (XGKICK time, inside run(), is also in gs_ns) */
}

void vu_stats(void) {
    rt_log("vu", "%llu programs, %llu instruction pairs", (unsigned long long)programs_run, (unsigned long long)pairs_run);
}
