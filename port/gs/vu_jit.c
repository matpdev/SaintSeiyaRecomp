/*
 * VU1 microprograms translated to native code.
 *
 * A program is what runs from an entry address: the pairs reachable from it (following branches,
 * up to the pair after an E bit), identified by the entry and a hash of those pairs. The first time
 * one is seen it is written as C (one block per pair, calling the interpreter's inline upper() and
 * lower() with constants, so the compiler specialises them), compiled with gcc in the background
 * into a shared object kept in ~/.cache/sstheh/vu, and loaded; until then the interpreter runs it.
 * Compiled programs from earlier sessions are loaded as soon as their program is seen.
 *
 * A translated program returns 0 when it ends (E bit), or 1 when it jumps to a pair outside the
 * pairs it was translated with (an indirect jump): v->pc is where to go on.
 *
 * SSTHEH_VUJIT=0 turns it off. The generated code needs the sources (port/gs, port/runtime),
 * found next to the executable (build/..).
 */
#define _GNU_SOURCE
#include <dlfcn.h>
#include <limits.h>
#include <pthread.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

#include "r5900.h"
#include "runtime.h"
#include "vu.h"
#include "vu_internal.h"

#define NPAIRS (0x4000 / 8)
#define GEN_VERSION 3           /* of the C written: part of the keys */

typedef int (*ProgFn)(Vu *v);

typedef struct Prog {
    u64 key;
    u32 entry;
    volatile int state;         /* 0 compiling, 1 ready, 2 failed */
    ProgFn fn;
    char *source;               /* C to compile (freed when done) */
    struct Prog *next, *queue_next;
} Prog;

static Prog *buckets[4096];
static struct { u32 gen; Prog *p; } by_entry[NPAIRS];
static u32 code_gen = 1;
static u64 header_hash;         /* of the headers the programs are compiled with: part of the keys */
static int enabled = -1;
static char src_dir[PATH_MAX], cache_dir[PATH_MAX];

static pthread_mutex_t qlock = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t qcond = PTHREAD_COND_INITIALIZER;
static Prog *queue_head, *queue_tail;

void vu_jit_code_changed(void) { code_gen++; }

static u32 rd_word(const u8 *code, u32 pair, int hi) {
    u32 w;
    memcpy(&w, code + (pair % NPAIRS) * 8 + hi * 4, 4);
    return w;
}

/* Lower word kinds that change the flow. */
static int is_branch(u32 lo) { u32 op = lo >> 25; return op == 0x20 || op == 0x21 || (op >= 0x28 && op <= 0x2F && op != 0x2A && op != 0x2B); }
static int is_jump(u32 lo) { u32 op = lo >> 25; return op == 0x24 || op == 0x25; }
static u32 branch_target(u32 lo, u32 pair) { s32 imm11 = ((s32)(lo << 21)) >> 21; return (pair + 1 + imm11) % NPAIRS; }

/* The pairs reachable from `entry` (in[]), how many. */
static u32 reach(const u8 *code, u32 entry, u8 *in) {
    static u32 work[NPAIRS * 4];
    static u8 last[NPAIRS];     /* executed, but nothing after it (the pair after an E bit) */
    u32 nw = 0, count = 0;
    memset(in, 0, NPAIRS);
    memset(last, 0, NPAIRS);
    work[nw++] = entry;
    while (nw) {
        u32 p = work[--nw] % NPAIRS;
        if (in[p]) continue;
        in[p] = 1;
        count++;
        if (last[p]) continue;
        u32 lo = rd_word(code, p, 0), hi = rd_word(code, p, 1);
        int ibit = hi >> 31;
        u32 next = (p + 1) % NPAIRS;
        if (hi & 0x40000000u) {                          /* E: the next pair, then the end */
            if (!in[next]) { last[next] = 1; work[nw++] = next; }
            continue;
        }
        if (!ibit && is_branch(lo)) {
            work[nw++] = branch_target(lo, p);
            if ((lo >> 25) == 0x21) work[nw++] = (p + 2) % NPAIRS;   /* BAL: where it returns */
        } else if (!ibit && is_jump(lo) && (lo >> 25) == 0x25) {
            work[nw++] = (p + 2) % NPAIRS;               /* JALR: where it returns */
        }
        work[nw++] = next;
        if (nw > NPAIRS * 4 - 8) break;
    }
    return count;
}

static u64 prog_key(const u8 *code, u32 entry, const u8 *in) {
    u64 h = ((0xCBF29CE484222325ull ^ header_hash) * 0x100000001B3ull ^ GEN_VERSION) * 0x100000001B3ull ^ entry;
    for (u32 p = 0; p < NPAIRS; p++)
        if (in[p]) {
            u64 w;
            memcpy(&w, code + p * 8, 8);
            h = (h ^ p) * 0x100000001B3ull;
            h = (h ^ w) * 0x100000001B3ull;
        }
    return h;
}

/* ------------------------------------------------------------------------------- C */

typedef struct { char *buf; size_t len, cap; } Str;

static void put(Str *s, const char *fmt, ...) __attribute__((format(printf, 2, 3)));
static void put(Str *s, const char *fmt, ...) {
    va_list ap;
    for (;;) {
        va_start(ap, fmt);
        int n = vsnprintf(s->buf + s->len, s->cap - s->len, fmt, ap);
        va_end(ap);
        if (n >= 0 && s->len + (size_t)n < s->cap) { s->len += (size_t)n; return; }
        s->cap = s->cap ? s->cap * 2 : 1 << 16;
        s->buf = realloc(s->buf, s->cap);
    }
}

/* ------------------------------------------------------------------------------- C, registers in locals
 *
 * The VU's registers live in local variables (vf as __m128 in f1..f31, the accumulator in acc, vi in
 * i1..i15 as u32 holding 16 bits), which the compiler keeps in machine registers; they are read
 * from the Vu at the start and written back on the way out. Each pair is translated on its own,
 * with the interpreter's semantics: the upper result is computed from the registers before the
 * lower instruction runs and written after it. Rare lower instructions go through vu_lower() with
 * the registers written back before and read again after. Flags, Q, P and I stay in the Vu. */

/* Q, P, I, flags kept in the Vu (the program reads them through these) */
static const char *const MEM_STATE_MACROS =
    "#define IVAL v->i\n#define QVAL v->q\n#define PVAL v->p\n#define CLIPV v->clip\n"
    "#define SETFLAGS(d, u) set_flags(v, d, u)\n"
    "#define SEEN_MAC v->fl_mac[v->fl_pos]\n#define SEEN_STATUS v->fl_status[v->fl_pos]\n#define SEEN_CLIP v->fl_clip[v->fl_pos]\n"
    "#define FCSET(x) do { v->clip = (x); flags_set_all(v); } while (0)\n"
    "#define FSSET(x) do { v->status = (v->status & 0x3F) | (x); flags_set_all(v); } while (0)\n"
    "#define SETQ(x, l) set_q(v, x, l)\n#define SETP(x, l) set_p(v, x, l)\n"
    "#define WAITQ() do { if (v->q_wait) { v->q = v->q_next; v->q_wait = 0; } } while (0)\n"
    "#define WAITP() do { if (v->p_wait) { v->p = v->p_next; v->p_wait = 0; } } while (0)\n"
    "#define TICK() do { if (v->q_wait && --v->q_wait == 0) v->q = v->q_next; if (v->p_wait && --v->p_wait == 0) v->p = v->p_next; } while (0)\n"
    "#define FLAGS_ADVANCE() flags_advance(v)\n\n";

static const char *FR(int n, char *buf) {
    if (n == 0) return "VF0";
    sprintf(buf, "f%d", n);
    return buf;
}

static const char *VI_(int n, char *buf) {
    if ((n & 15) == 0) return "0u";
    sprintf(buf, "i%d", n & 15);
    return buf;
}

/* "dst = value" for the lanes in dest (x = bit 3) */
static void put_masked(Str *s, const char *dst, const char *val, int dest) {
    if (dest == 15) put(s, "    %s = %s;\n", dst, val);
    else if (dest) put(s, "    %s = _mm_blendv_ps(%s, %s, MASK(%d));\n", dst, dst, val, dest);
}

static void gen_upper(Str *s, const Dec *d, int flags, int *has_out, char *out_dst, int *out_dest) {
    char a[8], b[8];
    *has_out = 0;
    switch (d->kind) {
    case UK_ARITH: {
        char bexpr[96];
        switch (d->bsrc) {
        case 0: sprintf(bexpr, "%s", FR(d->ft, b)); break;
        case 1: sprintf(bexpr, "BC(%s, %d)", FR(d->ft, b), d->bc); break;
        case 2: sprintf(bexpr, "_mm_set1_ps(IVAL)"); break;
        default: sprintf(bexpr, "_mm_set1_ps(QVAL)"); break;
        }
        const char *fs = FR(d->fs, a);
        switch (d->op) {
        case 0: put(s, "    u = _mm_add_ps(%s, %s);\n", fs, bexpr); break;
        case 1: put(s, "    u = _mm_sub_ps(%s, %s);\n", fs, bexpr); break;
        case 2: put(s, "    u = _mm_add_ps(acc, _mm_mul_ps(%s, %s));\n", fs, bexpr); break;
        case 3: put(s, "    u = _mm_sub_ps(acc, _mm_mul_ps(%s, %s));\n", fs, bexpr); break;
        case 4: put(s, "    u = _mm_mul_ps(%s, %s);\n", fs, bexpr); break;
        case 5: put(s, "    u = _mm_max_ps(%s, %s);\n", fs, bexpr); break;
        default: put(s, "    u = _mm_min_ps(%s, %s);\n", fs, bexpr); break;
        }
        if (d->op < 5) {
            put(s, "    u = vclamp(u);\n");
            if (flags) put(s, "    SETFLAGS(%d, u);\n", d->dest);
        }
        if (d->to_acc) strcpy(out_dst, "acc");
        else if (d->fd) sprintf(out_dst, "f%d", d->fd);
        else return;
        *has_out = 1;
        *out_dest = d->dest;
        return;
    }
    case UK_OPMSUB: case UK_OPMULA: {
        const char *fs = FR(d->fs, a), *ft = FR(d->ft, b);
        put(s, "    u = _mm_mul_ps(_mm_shuffle_ps(%s, %s, _MM_SHUFFLE(3, 0, 2, 1)), _mm_shuffle_ps(%s, %s, _MM_SHUFFLE(3, 1, 0, 2)));\n",
            fs, fs, ft, ft);
        if (d->kind == UK_OPMSUB) put(s, "    u = _mm_sub_ps(acc, u);\n");
        put(s, "    u = _mm_and_ps(vclamp(u), MASK(14));\n");
        if (flags) put(s, "    SETFLAGS(14, u);\n");
        if (d->kind == UK_OPMULA) strcpy(out_dst, "acc");
        else if (d->fd) sprintf(out_dst, "f%d", d->fd);
        else return;
        *has_out = 1;
        *out_dest = 14;
        return;
    }
    case UK_ITOF: {
        static const char *const sc[4] = {"1.0f", "(1.0f / 16)", "(1.0f / 4096)", "(1.0f / 32768)"};
        put(s, "    u = _mm_mul_ps(_mm_cvtepi32_ps(_mm_castps_si128(%s)), _mm_set1_ps(%s));\n", FR(d->fs, a), sc[d->sc]);
        break;
    }
    case UK_FTOI: {
        static const char *const sc[4] = {"1.0f", "16.0f", "4096.0f", "32768.0f"};
        put(s, "    { float t_[4]; s32 r_[4]; _mm_storeu_ps(t_, _mm_mul_ps(%s, _mm_set1_ps(%s)));\n"
               "      for (int k = 0; k < 4; k++) r_[k] = fpu_cvtw(t_[k]); u = _mm_castsi128_ps(_mm_loadu_si128((const __m128i *)r_)); }\n",
            FR(d->fs, a), sc[d->sc]);
        break;
    }
    case UK_ABS:
        put(s, "    u = _mm_andnot_ps(_mm_set1_ps(-0.0f), %s);\n", FR(d->fs, a));
        break;
    case UK_CLIP: {
        const char *fs = FR(d->fs, a), *ft = FR(d->ft, b);
        put(s, "    { float a_[4], t_[4]; _mm_storeu_ps(a_, %s); _mm_storeu_ps(t_, %s); float lim = fabsf(t_[3]); u32 c_ = 0;\n"
               "      if (a_[0] > lim) c_ |= 1; if (a_[0] < -lim) c_ |= 2; if (a_[1] > lim) c_ |= 4; if (a_[1] < -lim) c_ |= 8;\n"
               "      if (a_[2] > lim) c_ |= 16; if (a_[2] < -lim) c_ |= 32; CLIPV = ((CLIPV << 6) | c_) & 0xFFFFFF; }\n", fs, ft);
        return;
    }
    default: return;
    }
    if (d->ft) {                                           /* ITOF, FTOI, ABS write ft */
        sprintf(out_dst, "f%d", d->ft);
        *has_out = 1;
        *out_dest = d->dest;
    }
}

/* Writes the lower instruction; returns 1 if it may branch (sets taken/target), 2 if it went
 * through vu_lower() (registers synced around it). */
static int gen_lower(Str *s, u32 w, u32 pc) {
    char a[8], b[8], c_[8];
    int op = w >> 25;
    int it = (w >> 16) & 31, is = (w >> 11) & 31, id = (w >> 6) & 31, dest = (w >> 21) & 15;
    s32 imm11 = ((s32)(w << 21)) >> 21;
    u32 imm15 = ((w >> 10) & 0x7800) | (w & 0x7FF), imm12 = ((w >> 10) & 0x800) | (w & 0x7FF);
#define SETVI(n, ...) do { if ((n) & 15) { put(s, "    i%d = (", (n) & 15); put(s, __VA_ARGS__); put(s, ") & 0xFFFF;\n"); } } while (0)
#define SEEN "SEEN_%s"
    switch (op) {
    case 0x00:                                                                   /* LQ */
        if (it) { char val[64]; sprintf(val, "_mm_load_ps(VUM(%s + %d))", VI_(is, a), imm11); char dst[8]; sprintf(dst, "f%d", it); put_masked(s, dst, val, dest); }
        return 0;
    case 0x01:                                                                   /* SQ */
        if (dest == 15) put(s, "    _mm_store_ps(VUM(%s + %d), %s);\n", VI_(it, a), imm11, FR(is, b));
        else if (dest) put(s, "    { float *m_ = VUM(%s + %d); _mm_store_ps(m_, _mm_blendv_ps(_mm_load_ps(m_), %s, MASK(%d))); }\n", VI_(it, a), imm11, FR(is, b), dest);
        return 0;
    case 0x04:                                                                   /* ILW */
        for (int k = 0; k < 4; k++) if (dest & (8 >> k)) { SETVI(it, "((u32 *)VUM(%s + %d))[%d]", VI_(is, a), imm11, k); break; }
        return 0;
    case 0x05:                                                                   /* ISW */
        for (int k = 0; k < 4; k++) if (dest & (8 >> k)) put(s, "    ((u32 *)VUM(%s + %d))[%d] = %s;\n", VI_(is, a), imm11, k, VI_(it, b));
        return 0;
    case 0x08: SETVI(it, "%s + %uu", VI_(is, a), imm15); return 0;              /* IADDIU */
    case 0x09: SETVI(it, "%s - %uu", VI_(is, a), imm15); return 0;              /* ISUBIU */
    case 0x10: put(s, "    i1 = (" SEEN " & 0xFFFFFF) == 0x%Xu;\n", "CLIP", w & 0xFFFFFF); return 0;          /* FCEQ */
    case 0x11: put(s, "    FCSET(0x%Xu);\n", w & 0xFFFFFF); return 0;               /* FCSET */
    case 0x12: put(s, "    i1 = (" SEEN " & 0x%Xu) != 0;\n", "CLIP", w & 0xFFFFFF); return 0;              /* FCAND */
    case 0x13: put(s, "    i1 = ((" SEEN " | 0x%Xu) & 0xFFFFFF) == 0xFFFFFF;\n", "CLIP", w & 0xFFFFFF); return 0;   /* FCOR */
    case 0x14: SETVI(it, "(" SEEN " & 0xFFF) == %uu", "STATUS", imm12); return 0;                        /* FSEQ */
    case 0x15: put(s, "    FSSET(0x%Xu);\n", imm12 & 0xFC0); return 0;   /* FSSET */
    case 0x16: SETVI(it, SEEN " & %uu", "STATUS", imm12); return 0;                                      /* FSAND */
    case 0x17: SETVI(it, SEEN " | %uu", "STATUS", imm12); return 0;                                      /* FSOR */
    case 0x18: SETVI(it, "(" SEEN " & 0xFFFF) == %s", "MAC", VI_(is, a)); return 0;                     /* FMEQ */
    case 0x1A: SETVI(it, SEEN " & %s", "MAC", VI_(is, a)); return 0;                                     /* FMAND */
    case 0x1B: SETVI(it, SEEN " | %s", "MAC", VI_(is, a)); return 0;                                     /* FMOR */
    case 0x1C: SETVI(it, SEEN " & 0xFFF", "CLIP"); return 0;                                             /* FCGET */
    case 0x20: put(s, "    taken = 1; target = %uu;\n", pc + 8 + imm11 * 8); return 1;                  /* B */
    case 0x21: SETVI(it, "%uu", (pc + 16) / 8); put(s, "    taken = 1; target = %uu;\n", pc + 8 + imm11 * 8); return 1;   /* BAL */
    case 0x24: put(s, "    taken = 1; target = %s * 8;\n", VI_(is, a)); return 1;                     /* JR */
    case 0x25: put(s, "    taken = 1; target = %s * 8;\n", VI_(is, a)); SETVI(it, "%uu", (pc + 16) / 8); return 1;   /* JALR */
    case 0x28: put(s, "    taken = %s == %s; target = %uu;\n", VI_(it, a), VI_(is, b), pc + 8 + imm11 * 8); return 1;
    case 0x29: put(s, "    taken = %s != %s; target = %uu;\n", VI_(it, a), VI_(is, b), pc + 8 + imm11 * 8); return 1;
    case 0x2C: put(s, "    taken = (s16)%s < 0; target = %uu;\n", VI_(is, a), pc + 8 + imm11 * 8); return 1;
    case 0x2D: put(s, "    taken = (s16)%s > 0; target = %uu;\n", VI_(is, a), pc + 8 + imm11 * 8); return 1;
    case 0x2E: put(s, "    taken = (s16)%s <= 0; target = %uu;\n", VI_(is, a), pc + 8 + imm11 * 8); return 1;
    case 0x2F: put(s, "    taken = (s16)%s >= 0; target = %uu;\n", VI_(is, a), pc + 8 + imm11 * 8); return 1;
    case 0x40: break;
    default: return 0;                                                           /* nothing (as the interpreter) */
    }
    int low = w & 0x3F;
    switch (low) {
    case 0x30: SETVI(id, "%s + %s", VI_(is, a), VI_(it, b)); return 0;         /* IADD */
    case 0x31: SETVI(id, "%s - %s", VI_(is, a), VI_(it, b)); return 0;         /* ISUB */
    case 0x32: SETVI(it, "%s + %d", VI_(is, a), ((s32)(w << 21)) >> 27); return 0;   /* IADDI */
    case 0x34: SETVI(id, "%s & %s", VI_(is, a), VI_(it, b)); return 0;         /* IAND */
    case 0x35: SETVI(id, "%s | %s", VI_(is, a), VI_(it, b)); return 0;         /* IOR */
    }
    if (low < 0x3C) return 0;
    int s2 = ((w >> 6) & 0x1F) << 2 | (w & 3);
    int fsf = (w >> 21) & 3, ftf = (w >> 23) & 3;
    char dst[8];
    sprintf(dst, "f%d", it);
    switch (s2) {
    case 0x30: if (it) put_masked(s, dst, FR(is, a), dest); return 0;            /* MOVE */
    case 0x31: if (it) { char val[96]; sprintf(val, "_mm_shuffle_ps(%s, %s, _MM_SHUFFLE(0, 3, 2, 1))", FR(is, a), FR(is, b)); put_masked(s, dst, val, dest); } return 0;   /* MR32 */
    case 0x34:                                                                   /* LQI */
        if (it) { char val[64]; sprintf(val, "_mm_load_ps(VUM(%s))", VI_(is, a)); put_masked(s, dst, val, dest); }
        SETVI(is, "%s + 1", VI_(is, a));
        return 0;
    case 0x35:                                                                   /* SQI */
        if (dest == 15) put(s, "    _mm_store_ps(VUM(%s), %s);\n", VI_(it, a), FR(is, b));
        else if (dest) put(s, "    { float *m_ = VUM(%s); _mm_store_ps(m_, _mm_blendv_ps(_mm_load_ps(m_), %s, MASK(%d))); }\n", VI_(it, a), FR(is, b), dest);
        SETVI(it, "%s + 1", VI_(it, a));
        return 0;
    case 0x36:                                                                   /* LQD */
        SETVI(is, "%s - 1", VI_(is, a));
        if (it) { char val[64]; sprintf(val, "_mm_load_ps(VUM(%s))", VI_(is, a)); put_masked(s, dst, val, dest); }
        return 0;
    case 0x37:                                                                   /* SQD */
        SETVI(it, "%s - 1", VI_(it, a));
        if (dest == 15) put(s, "    _mm_store_ps(VUM(%s), %s);\n", VI_(it, a), FR(is, b));
        else if (dest) put(s, "    { float *m_ = VUM(%s); _mm_store_ps(m_, _mm_blendv_ps(_mm_load_ps(m_), %s, MASK(%d))); }\n", VI_(it, a), FR(is, b), dest);
        return 0;
    case 0x38: put(s, "    SETQ(fpu_div(LANE(%s, %d), LANE(%s, %d)), 7);\n", FR(is, a), fsf, FR(it, b), ftf); return 0;   /* DIV */
    case 0x39: put(s, "    SETQ(sqrtf(fabsf(LANE(%s, %d))), 7);\n", FR(it, b), ftf); return 0;                      /* SQRT */
    case 0x3A: put(s, "    SETQ(fpu_div(LANE(%s, %d), sqrtf(fabsf(LANE(%s, %d)))), 13);\n", FR(is, a), fsf, FR(it, b), ftf); return 0;   /* RSQRT */
    case 0x3B: put(s, "    WAITQ();\n"); return 0;                    /* WAITQ */
    case 0x3C: SETVI(it, "(u32)_mm_extract_epi32(_mm_castps_si128(%s), %d)", FR(is, a), fsf); return 0;          /* MTIR */
    case 0x3D: if (it) { char val[96]; sprintf(val, "_mm_castsi128_ps(_mm_set1_epi32((s32)(s16)%s))", VI_(is, a)); put_masked(s, dst, val, dest); } return 0;   /* MFIR */
    case 0x3E:                                                                   /* ILWR */
        for (int k = 0; k < 4; k++) if (dest & (8 >> k)) { SETVI(it, "((u32 *)VUM(%s))[%d]", VI_(is, a), k); break; }
        return 0;
    case 0x3F:                                                                   /* ISWR */
        for (int k = 0; k < 4; k++) if (dest & (8 >> k)) put(s, "    ((u32 *)VUM(%s))[%d] = %s;\n", VI_(is, a), k, VI_(it, b));
        return 0;
    case 0x64: if (it) { char val[96]; sprintf(val, "_mm_set1_ps(PVAL)"); put_masked(s, dst, val, dest); } return 0;   /* MFP */
    case 0x68: SETVI(it, "vu1_top"); return 0;                                   /* XTOP */
    case 0x69: SETVI(it, "vu1_itop"); return 0;                                  /* XITOP */
    case 0x6C: put(s, "    gif_path1(vu1_mem, %s);\n", VI_(is, a)); return 0;   /* XGKICK */
    case 0x70: put(s, "    { float a_[4]; _mm_storeu_ps(a_, %s); SETP(a_[0] * a_[0] + a_[1] * a_[1] + a_[2] * a_[2], 11); }\n", FR(is, a)); return 0;
    case 0x71: put(s, "    { float a_[4]; _mm_storeu_ps(a_, %s); SETP(fpu_div(1.0f, a_[0] * a_[0] + a_[1] * a_[1] + a_[2] * a_[2]), 18); }\n", FR(is, a)); return 0;
    case 0x72: put(s, "    { float a_[4]; _mm_storeu_ps(a_, %s); SETP(sqrtf(a_[0] * a_[0] + a_[1] * a_[1] + a_[2] * a_[2]), 18); }\n", FR(is, a)); return 0;
    case 0x73: put(s, "    { float a_[4]; _mm_storeu_ps(a_, %s); SETP(fpu_div(1.0f, sqrtf(a_[0] * a_[0] + a_[1] * a_[1] + a_[2] * a_[2])), 24); }\n", FR(is, a)); return 0;
    case 0x76: put(s, "    { float a_[4]; _mm_storeu_ps(a_, %s); SETP(a_[0] + a_[1] + a_[2] + a_[3], 12); }\n", FR(is, a)); return 0;
    case 0x78: put(s, "    SETP(sqrtf(fabsf(LANE(%s, %d))), 12);\n", FR(is, a), fsf); return 0;
    case 0x79: put(s, "    SETP(fpu_div(1.0f, sqrtf(fabsf(LANE(%s, %d)))), 18);\n", FR(is, a), fsf); return 0;
    case 0x7A: put(s, "    SETP(fpu_div(1.0f, LANE(%s, %d)), 12);\n", FR(is, a), fsf); return 0;
    case 0x7B: put(s, "    WAITP();\n"); return 0;   /* WAITP */
    }
    (void)c_;
    return 2;                                                                    /* the rest: through vu_lower() */
#undef SETVI
#undef SEEN
}

static char *generate_v2(const u8 *code, u32 entry, const u8 *in) {
    Str s = {0};
    /* what the program uses */
    int flag_reads = 0, qp = 0, uses_f[32] = {0}, uses_i[16] = {0}, uses_acc = 0;
    for (u32 p = 0; p < NPAIRS; p++) {
        if (!in[p]) continue;
        u32 lo = rd_word(code, p, 0), hi = rd_word(code, p, 1);
        Dec d;
        vu_decode(&d, lo, hi);
        uses_f[d.fs] = uses_f[d.ft] = uses_f[d.fd] = 1;
        if (d.kind == UK_ARITH || d.kind == UK_OPMSUB || d.kind == UK_OPMULA) uses_acc = 1;
        if (hi >> 31) continue;
        u32 op = lo >> 25;
        int it = (lo >> 16) & 31, is = (lo >> 11) & 31, id = (lo >> 6) & 31;
        uses_f[it] = uses_f[is] = 1;
        uses_i[it & 15] = uses_i[is & 15] = uses_i[id & 15] = 1;
        uses_i[1] = 1;                                                          /* flag reads write vi1 */
        if (op >= 0x10 && op <= 0x1C) flag_reads = 1;
        if (op == 0x40 && (lo & 0x3F) >= 0x3C) {
            u32 s2 = ((lo >> 6) & 0x1F) << 2 | (lo & 3);
            if ((s2 >= 0x38 && s2 <= 0x3B) || (s2 >= 0x70 && s2 <= 0x7E)) qp = 1;
        }
    }
    uses_f[0] = 0;
    uses_i[0] = 0;
    put(&s, "/* VU1 program from %03X (registers in locals) */\n#include \"vu_internal.h\"\n\n", entry);
    put(&s, "#define VF0 _mm_setr_ps(0.0f, 0.0f, 0.0f, 1.0f)\n"
            "#define MASK(d) _mm_castsi128_ps(_mm_setr_epi32(-(((d) >> 3) & 1), -(((d) >> 2) & 1), -(((d) >> 1) & 1), -((d) & 1)))\n"
            "#define BC(x, k) _mm_shuffle_ps(x, x, _MM_SHUFFLE(k, k, k, k))\n"
            "#define LANE(x, k) _mm_cvtss_f32(BC(x, k))\n"
            "#define VUM(a) ((float *)(vu1_mem + ((((u32)(a)) & 0x3FF) << 4)))\n\n");
    put(&s, "%s", MEM_STATE_MACROS);
    put(&s, "int vu_prog(Vu *v) {\n    static void *L2[%d];\n    static int init;\n    if (!init) {\n", NPAIRS);
    put(&s, "        for (int k = 0; k < %d; k++) L2[k] = &&out;\n", NPAIRS);
    for (u32 p = 0; p < NPAIRS; p++)
        if (in[p]) put(&s, "        L2[%u] = &&p%u;\n", p, p);
    put(&s, "        init = 1;\n    }\n");
    put(&s, "    int ending = 0, pend = 0, taken = 0, ret = 1;\n    u32 ptarget = 0, target = 0, npc;\n    long guard = 0;\n    __m128 u = _mm_setzero_ps();\n");
    put(&s, "    (void)taken; (void)target; (void)guard; (void)u;\n");
    for (int k = 1; k < 32; k++) if (uses_f[k]) put(&s, "    __m128 f%d = _mm_load_ps(v->vf[%d].f);\n", k, k);
    if (uses_acc) put(&s, "    __m128 acc = _mm_load_ps(v->acc.f);\n");
    for (int k = 1; k < 16; k++) if (uses_i[k]) put(&s, "    u32 i%d = v->vi[%d];\n", k, k);
    /* writing back / reading again around vu_lower() and on the way out */
    Str sync_out = {0}, sync_in = {0};
    for (int k = 1; k < 32; k++) if (uses_f[k]) { put(&sync_out, "_mm_store_ps(v->vf[%d].f, f%d); ", k, k); put(&sync_in, "f%d = _mm_load_ps(v->vf[%d].f); ", k, k); }
    if (uses_acc) { put(&sync_out, "_mm_store_ps(v->acc.f, acc); "); put(&sync_in, "acc = _mm_load_ps(v->acc.f); "); }
    for (int k = 1; k < 16; k++) if (uses_i[k]) { put(&sync_out, "v->vi[%d] = (u16)i%d; ", k, k); put(&sync_in, "i%d = v->vi[%d]; ", k, k); }
    put(&s, "#define SYNC_OUT() do { %s} while (0)\n#define SYNC_IN() do { %s} while (0)\n", sync_out.buf ? sync_out.buf : "", sync_in.buf ? sync_in.buf : "");
    free(sync_out.buf);
    free(sync_in.buf);
    put(&s, "    goto *L2[(v->pc & 0x3FFF) >> 3];\nout:\n    SYNC_OUT();\n    return ret;\n");
    for (u32 p = 0; p < NPAIRS; p++) {
        if (!in[p]) continue;
        u32 lo = rd_word(code, p, 0), hi = rd_word(code, p, 1), next = ((p + 1) % NPAIRS) * 8;
        Dec d;
        vu_decode(&d, lo, hi);
        put(&s, "p%u: {\n", p);
        if (qp) put(&s, "    TICK();\n");
        int has_out = 0, out_dest = 0;
        char out_dst[8] = "";
        gen_upper(&s, &d, flag_reads, &has_out, out_dst, &out_dest);
        int br = 0;
        if (d.ibit) put(&s, "    { u32 x = 0x%08Xu; memcpy(&IVAL, &x, 4); }\n", lo);
        else if (!d.lnop) {
            int k = gen_lower(&s, lo, p * 8);
            if (k == 1) br = 1;
            else if (k == 2) {
                br = is_branch(lo) || is_jump(lo);
                put(&s, "    SYNC_OUT(); %slower(v, 0x%08Xu, %uu, &target); SYNC_IN();\n", br ? "taken = " : "", lo, p * 8);
            }
        }
        if (has_out) put_masked(&s, out_dst, "u", out_dest);
        if (flag_reads) put(&s, "    FLAGS_ADVANCE();\n");
        put(&s, "    npc = %uu;\n    if (pend) { pend = 0; npc = ptarget & 0x3FFF; }\n", next);
        if (br) put(&s, "    if (taken) { pend = 1; ptarget = target; }\n");
        put(&s, "    if (ending) { v->pc = npc; ret = 0; goto out; }\n");
        if (d.ebit) put(&s, "    ending = 1;\n");
        put(&s, "    v->pc = npc;\n");
        put(&s, "    if (npc != %uu) { if (++guard > (1 << 22)) { ret = 0; goto out; } goto *L2[npc >> 3]; }\n", next);
        u32 np = (p + 1) % NPAIRS;
        if (!in[np]) put(&s, "    goto out;\n");
        else if (np != p + 1) put(&s, "    goto p%u;\n", np);
        put(&s, "}\n");
    }
    put(&s, "}\n");
    return s.buf;
}

/* ---- v3: control flow known when writing the C. A branch's pair and the pair after it (its delay
 * slot) are written together, followed by direct gotos to the target or the next pair; an E bit's
 * pair is followed by the next pair and the way out. v->pc is only written on the way out. Q, P, I,
 * the flags and the four-pair flag delay (a shift register: m0 newest .. m3 seen by flag reads) are
 * locals too. Programs where a delay slot holds a branch or an E bit, or an E bit's next pair
 * branches, are written by generate_v2. */
static const char *const LOCAL_STATE_MACROS =
    "#define IVAL l_i\n#define QVAL l_q\n#define PVAL l_p\n#define CLIPV l_clip\n"
    "#define SETFLAGS(d, u) do { u32 z_ = vu_rev4[_mm_movemask_ps(_mm_cmpeq_ps(u, _mm_setzero_ps()))] & (d), "
    "s_ = vu_rev4[_mm_movemask_ps(u)] & (d); l_mac = s_ << 4 | z_; l_st = (l_st & 0xFC0) | (z_ ? 0x41 : 0) | (s_ ? 0x82 : 0); } while (0)\n"
    "#define SEEN_MAC m3\n#define SEEN_STATUS s3\n#define SEEN_CLIP c3\n"
    "#define FLAGS_ALL() do { m0 = m1 = m2 = m3 = l_mac; s0 = s1 = s2 = s3 = l_st; c0 = c1 = c2 = c3 = l_clip; } while (0)\n"
    "#define FCSET(x) do { l_clip = (x); FLAGS_ALL(); } while (0)\n"
    "#define FSSET(x) do { l_st = (l_st & 0x3F) | (x); FLAGS_ALL(); } while (0)\n"
    "#define SETQ(x, l) do { l_qn = clampf(x); l_qw = (l); } while (0)\n#define SETP(x, l) do { l_pn = (x); l_pw = (l); } while (0)\n"
    "#define WAITQ() do { if (l_qw) { l_q = l_qn; l_qw = 0; } } while (0)\n"
    "#define WAITP() do { if (l_pw) { l_p = l_pn; l_pw = 0; } } while (0)\n"
    "#define TICK() do { if (l_qw && --l_qw == 0) l_q = l_qn; if (l_pw && --l_pw == 0) l_p = l_pn; } while (0)\n"
    "#define FLAGS_ADVANCE() do { m3 = m2; m2 = m1; m1 = m0; m0 = l_mac; s3 = s2; s2 = s1; s1 = s0; s0 = l_st; "
    "c3 = c2; c2 = c1; c1 = c0; c0 = l_clip; } while (0)\n\n";

typedef struct { int flag_reads, qp; } Needs;

/* One pair's work (no label, no flow). Returns the kind of its lower instruction: 0 plain,
 * 1 branch or jump written inline, 2 through vu_lower() (may branch). */
static int emit_body(Str *s, const u8 *code, u32 p, Needs n) {
    u32 lo = rd_word(code, p, 0), hi = rd_word(code, p, 1);
    Dec d;
    vu_decode(&d, lo, hi);
    if (n.qp) put(s, "    TICK();\n");
    int has_out = 0, out_dest = 0, kind = 0;
    char out_dst[8] = "";
    gen_upper(s, &d, n.flag_reads, &has_out, out_dst, &out_dest);
    if (d.ibit) put(s, "    { u32 x = 0x%08Xu; memcpy(&IVAL, &x, 4); }\n", lo);
    else if (!d.lnop) {
        kind = gen_lower(s, lo, p * 8);
        if (kind == 2) {
            int br = is_branch(lo) || is_jump(lo);
            put(s, "    SYNC_OUT(); %slower(v, 0x%08Xu, %uu, &target); SYNC_IN();\n", br ? "taken = " : "", lo, p * 8);
            if (!br) kind = 0;
        }
    }
    if (has_out) put_masked(s, out_dst, "u", out_dest);
    if (n.flag_reads) put(s, "    FLAGS_ADVANCE();\n");
    return kind;
}

static void jump_to(Str *s, const u8 *in, u32 from, u32 to) {
    to %= NPAIRS;
    if (!in[to]) { put(s, "    v->pc = %uu; goto out;\n", to * 8); return; }
    if (to <= from) put(s, "    if (++guard > (1 << 22)) { v->pc = %uu; ret = 0; goto out; }\n", to * 8);
    put(s, "    goto p%u;\n", to);
}

static int pair_flags(const u8 *code, u32 p, int *branch, int *ebit) {
    u32 lo = rd_word(code, p, 0), hi = rd_word(code, p, 1);
    *ebit = (hi >> 30) & 1;
    *branch = !(hi >> 31) && (is_branch(lo) || is_jump(lo));
    return 0;
}

static char *generate(const u8 *code, u32 entry, const u8 *in) {
    /* fall back on the general writer for the unusual shapes */
    for (u32 p = 0; p < NPAIRS; p++) {
        if (!in[p]) continue;
        int br, e, br1, e1;
        pair_flags(code, p, &br, &e);
        if (!br && !e) continue;
        pair_flags(code, (p + 1) % NPAIRS, &br1, &e1);
        if (br1 || e1) return generate_v2(code, entry, in);
    }
    Str s = {0};
    Needs n = {0, 0};
    int uses_f[32] = {0}, uses_i[16] = {0}, uses_acc = 0;
    for (u32 p = 0; p < NPAIRS; p++) {
        if (!in[p]) continue;
        u32 lo = rd_word(code, p, 0), hi = rd_word(code, p, 1);
        Dec d;
        vu_decode(&d, lo, hi);
        uses_f[d.fs] = uses_f[d.ft] = uses_f[d.fd] = 1;
        if (d.kind == UK_ARITH || d.kind == UK_OPMSUB || d.kind == UK_OPMULA) uses_acc = 1;
        if (hi >> 31) continue;
        u32 op = lo >> 25;
        int it = (lo >> 16) & 31, is = (lo >> 11) & 31, id = (lo >> 6) & 31;
        uses_f[it] = uses_f[is] = 1;
        uses_i[it & 15] = uses_i[is & 15] = uses_i[id & 15] = 1;
        uses_i[1] = 1;
        if (op >= 0x10 && op <= 0x1C) n.flag_reads = 1;
        if (op == 0x40 && (lo & 0x3F) >= 0x3C) {
            u32 s2 = ((lo >> 6) & 0x1F) << 2 | (lo & 3);
            if ((s2 >= 0x38 && s2 <= 0x3B) || (s2 >= 0x70 && s2 <= 0x7E)) n.qp = 1;
        }
    }
    uses_f[0] = 0;
    uses_i[0] = 0;
    put(&s, "/* VU1 program from %03X (v3) */\n#include \"vu_internal.h\"\n\n", entry);
    put(&s, "#define VF0 _mm_setr_ps(0.0f, 0.0f, 0.0f, 1.0f)\n"
            "#define MASK(d) _mm_castsi128_ps(_mm_setr_epi32(-(((d) >> 3) & 1), -(((d) >> 2) & 1), -(((d) >> 1) & 1), -((d) & 1)))\n"
            "#define BC(x, k) _mm_shuffle_ps(x, x, _MM_SHUFFLE(k, k, k, k))\n"
            "#define LANE(x, k) _mm_cvtss_f32(BC(x, k))\n"
            "#define VUM(a) ((float *)(vu1_mem + ((((u32)(a)) & 0x3FF) << 4)))\n\n");
    put(&s, "%s", LOCAL_STATE_MACROS);
    put(&s, "int vu_prog(Vu *v) {\n    static void *L2[%d];\n    static int init;\n    if (!init) {\n", NPAIRS);
    put(&s, "        for (int k = 0; k < %d; k++) L2[k] = &&out;\n", NPAIRS);
    for (u32 p = 0; p < NPAIRS; p++)
        if (in[p]) put(&s, "        L2[%u] = &&p%u;\n", p, p);
    put(&s, "        init = 1;\n    }\n");
    put(&s, "    int taken = 0, ret = 1;\n    u32 target = 0;\n    long guard = 0;\n    __m128 u = _mm_setzero_ps();\n");
    put(&s, "    (void)taken; (void)target; (void)guard; (void)u;\n");
    for (int k = 1; k < 32; k++) if (uses_f[k]) put(&s, "    __m128 f%d = _mm_load_ps(v->vf[%d].f);\n", k, k);
    if (uses_acc) put(&s, "    __m128 acc = _mm_load_ps(v->acc.f);\n");
    for (int k = 1; k < 16; k++) if (uses_i[k]) put(&s, "    u32 i%d = v->vi[%d];\n", k, k);
    put(&s, "    float l_i = v->i, l_q = v->q, l_qn = v->q_next, l_p = v->p, l_pn = v->p_next;\n"
            "    int l_qw = v->q_wait, l_pw = v->p_wait;\n"
            "    u32 l_mac = v->mac, l_st = v->status, l_clip = v->clip, fp_ = v->fl_pos;\n"
            "    u32 m3 = v->fl_mac[fp_], m2 = v->fl_mac[(fp_ + 1) & 3], m1 = v->fl_mac[(fp_ + 2) & 3], m0 = v->fl_mac[(fp_ + 3) & 3];\n"
            "    u32 s3 = v->fl_status[fp_], s2 = v->fl_status[(fp_ + 1) & 3], s1 = v->fl_status[(fp_ + 2) & 3], s0 = v->fl_status[(fp_ + 3) & 3];\n"
            "    u32 c3 = v->fl_clip[fp_], c2 = v->fl_clip[(fp_ + 1) & 3], c1 = v->fl_clip[(fp_ + 2) & 3], c0 = v->fl_clip[(fp_ + 3) & 3];\n"
            "    (void)l_i; (void)l_q; (void)l_qn; (void)l_p; (void)l_pn; (void)l_qw; (void)l_pw;\n"
            "    (void)m3; (void)m2; (void)m1; (void)m0; (void)s3; (void)s2; (void)s1; (void)s0; (void)c3; (void)c2; (void)c1; (void)c0;\n");
    Str so = {0}, si = {0};
    for (int k = 1; k < 32; k++) if (uses_f[k]) { put(&so, "_mm_store_ps(v->vf[%d].f, f%d); ", k, k); put(&si, "f%d = _mm_load_ps(v->vf[%d].f); ", k, k); }
    if (uses_acc) { put(&so, "_mm_store_ps(v->acc.f, acc); "); put(&si, "acc = _mm_load_ps(v->acc.f); "); }
    for (int k = 1; k < 16; k++) if (uses_i[k]) { put(&so, "v->vi[%d] = (u16)i%d; ", k, k); put(&si, "i%d = v->vi[%d]; ", k, k); }
    put(&so, "v->i = l_i; v->q = l_q; v->q_next = l_qn; v->q_wait = l_qw; v->p = l_p; v->p_next = l_pn; v->p_wait = l_pw; "
             "v->mac = l_mac; v->status = l_st; v->clip = l_clip; v->fl_pos = 0; "
             "v->fl_mac[0] = m3; v->fl_mac[1] = m2; v->fl_mac[2] = m1; v->fl_mac[3] = m0; "
             "v->fl_status[0] = s3; v->fl_status[1] = s2; v->fl_status[2] = s1; v->fl_status[3] = s0; "
             "v->fl_clip[0] = c3; v->fl_clip[1] = c2; v->fl_clip[2] = c1; v->fl_clip[3] = c0; ");
    put(&si, "l_i = v->i; l_q = v->q; l_qn = v->q_next; l_qw = v->q_wait; l_p = v->p; l_pn = v->p_next; l_pw = v->p_wait; "
             "l_mac = v->mac; l_st = v->status; l_clip = v->clip; fp_ = v->fl_pos; "
             "m3 = v->fl_mac[fp_]; m2 = v->fl_mac[(fp_ + 1) & 3]; m1 = v->fl_mac[(fp_ + 2) & 3]; m0 = v->fl_mac[(fp_ + 3) & 3]; "
             "s3 = v->fl_status[fp_]; s2 = v->fl_status[(fp_ + 1) & 3]; s1 = v->fl_status[(fp_ + 2) & 3]; s0 = v->fl_status[(fp_ + 3) & 3]; "
             "c3 = v->fl_clip[fp_]; c2 = v->fl_clip[(fp_ + 1) & 3]; c1 = v->fl_clip[(fp_ + 2) & 3]; c0 = v->fl_clip[(fp_ + 3) & 3]; ");
    put(&s, "#define SYNC_OUT() do { %s} while (0)\n#define SYNC_IN() do { %s} while (0)\n", so.buf, si.buf);
    free(so.buf);
    free(si.buf);
    put(&s, "    goto *L2[(v->pc & 0x3FFF) >> 3];\nout:\n    SYNC_OUT();\n    return ret;\n");
    for (u32 p = 0; p < NPAIRS; p++) {
        if (!in[p]) continue;
        u32 lo = rd_word(code, p, 0), hi = rd_word(code, p, 1);
        u32 p1 = (p + 1) % NPAIRS, p2 = (p + 2) % NPAIRS;
        put(&s, "p%u: {\n", p);
        int kind = emit_body(&s, code, p, n);
        if ((hi >> 30) & 1) {                                   /* E: the next pair, then out */
            put(&s, "    /* E: pair %u */\n", p1);
            emit_body(&s, code, p1, n);
            put(&s, "    v->pc = %uu; ret = 0; goto out;\n}\n", p2 * 8);
            continue;
        }
        if (kind) {                                             /* a branch: its delay slot, then go */
            put(&s, "    /* delay slot: pair %u */\n", p1);
            emit_body(&s, code, p1, n);
            u32 op = lo >> 25;
            s32 imm11 = ((s32)(lo << 21)) >> 21;
            u32 t = (p + 1 + imm11) % NPAIRS;
            if (kind == 1 && (op == 0x20 || op == 0x21)) { jump_to(&s, in, p, t); put(&s, "}\n"); continue; }
            if (kind == 1 && op >= 0x28) {
                put(&s, "    if (taken) {\n");
                jump_to(&s, in, p, t);
                put(&s, "    }\n");
            } else {                                            /* JR / JALR / through vu_lower(): target known when run */
                put(&s, "    if (taken) { target &= 0x3FFF; if (++guard > (1 << 22)) { v->pc = target; ret = 0; goto out; } v->pc = target; goto *L2[target >> 3]; }\n");
            }
            jump_to(&s, in, p + 1, p2);
            put(&s, "}\n");
            continue;
        }
        if (!in[p1]) put(&s, "    v->pc = %uu; goto out;\n", p1 * 8);
        else if (p1 != p + 1) put(&s, "    goto p%u;\n", p1);
        put(&s, "}\n");
    }
    put(&s, "}\n");
    return s.buf;
}

/* ------------------------------------------------------------------------------- compiling */

static void load(Prog *p, const char *so) {
    void *h = dlopen(so, RTLD_NOW | RTLD_LOCAL);
    ProgFn fn = h ? (ProgFn)dlsym(h, "vu_prog") : NULL;
    if (!fn) {
        rt_log("vujit", "can't load %s: %s", so, dlerror());
        __atomic_store_n(&p->state, 2, __ATOMIC_RELEASE);
        return;
    }
    p->fn = fn;
    __atomic_store_n(&p->state, 1, __ATOMIC_RELEASE);
}

static void *compiler(void *arg) {
    (void)arg;
    for (;;) {
        pthread_mutex_lock(&qlock);
        while (!queue_head) pthread_cond_wait(&qcond, &qlock);
        Prog *p = queue_head;
        queue_head = p->queue_next;
        if (!queue_head) queue_tail = NULL;
        pthread_mutex_unlock(&qlock);

        char c_path[PATH_MAX + 32], so_path[PATH_MAX + 32], tmp_path[PATH_MAX + 48], cmd[4 * PATH_MAX + 256];
        snprintf(c_path, sizeof c_path, "%s/%016llx.c", cache_dir, (unsigned long long)p->key);
        snprintf(so_path, sizeof so_path, "%s/%016llx.so", cache_dir, (unsigned long long)p->key);
        snprintf(tmp_path, sizeof tmp_path, "%s/%016llx.%d.so", cache_dir, (unsigned long long)p->key, getpid());
        FILE *f = fopen(c_path, "w");
        if (f) { fputs(p->source, f); fclose(f); }
        free(p->source);
        p->source = NULL;
        snprintf(cmd, sizeof cmd,
                 "gcc -O2 -march=native -fno-strict-aliasing -w -shared -fPIC -I'%s/port/runtime' -I'%s/port/gs' -o '%s' '%s' -lm",
                 src_dir, src_dir, tmp_path, c_path);
        if (!f || system(cmd) != 0 || rename(tmp_path, so_path) != 0) {
            rt_log("vujit", "compiling %s failed", c_path);
            __atomic_store_n(&p->state, 2, __ATOMIC_RELEASE);
            continue;
        }
        load(p, so_path);
        rt_log("vujit", "program at %03X compiled (%016llx)", p->entry, (unsigned long long)p->key);
    }
    return NULL;
}

static int setup(void) {
    const char *e = getenv("SSTHEH_VUJIT");
    if (e && !atoi(e)) return 0;
    char exe[PATH_MAX];
    ssize_t n = readlink("/proc/self/exe", exe, sizeof exe - 1);
    if (n <= 0) return 0;
    exe[n] = 0;
    char *slash = strrchr(exe, '/');                    /* .../build/sstheh -> ... */
    if (!slash) return 0;
    *slash = 0;
    slash = strrchr(exe, '/');
    if (!slash) return 0;
    *slash = 0;
    snprintf(src_dir, sizeof src_dir, "%s", exe);
    char probe[PATH_MAX + 64];
    snprintf(probe, sizeof probe, "%s/port/gs/vu_internal.h", src_dir);
    if (access(probe, R_OK) != 0) { rt_log("vujit", "sources not found (%s): VU1 programs are interpreted", probe); return 0; }
    static const char *const headers[] = {"port/gs/vu_internal.h", "port/runtime/r5900.h", "port/runtime/runtime.h"};
    header_hash = 0xCBF29CE484222325ull;
    for (int k = 0; k < 3; k++) {
        char path[PATH_MAX + 64];
        snprintf(path, sizeof path, "%s/%s", src_dir, headers[k]);
        FILE *f = fopen(path, "rb");
        if (!f) continue;
        int ch;
        while ((ch = fgetc(f)) != EOF) header_hash = (header_hash ^ (u8)ch) * 0x100000001B3ull;
        fclose(f);
    }
    const char *home = getenv("XDG_CACHE_HOME");
    char base[PATH_MAX];
    if (home && *home) snprintf(base, sizeof base, "%s", home);
    else snprintf(base, sizeof base, "%s/.cache", getenv("HOME") ? getenv("HOME") : "/tmp");
    snprintf(cache_dir, sizeof cache_dir, "%s/sstheh", base);
    mkdir(base, 0755);
    mkdir(cache_dir, 0755);
    snprintf(cache_dir, sizeof cache_dir, "%s/sstheh/vu", base);
    mkdir(cache_dir, 0755);
    long cpus = sysconf(_SC_NPROCESSORS_ONLN);
    int threads = cpus > 4 ? (int)(cpus / 2) : 2;
    if (threads > 8) threads = 8;
    for (int k = 0; k < threads; k++) {
        pthread_t t;
        pthread_create(&t, NULL, compiler, NULL);
        pthread_detach(t);
    }
    return 1;
}

/* The native code for the program starting at v->pc, or NULL (interpret it). */
static ProgFn find(Vu *v) {
    u32 entry = (v->pc & 0x3FFF) / 8;
    if (by_entry[entry].gen == code_gen) {
        Prog *p = by_entry[entry].p;
        return p && __atomic_load_n(&p->state, __ATOMIC_ACQUIRE) == 1 ? p->fn : NULL;
    }
    static u8 in[NPAIRS];
    reach(v->code, entry, in);
    u64 key = prog_key(v->code, entry, in);
    Prog **b = &buckets[key % 4096], *p = *b;
    while (p && p->key != key) p = p->next;
    if (!p) {
        p = calloc(1, sizeof *p);
        p->key = key;
        p->entry = entry * 8;
        p->next = *b;
        *b = p;
        char so_path[PATH_MAX + 32];
        snprintf(so_path, sizeof so_path, "%s/%016llx.so", cache_dir, (unsigned long long)key);
        if (access(so_path, R_OK) == 0) load(p, so_path);
        else {
            p->source = generate(v->code, entry, in);
            pthread_mutex_lock(&qlock);
            if (queue_tail) queue_tail->queue_next = p;
            else queue_head = p;
            queue_tail = p;
            pthread_cond_signal(&qcond);
            pthread_mutex_unlock(&qlock);
        }
    }
    by_entry[entry].gen = code_gen;
    by_entry[entry].p = p;
    return __atomic_load_n(&p->state, __ATOMIC_ACQUIRE) == 1 ? p->fn : NULL;
}

/* Run the VU1 program at v->pc natively as far as possible. 1: it ended; 0: the interpreter goes
 * on from v->pc. */
int vu_jit_run(Vu *v) {
    if (enabled < 0) enabled = setup();
    if (!enabled || v->id != 1) return 0;
    static int dbg = -1;
    if (dbg < 0) dbg = getenv("SSTHEH_VUJIT_MISS") != NULL;
    for (long hops = 0; hops < (1L << 22); hops++) {     /* subroutine calls by register hop between programs */
        u32 at = v->pc & 0x3FFF;
        ProgFn fn = find(v);
        if (!fn) {
            if (dbg) {
                Prog *p = by_entry[at / 8].p;
                static u32 told[0x800];
                if (told[at / 8]++ < 3) rt_log("vujit", "no native code at %03X (hop %ld, state %d)", at, hops, p ? p->state : -1);
            }
            return 0;
        }
        if (fn(v) == 0) return 1;
        if (dbg) {
            static u32 told2[0x800];
            if (told2[(v->pc & 0x3FFF) / 8]++ < 3) rt_log("vujit", "program at %03X left at %03X", at, v->pc & 0x3FFF);
        }
    }
    return 0;
}
