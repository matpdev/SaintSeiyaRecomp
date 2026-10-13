/*
 * VU micro mode: the state of a VU and the helpers shared by the interpreter (vu_exec.c) and the
 * programs translated to C (vu_jit.c), which include this header when they are compiled.
 */
#pragma once
#include <immintrin.h>
#include <math.h>
#include <string.h>

#include <stdio.h>
#include <stdlib.h>

#include "r5900.h"
#include "runtime.h"

typedef struct {
    VF vf[32];
    u16 vi[16];
    VF acc;
    float q, p, i, r;
    float q_next;
    int q_wait;                 /* pairs until q_next lands in q */
    float p_next;
    int p_wait;                 /* pairs until p_next lands in p (EFU) */
    u32 mac, status, clip;      /* as the FMAC pipeline leaves them */
    u32 fl_mac[4], fl_status[4], fl_clip[4];  /* after each of the last 4 pairs: what flag reads see */
    u32 fl_pos;
    u32 pc;                     /* in bytes */
    u8 *mem, *code;
    u32 mem_mask, code_mask;
    int id;
} Vu;


enum { UK_NOP, UK_ARITH, UK_OPMSUB, UK_OPMULA, UK_ITOF, UK_FTOI, UK_ABS, UK_CLIP };

typedef struct {
    u8 kind, op, bsrc, bc;      /* op: 0 add 1 sub 2 madd 3 msub 4 mul 5 max 6 mini; bsrc: 0 ft, 1 ft.bc, 2 I, 3 Q */
    u8 dest, fs, ft, fd;
    u8 to_acc, sc;              /* sc: ITOF/FTOI scale index */
    u8 ibit, ebit, lnop;        /* lower word is a constant / end bit / lower is a NOP */
    u8 valid;
    u32 lo, hi;
} Dec;


void vu_decode(Dec *d, u32 lo, u32 hi);
int vu_lower(Vu *v, u32 w, u32 pc, u32 *target);    /* one lower instruction; 1: branch taken */
extern u32 vu1_itop, vu1_top;
extern u8 vu1_mem[0x4000];
void gif_path1(const u8 *vu_mem, u32 addr);

/* movemask order (x = bit 0) -> MAC order (x = bit 3) */
static const u8 vu_rev4[16] = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};

static inline float clampf(float x) { return fpu(x); }

static inline VF *R(Vu *v, int n) { return &v->vf[n]; }   /* vf0 is set to (0, 0, 0, 1) when a program starts */

static inline __m128 vclamp(__m128 r) {
    const __m128 hi = _mm_set1_ps(3.40282347e38f), lo = _mm_set1_ps(-3.40282347e38f);
    return _mm_min_ps(_mm_max_ps(r, lo), hi);
}

static inline __attribute__((always_inline)) void set_flags(Vu *v, int dest, __m128 r) {
    u32 z = vu_rev4[_mm_movemask_ps(_mm_cmpeq_ps(r, _mm_setzero_ps()))] & dest;
    u32 sg = vu_rev4[_mm_movemask_ps(r)] & dest;
    u32 mac = sg << 4 | z;
    v->mac = mac;
    u32 st = v->status & 0xFC0;
    if (z) st |= 0x41;
    if (sg) st |= 0x82;
    v->status = st;
}

static inline u8 *qw(Vu *v, u32 addr) { return v->mem + ((addr * 16) & v->mem_mask); }

static inline void store_vf(Vu *v, int reg, int dest, const u32 val[4]) {
    if (!reg) return;
    u32 tmp[4];
    memcpy(tmp, val, 16);
    for (int k = 0; k < 4; k++)
        if (dest & (8 >> k)) v->vf[reg].u[k] = tmp[k];
}

static inline void set_p(Vu *v, float x, int latency) {
    v->p_next = x;
    v->p_wait = latency;
}

static inline void set_q(Vu *v, float x, int latency) {
    v->q_next = clampf(x);
    v->q_wait = latency;
}

/* Flag pipeline: fl_*[fl_pos] holds the flags as they were 4 pairs ago (what reads see); after
 * each pair the current ones replace it. */
static inline void flags_set_all(Vu *v) {
    for (int k = 0; k < 4; k++) { v->fl_mac[k] = v->mac; v->fl_status[k] = v->status; v->fl_clip[k] = v->clip; }
}

static inline __attribute__((always_inline)) void flags_advance(Vu *v) {
    v->fl_mac[v->fl_pos] = v->mac;
    v->fl_status[v->fl_pos] = v->status;
    v->fl_clip[v->fl_pos] = v->clip;
    v->fl_pos = (v->fl_pos + 1) & 3;
}


/* ------------------------------------------------------------------------------- upper (FMAC) */

typedef struct { float *dst; __m128 val; int dest; } UpperOut;   /* dst NULL: nothing to write */

static inline __attribute__((always_inline)) void upper(Vu *v, const Dec *d, UpperOut *o) {
    o->dst = NULL;
    o->dest = d->dest;
    switch (d->kind) {
    case UK_ARITH: {
        __m128 a = _mm_load_ps(v->vf[d->fs].f), b, r;
        switch (d->bsrc) {
        case 0: b = _mm_load_ps(v->vf[d->ft].f); break;
        case 1: b = _mm_set1_ps(v->vf[d->ft].f[d->bc]); break;
        case 2: b = _mm_set1_ps(v->i); break;
        default: b = _mm_set1_ps(v->q); break;
        }
        switch (d->op) {
        case 0: r = _mm_add_ps(a, b); break;
        case 1: r = _mm_sub_ps(a, b); break;
        case 2: r = _mm_add_ps(_mm_load_ps(v->acc.f), _mm_mul_ps(a, b)); break;
        case 3: r = _mm_sub_ps(_mm_load_ps(v->acc.f), _mm_mul_ps(a, b)); break;
        case 4: r = _mm_mul_ps(a, b); break;
        case 5: r = _mm_max_ps(a, b); break;
        default: r = _mm_min_ps(a, b); break;
        }
        if (d->op < 5) {
            r = vclamp(r);
            set_flags(v, d->dest, r);
        }
        o->val = r;
        o->dst = d->to_acc ? v->acc.f : d->fd ? v->vf[d->fd].f : NULL;
        return;
    }
    case UK_OPMSUB: case UK_OPMULA: {
        const float *a = v->vf[d->fs].f, *t = v->vf[d->ft].f, *acc = v->acc.f;
        __m128 r = d->kind == UK_OPMSUB
            ? _mm_setr_ps(acc[0] - a[1] * t[2], acc[1] - a[2] * t[0], acc[2] - a[0] * t[1], 0)
            : _mm_setr_ps(a[1] * t[2], a[2] * t[0], a[0] * t[1], 0);
        r = vclamp(r);
        set_flags(v, 0xE, r);
        o->val = r;
        o->dest = 0xE;
        o->dst = d->kind == UK_OPMULA ? v->acc.f : d->fd ? v->vf[d->fd].f : NULL;
        return;
    }
    case UK_ITOF: {
        static const float sc[4] = {1.0f, 1.0f / 16, 1.0f / 4096, 1.0f / 32768};
        __m128i x = _mm_load_si128((const __m128i *)v->vf[d->fs].u);
        o->val = _mm_mul_ps(_mm_cvtepi32_ps(x), _mm_set1_ps(sc[d->sc]));
        o->dst = d->ft ? v->vf[d->ft].f : NULL;
        return;
    }
    case UK_FTOI: {
        static const float sc[4] = {1.0f, 16.0f, 4096.0f, 32768.0f};
        float in[4];
        s32 iv[4];
        _mm_storeu_ps(in, _mm_mul_ps(_mm_load_ps(v->vf[d->fs].f), _mm_set1_ps(sc[d->sc])));
        for (int k = 0; k < 4; k++) iv[k] = fpu_cvtw(in[k]);
        o->val = _mm_castsi128_ps(_mm_loadu_si128((const __m128i *)iv));
        o->dst = d->ft ? v->vf[d->ft].f : NULL;
        return;
    }
    case UK_ABS:
        o->val = _mm_andnot_ps(_mm_set1_ps(-0.0f), _mm_load_ps(v->vf[d->fs].f));
        o->dst = d->ft ? v->vf[d->ft].f : NULL;
        return;
    case UK_CLIP: {
        const float *a = v->vf[d->fs].f;
        float lim = fabsf(v->vf[d->ft].f[3]);
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
    default: return;
    }
}

static inline __m128 vu_dest_mask(int dest) {
    return _mm_castsi128_ps(_mm_setr_epi32(-((dest >> 3) & 1), -((dest >> 2) & 1), -((dest >> 1) & 1), -(dest & 1)));
}

static inline __attribute__((always_inline)) void commit_upper(const UpperOut *o) {
    if (!o->dst) return;
    if (o->dest == 15) { _mm_store_ps(o->dst, o->val); return; }
    __m128 m = vu_dest_mask(o->dest);
    __m128 old = _mm_load_ps(o->dst);
    _mm_store_ps(o->dst, _mm_or_ps(_mm_and_ps(m, o->val), _mm_andnot_ps(m, old)));
}

/* ------------------------------------------------------------------------------- lower */

/* Returns 1 for a taken branch, with the target (bytes) in *target. */
static inline __attribute__((always_inline)) int lower(Vu *v, u32 w, u32 pc, u32 *target) {
    int op = w >> 25;
    int it = (w >> 16) & 31, is = (w >> 11) & 31, id = (w >> 6) & 31, dest = (w >> 21) & 15;
    s32 imm11 = ((s32)(w << 21)) >> 21;
    u16 *vi = v->vi;
    u32 imm15 = ((w >> 10) & 0x7800) | (w & 0x7FF), imm12 = ((w >> 10) & 0x800) | (w & 0x7FF);
#define VI(n) (((n) & 15) ? vi[(n) & 15] : 0)
#define SETVI(n, x) do { if ((n) & 15) vi[(n) & 15] = (u16)(x); } while (0)
#define BR(cond) do { if (cond) { *target = pc + 8 + imm11 * 8; return 1; } return 0; } while (0)
    u32 seen_mac = v->fl_mac[v->fl_pos], seen_status = v->fl_status[v->fl_pos], seen_clip = v->fl_clip[v->fl_pos];
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
    case 0x10: vi[1] = (seen_clip & 0xFFFFFF) == (w & 0xFFFFFF); return 0;               /* FCEQ */
    case 0x11: v->clip = w & 0xFFFFFF; flags_set_all(v); return 0;                                       /* FCSET */
    case 0x12: vi[1] = (seen_clip & w & 0xFFFFFF) != 0; return 0;                        /* FCAND */
    case 0x13: vi[1] = ((seen_clip | w) & 0xFFFFFF) == 0xFFFFFF; return 0;               /* FCOR */
    case 0x14: SETVI(it, (seen_status & 0xFFF) == imm12); return 0;                       /* FSEQ */
    case 0x15: v->status = (v->status & 0x3F) | (imm12 & 0xFC0); flags_set_all(v); return 0;              /* FSSET */
    case 0x16: SETVI(it, seen_status & imm12); return 0;                                  /* FSAND */
    case 0x17: SETVI(it, seen_status | imm12); return 0;                                  /* FSOR */
    case 0x18: SETVI(it, (seen_mac & 0xFFFF) == VI(is)); return 0;                        /* FMEQ */
    case 0x1A: SETVI(it, seen_mac & VI(is)); return 0;                                    /* FMAND */
    case 0x1B: SETVI(it, seen_mac | VI(is)); return 0;                                    /* FMOR */
    case 0x1C: SETVI(it, seen_clip & 0xFFF); return 0;                                    /* FCGET */
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
    case 0x70: set_p(v, a[0] * a[0] + a[1] * a[1] + a[2] * a[2], 11); return 0;                /* ESADD */
    case 0x71: set_p(v, fpu_div(1.0f, a[0] * a[0] + a[1] * a[1] + a[2] * a[2]), 18); return 0; /* ERSADD */
    case 0x72: set_p(v, sqrtf(a[0] * a[0] + a[1] * a[1] + a[2] * a[2]), 18); return 0;         /* ELENG */
    case 0x73: set_p(v, fpu_div(1.0f, sqrtf(a[0] * a[0] + a[1] * a[1] + a[2] * a[2])), 24); return 0;  /* ERLENG */
    case 0x74: set_p(v, atan2f(a[1], a[0]), 54); return 0;                                     /* EATANxy */
    case 0x75: set_p(v, atan2f(a[2], a[0]), 54); return 0;                                     /* EATANxz */
    case 0x76: set_p(v, a[0] + a[1] + a[2] + a[3], 12); return 0;                              /* ESUM */
    case 0x78: set_p(v, sqrtf(fabsf(a[fsf])), 12); return 0;                                   /* ESQRT */
    case 0x79: set_p(v, fpu_div(1.0f, sqrtf(fabsf(a[fsf]))), 18); return 0;                    /* ERSQRT */
    case 0x7A: set_p(v, fpu_div(1.0f, a[fsf]), 12); return 0;                                  /* ERCPR */
    case 0x7B: if (v->p_wait) { v->p = v->p_next; v->p_wait = 0; } return 0;                                                               /* WAITP */
    case 0x7C: set_p(v, sinf(a[fsf]), 29); return 0;                                           /* ESIN */
    case 0x7D: set_p(v, atanf(a[fsf]), 54); return 0;                                          /* EATAN */
    case 0x7E: set_p(v, expf(-a[fsf]), 44); return 0;                                          /* EEXP */
    }
    static u8 told[128];
    if (s2 < 128 && !told[s2]++) rt_log("vu", "VU%d: unknown lower instruction %08X", v->id, w);
    return 0;
#undef VI
#undef SETVI
#undef BR
}

