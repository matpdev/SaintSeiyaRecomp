/*
 * Guest CPU state and the operations the recompiled code (build/recomp/rc_*.c) is written in.
 *
 * Registers are the Emotion Engine's: 32 GPRs of 128 bits (ordinary instructions use the low 64),
 * HI/LO pairs for the two multiply pipelines, the shift amount register of the MMI funnel shift, the
 * single-precision FPU with its accumulator, and VU0 for macro-mode COP2 instructions.
 *
 * Memory: 32 MB of RAM and the 16 KB scratchpad are host arrays; everything else (hardware registers)
 * goes through rt_mmio_* in memory.c. Guest addresses are 32-bit integers, never host pointers.
 */
#pragma once
#include <math.h>
#include <stdint.h>
#include <string.h>

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef int64_t s64;
typedef float f32;

typedef union {
    u64 d[2];
    s64 sd[2];
    u32 w[4];
    s32 sw[4];
    u16 h[8];
    s16 sh[8];
    u8 b[16];
    s8 sb[16];
} __attribute__((aligned(16))) GPR;

typedef union {
    f32 f[4];
    u32 u[4];
} __attribute__((aligned(16))) VF;

typedef struct Ctx {
    GPR r[32];
    GPR hi, lo;                 /* d[0]: HI/LO, d[1]: HI1/LO1 */
    u64 sa;
    union { f32 f; u32 u; } f[32];
    f32 facc;
    u32 fcr31;
    int fcc;
    /* VU0 (macro mode) */
    VF vf[32];
    u16 vi[16];
    VF vacc;
    f32 q, p;
    u32 vu0_status, vu0_mac, vu0_clip;
    /* thread bookkeeping for the kernel HLE */
    int thread;
} Ctx;

typedef void (*GuestFn)(Ctx *c);
typedef struct {
    u32 addr, size;
    GuestFn fn;
    const char *name;
} FuncEntry;

extern u8 *rt_ram;              /* 32 MB */
extern u8 rt_spr[0x4000];       /* scratchpad, 0x70000000 */

/* ---------------------------------------------------------------------------------- registers */
#define RW(n)  (c->r[n].w[0])
#define RSW(n) (c->r[n].sw[0])
#define RD(n)  (c->r[n].d[0])
#define RSD(n) (c->r[n].sd[0])
#define SET32(n, v) (c->r[n].sd[0] = (s64)(s32)(u32)(v))
#define SET64(n, v) (c->r[n].d[0] = (u64)(v))
#define F(n) (c->f[n].f)

/* ---------------------------------------------------------------------------------- memory */
u32 rt_mmio_read(Ctx *c, u32 addr, int size);
void rt_mmio_write(Ctx *c, u32 addr, int size, u64 value);
void rt_mmio_read128(Ctx *c, u32 addr, GPR *out);
void rt_mmio_write128(Ctx *c, u32 addr, const GPR *v);

/* Host pointer for a guest address in RAM or scratchpad, or NULL for hardware registers. */
static inline u8 *rt_ptr(u32 a) {
    u32 seg = a >> 28;
    if (seg == 0 || seg == 2 || seg == 3 || seg == 8 || seg == 9 || seg == 0xA) {
        u32 p = a & 0x0FFFFFFF;
        if (p < 0x02000000) return rt_ram + p;
        return NULL;
    }
    if ((a & 0xFFFFC000) == 0x70000000) return rt_spr + (a & 0x3FFF);
    return NULL;
}

#define DEF_RW(bits, type)                                                                      \
    static inline type rd##bits(Ctx *c, u32 a) {                                                \
        u8 *p = rt_ptr(a);                                                                      \
        if (__builtin_expect(p != NULL, 1)) { type v; memcpy(&v, p, sizeof v); return v; }      \
        return (type)rt_mmio_read(c, a, bits / 8);                                              \
    }                                                                                           \
    static inline void wr##bits(Ctx *c, u32 a, type v) {                                        \
        u8 *p = rt_ptr(a);                                                                      \
        if (__builtin_expect(p != NULL, 1)) { memcpy(p, &v, sizeof v); return; }                \
        rt_mmio_write(c, a, bits / 8, v);                                                       \
    }
DEF_RW(8, u8)
DEF_RW(16, u16)
DEF_RW(32, u32)

static inline u64 rd64(Ctx *c, u32 a) {
    u8 *p = rt_ptr(a);
    if (p) { u64 v; memcpy(&v, p, 8); return v; }
    return rt_mmio_read(c, a, 4) | (u64)rt_mmio_read(c, a + 4, 4) << 32;
}
static inline void wr64(Ctx *c, u32 a, u64 v) {
    u8 *p = rt_ptr(a);
    if (p) { memcpy(p, &v, 8); return; }
    rt_mmio_write(c, a, 8, v);
}
static inline void rd128(Ctx *c, u32 a, GPR *out) {
    u8 *p = rt_ptr(a);
    if (p) { memcpy(out, p, 16); return; }
    rt_mmio_read128(c, a, out);
}
static inline void wr128(Ctx *c, u32 a, const GPR *v) {
    u8 *p = rt_ptr(a);
    if (p) { memcpy(p, v, 16); return; }
    rt_mmio_write128(c, a, v);
}

/* Unaligned loads/stores (little endian). */
static inline void lwl(Ctx *c, int rt, u32 a) {
    u32 sh = (a & 3) * 8, w = rd32(c, a & ~3u);
    u32 keep = sh == 24 ? 0 : (0x00FFFFFFu >> sh);
    SET32(rt, (RW(rt) & keep) | (w << (24 - sh)));
}
static inline void lwr(Ctx *c, int rt, u32 a) {
    u32 sh = (a & 3) * 8, w = rd32(c, a & ~3u);
    if (sh == 0) { SET32(rt, w); return; }
    u32 keep = 0xFFFFFF00u << (24 - sh);
    c->r[rt].w[0] = (RW(rt) & keep) | (w >> sh);    /* upper word unchanged unless sh == 0 */
}
static inline void ldl(Ctx *c, int rt, u32 a) {
    u32 sh = (a & 7) * 8;
    u64 w = rd64(c, a & ~7u);
    u64 keep = sh == 56 ? 0 : (0x00FFFFFFFFFFFFFFull >> sh);
    SET64(rt, (RD(rt) & keep) | (w << (56 - sh)));
}
static inline void ldr(Ctx *c, int rt, u32 a) {
    u32 sh = (a & 7) * 8;
    u64 w = rd64(c, a & ~7u);
    u64 keep = sh == 0 ? 0 : (0xFFFFFFFFFFFFFF00ull << (56 - sh));
    SET64(rt, (RD(rt) & keep) | (w >> sh));
}
static inline void swl(Ctx *c, int rt, u32 a) {
    u32 sh = (a & 3) * 8, w = rd32(c, a & ~3u);
    u32 keep = sh == 24 ? 0 : (0xFFFFFF00u << sh);
    wr32(c, a & ~3u, (w & keep) | (RW(rt) >> (24 - sh)));
}
static inline void swr(Ctx *c, int rt, u32 a) {
    u32 sh = (a & 3) * 8, w = rd32(c, a & ~3u);
    u32 keep = sh == 0 ? 0 : (0x00FFFFFFu >> (24 - sh));
    wr32(c, a & ~3u, (w & keep) | (RW(rt) << sh));
}
static inline void sdl(Ctx *c, int rt, u32 a) {
    u32 sh = (a & 7) * 8;
    u64 w = rd64(c, a & ~7u);
    u64 keep = sh == 56 ? 0 : (0xFFFFFFFFFFFFFF00ull << sh);
    wr64(c, a & ~7u, (w & keep) | (RD(rt) >> (56 - sh)));
}
static inline void sdr(Ctx *c, int rt, u32 a) {
    u32 sh = (a & 7) * 8;
    u64 w = rd64(c, a & ~7u);
    u64 keep = sh == 0 ? 0 : (0x00FFFFFFFFFFFFFFull >> (56 - sh));
    wr64(c, a & ~7u, (w & keep) | (RD(rt) << sh));
}

/* ---------------------------------------------------------------------------------- multiply / divide */
static inline void mul_s(Ctx *c, int pipe, int rd, s32 a, s32 b) {
    s64 p = (s64)a * b;
    c->lo.sd[pipe] = (s32)p;
    c->hi.sd[pipe] = (s32)(p >> 32);
    if (rd) c->r[rd].sd[0] = c->lo.sd[pipe];
}
static inline void mul_u(Ctx *c, int pipe, int rd, u32 a, u32 b) {
    u64 p = (u64)a * b;
    c->lo.sd[pipe] = (s32)(u32)p;
    c->hi.sd[pipe] = (s32)(u32)(p >> 32);
    if (rd) c->r[rd].sd[0] = c->lo.sd[pipe];
}
static inline void madd_s(Ctx *c, int pipe, int rd, s32 a, s32 b) {
    s64 acc = (s64)(((u64)(u32)c->hi.d[pipe] << 32) | (u32)c->lo.d[pipe]);
    s64 p = acc + (s64)a * b;
    c->lo.sd[pipe] = (s32)p;
    c->hi.sd[pipe] = (s32)(p >> 32);
    if (rd) c->r[rd].sd[0] = c->lo.sd[pipe];
}
static inline void div_s(Ctx *c, int pipe, s32 a, s32 b) {
    if (b == 0) { c->lo.sd[pipe] = a < 0 ? 1 : -1; c->hi.sd[pipe] = a; return; }
    if (a == INT32_MIN && b == -1) { c->lo.sd[pipe] = INT32_MIN; c->hi.sd[pipe] = 0; return; }
    c->lo.sd[pipe] = a / b;
    c->hi.sd[pipe] = a % b;
}
static inline void div_u(Ctx *c, int pipe, u32 a, u32 b) {
    if (b == 0) { c->lo.sd[pipe] = -1; c->hi.sd[pipe] = (s32)a; return; }
    c->lo.sd[pipe] = (s32)(a / b);
    c->hi.sd[pipe] = (s32)(a % b);
}

/* ---------------------------------------------------------------------------------- FPU (PS2 rules) */
/* The EE FPU has no infinities, NaNs or denormals: overflow saturates to +-max, denormals are zero. */
static inline f32 fpu(f32 x) {
    u32 u;
    memcpy(&u, &x, 4);
    u32 e = (u >> 23) & 0xFF;
    if (e == 0) u &= 0x80000000u;
    else if (e == 0xFF) u = (u & 0x80000000u) | 0x7F7FFFFFu;
    memcpy(&x, &u, 4);
    return x;
}
static inline f32 fpu_div(f32 a, f32 b) {
    if (b == 0.0f) {
        u32 ua, ub, r;
        memcpy(&ua, &a, 4);
        memcpy(&ub, &b, 4);
        r = ((ua ^ ub) & 0x80000000u) | 0x7F7FFFFFu;
        f32 x;
        memcpy(&x, &r, 4);
        return x;
    }
    return fpu(a / b);
}
static inline f32 fpu_sqrt(f32 a) { return sqrtf(fabsf(a)); }
static inline s32 fpu_cvtw(f32 a) {
    if (a >= 2147483648.0f) return INT32_MAX;
    if (a <= -2147483648.0f) return INT32_MIN;
    return (s32)a;      /* truncates toward zero, as the EE does */
}

/* ---------------------------------------------------------------------------------- MMI */
#define LANES(T, N, OP) for (int i = 0; i < N; i++) { OP; }
static inline void mmi_paddh(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; LANES(s16, 8, r.h[i] = a->h[i] + b->h[i]); *d = r; }
static inline void mmi_paddw(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; LANES(s32, 4, r.w[i] = a->w[i] + b->w[i]); *d = r; }
static inline void mmi_paddb(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; LANES(u8, 16, r.b[i] = a->b[i] + b->b[i]); *d = r; }
static inline void mmi_paddub(Ctx *c, GPR *d, GPR *a, GPR *b) {
    GPR r; LANES(u8, 16, { u32 s = a->b[i] + b->b[i]; r.b[i] = s > 255 ? 255 : s; }); *d = r;
}
static inline void mmi_padduw(Ctx *c, GPR *d, GPR *a, GPR *b) {
    GPR r; LANES(u32, 4, { u64 s = (u64)a->w[i] + b->w[i]; r.w[i] = s > 0xFFFFFFFFu ? 0xFFFFFFFFu : (u32)s; }); *d = r;
}
static inline void mmi_psubb(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; LANES(u8, 16, r.b[i] = a->b[i] - b->b[i]); *d = r; }
static inline void mmi_psubh(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; LANES(u16, 8, r.h[i] = a->h[i] - b->h[i]); *d = r; }
static inline void mmi_psubw(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; LANES(u32, 4, r.w[i] = a->w[i] - b->w[i]); *d = r; }
static inline void mmi_pand(Ctx *c, GPR *d, GPR *a, GPR *b) { d->d[0] = a->d[0] & b->d[0]; d->d[1] = a->d[1] & b->d[1]; }
static inline void mmi_por(Ctx *c, GPR *d, GPR *a, GPR *b) { d->d[0] = a->d[0] | b->d[0]; d->d[1] = a->d[1] | b->d[1]; }
static inline void mmi_pxor(Ctx *c, GPR *d, GPR *a, GPR *b) { d->d[0] = a->d[0] ^ b->d[0]; d->d[1] = a->d[1] ^ b->d[1]; }
static inline void mmi_pnor(Ctx *c, GPR *d, GPR *a, GPR *b) { d->d[0] = ~(a->d[0] | b->d[0]); d->d[1] = ~(a->d[1] | b->d[1]); }
static inline void mmi_pcpyld(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; r.d[0] = b->d[0]; r.d[1] = a->d[0]; *d = r; }
static inline void mmi_pcpyud(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; r.d[0] = a->d[1]; r.d[1] = b->d[1]; *d = r; }
static inline void mmi_pextlb(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; LANES(u8, 8, { r.b[2*i] = b->b[i]; r.b[2*i+1] = a->b[i]; }); *d = r; }
static inline void mmi_pextub(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; LANES(u8, 8, { r.b[2*i] = b->b[8+i]; r.b[2*i+1] = a->b[8+i]; }); *d = r; }
static inline void mmi_pextlh(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; LANES(u16, 4, { r.h[2*i] = b->h[i]; r.h[2*i+1] = a->h[i]; }); *d = r; }
static inline void mmi_pextuh(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; LANES(u16, 4, { r.h[2*i] = b->h[4+i]; r.h[2*i+1] = a->h[4+i]; }); *d = r; }
static inline void mmi_pextlw(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; r.w[0] = b->w[0]; r.w[1] = a->w[0]; r.w[2] = b->w[1]; r.w[3] = a->w[1]; *d = r; }
static inline void mmi_pextuw(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; r.w[0] = b->w[2]; r.w[1] = a->w[2]; r.w[2] = b->w[3]; r.w[3] = a->w[3]; *d = r; }
static inline void mmi_pcgth(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; LANES(s16, 8, r.h[i] = a->sh[i] > b->sh[i] ? 0xFFFF : 0); *d = r; }
static inline void mmi_pcgtw(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; LANES(s32, 4, r.w[i] = a->sw[i] > b->sw[i] ? 0xFFFFFFFFu : 0); *d = r; }
static inline void mmi_pceqh(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; LANES(u16, 8, r.h[i] = a->h[i] == b->h[i] ? 0xFFFF : 0); *d = r; }
static inline void mmi_pceqw(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; LANES(u32, 4, r.w[i] = a->w[i] == b->w[i] ? 0xFFFFFFFFu : 0); *d = r; }
static inline void mmi_pminh(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; LANES(s16, 8, r.sh[i] = a->sh[i] < b->sh[i] ? a->sh[i] : b->sh[i]); *d = r; }
static inline void mmi_pmaxh(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; LANES(s16, 8, r.sh[i] = a->sh[i] > b->sh[i] ? a->sh[i] : b->sh[i]); *d = r; }
static inline void mmi_pminw(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; LANES(s32, 4, r.sw[i] = a->sw[i] < b->sw[i] ? a->sw[i] : b->sw[i]); *d = r; }
static inline void mmi_pmaxw(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; LANES(s32, 4, r.sw[i] = a->sw[i] > b->sw[i] ? a->sw[i] : b->sw[i]); *d = r; }
static inline void mmi_ppacb(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; LANES(u8, 8, { r.b[i] = b->b[2*i]; r.b[8+i] = a->b[2*i]; }); *d = r; }
static inline void mmi_ppach(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; LANES(u16, 4, { r.h[i] = b->h[2*i]; r.h[4+i] = a->h[2*i]; }); *d = r; }
static inline void mmi_ppacw(Ctx *c, GPR *d, GPR *a, GPR *b) { GPR r; r.w[0] = b->w[0]; r.w[1] = b->w[2]; r.w[2] = a->w[0]; r.w[3] = a->w[2]; *d = r; }
static inline void mmi_qfsrv(Ctx *c, GPR *d, GPR *a, GPR *b) {
    /* funnel shift right of the 256-bit value a:b by SA bytes */
    u8 buf[32];
    memcpy(buf, b, 16);
    memcpy(buf + 16, a, 16);
    GPR r;
    memcpy(&r, buf + (c->sa & 15), 16);
    *d = r;
}
static inline void mmi_psrlh(GPR *d, GPR *a, int s) { GPR r; LANES(u16, 8, r.h[i] = a->h[i] >> (s & 15)); *d = r; }
static inline void mmi_psrah(GPR *d, GPR *a, int s) { GPR r; LANES(s16, 8, r.sh[i] = a->sh[i] >> (s & 15)); *d = r; }
static inline void mmi_psllh(GPR *d, GPR *a, int s) { GPR r; LANES(u16, 8, r.h[i] = a->h[i] << (s & 15)); *d = r; }
static inline void mmi_psrlw(GPR *d, GPR *a, int s) { GPR r; LANES(u32, 4, r.w[i] = a->w[i] >> s); *d = r; }
static inline void mmi_psraw(GPR *d, GPR *a, int s) { GPR r; LANES(s32, 4, r.sw[i] = a->sw[i] >> s); *d = r; }
static inline void mmi_psllw(GPR *d, GPR *a, int s) { GPR r; LANES(u32, 4, r.w[i] = a->w[i] << s); *d = r; }
static inline void mmi_pcpyh(GPR *d, GPR *a) {
    GPR r;
    for (int i = 0; i < 4; i++) { r.h[i] = a->h[0]; r.h[4 + i] = a->h[4]; }
    *d = r;
}

/* ---------------------------------------------------------------------------------- runtime services */
void vu0_exec(Ctx *c, u32 raw);
u32 vu0_cfc2(Ctx *c, int reg);
void vu0_ctc2(Ctx *c, int reg, u32 v);

extern volatile int rt_irq_pending;  /* set by the interrupt timer */
void rt_poll(Ctx *c);                 /* run pending interrupts; polled at backward branches */
#define POLL() do { if (__builtin_expect(rt_irq_pending, 0)) rt_poll(c); } while (0)

extern int rt_trace_on;               /* --trace: log every function the first time it runs */
void rt_enter(Ctx *c, u32 addr);
#define ENTER(a) do { if (__builtin_expect(rt_trace_on, 0)) rt_enter(c, a); } while (0)

void rt_call(Ctx *c, u32 addr);       /* call guest code at addr (jalr, unknown jal) */
void rt_jump(Ctx *c, u32 addr);       /* jr / branch to a computed or unknown address: call, caller returns */
void rt_syscall(Ctx *c, u32 pc);
void rt_break(Ctx *c, u32 pc);
u32 rt_mfc0(Ctx *c, int reg);
void rt_mtc0(Ctx *c, int reg, u32 v);
void rt_ei(Ctx *c);
void rt_di(Ctx *c);
void rt_unimpl(Ctx *c, u32 pc, u32 raw);
void rt_fell_off(Ctx *c, u32 addr);
