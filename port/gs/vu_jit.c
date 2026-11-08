/*
 * VU1 microprograms translated to native code.
 *
 * A program is what runs from an entry address: the pairs reachable from it (following branches,
 * up to the pair after an E bit), identified by the entry and a hash of those pairs. The first time
 * one is seen it is written as C (one block per pair, calling the interpreter's inline upper() and
 * lower() with constants, so the compiler specialises them), compiled with gcc in the background
 * into a shared object kept in ~/.cache/sstheh/vu/<version>, and loaded; until then the interpreter
 * runs it. What other versions (of the generator, the headers, the compiler flags) left there is
 * removed at start.
 * Compiled programs from earlier sessions are loaded as soon as their program is seen. The game's
 * programs are also found in its executable and compiled ahead of time (vu_jit_ahead, at the end).
 *
 * A translated program returns 0 when it ends (E bit), or 1 when it jumps to a pair outside the
 * pairs it was translated with (an indirect jump): v->pc is where to go on; 2 when it can't start
 * there (a Q or P result on its way: the interpreter goes on).
 *
 * The build links the game's programs into the executable (vu_jit_generate, run by the build: the
 * table vu_builtin[], keyed as here with the header hash the build had): those need no compiler
 * and no sources. The others (none, normally) are compiled as above when the sources are found
 * next to the executable (build/..); without them they are interpreted.
 *
 * SSTHEH_VUJIT=0 turns it off.
 */
#define _GNU_SOURCE
#include <dirent.h>
#ifndef _WIN32
#include <dlfcn.h>
#endif
#include <errno.h>
#include <limits.h>
#include <pthread.h>
#include <signal.h>
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
#include "perf.h"

#define NPAIRS (0x4000 / 8)
#define GEN_VERSION 12          /* of the C written: part of the keys */
#define CC_FLAGS "-O2 -march=native -fno-strict-aliasing -ffp-contract=off -w -shared -fPIC"   /* also */

typedef int (*ProgFn)(Vu *v);

/* The programs built into the executable (generated/vu/vu_builtin.c, sorted by key), weak: the first
 * stage of the build, which writes them, has none. */
typedef struct { u64 key; ProgFn fn; } VuBuiltin;
extern const VuBuiltin vu_builtin[] __attribute__((weak));
extern const int vu_builtin_count __attribute__((weak));
extern const u64 vu_builtin_header_hash __attribute__((weak));
static int can_compile;         /* the sources (and so gcc) for programs not built in */

static ProgFn builtin(u64 key) {
    if (!&vu_builtin_count || !vu_builtin_count) return NULL;
    int lo = 0, hi = vu_builtin_count - 1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (vu_builtin[mid].key == key) return vu_builtin[mid].fn;
        if (vu_builtin[mid].key < key) lo = mid + 1;
        else hi = mid - 1;
    }
    return NULL;
}

typedef struct Prog {
    u64 key;
    u32 entry;
    volatile int state;         /* 0 compiling, 1 ready, 2 failed */
    ProgFn fn;
    char *source;               /* C to compile (freed when done) */
    u8 *image, *in;             /* or the code and pairs to write it from (ahead of time) */
    struct Prog *next, *queue_next;
} Prog;

static Prog *buckets[4096];
static struct { u32 gen; Prog *p; } by_entry[NPAIRS];
static u32 code_gen = 1;
/* The programs found before, by what the whole code memory held and the entry: the game swaps the
 * same overlays in and out many times a frame, and finding a program (reach + prog_key) costs a
 * walk of the code memory. */
static struct { u64 key; Prog *p; } seen[16384];
static u32 code_hash_gen;
static u64 code_hash;
static u64 header_hash;         /* of the headers and flags the programs are compiled with: part of the keys */
static int enabled = -1;
static char cache_dir[PATH_MAX];
#ifndef _WIN32
static char src_dir[PATH_MAX];     /* the sources next to the executable (build/..): what programs are compiled with */
#endif

static pthread_mutex_t qlock = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t qcond = PTHREAD_COND_INITIALIZER;
static Prog *queue_head, *queue_tail;
static Prog *ahead_head, *ahead_tail;   /* compiled ahead of time: after the ones the game waits for */
static int ahead_left;

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

/* Where the JR / JALR among the pairs in in[] can go, as far as the code says: the constants put
 * in their registers by IADDIU from vi0 anywhere in in[] (how subroutines are called). Writes the
 * targets in t[] (as flags), returns how many are not in in[] yet. */
static u32 jump_targets(const u8 *code, const u8 *in, u8 *t) {
    u32 regs = 0, added = 0;
    for (u32 p = 0; p < NPAIRS; p++) {
        if (!in[p]) continue;
        u32 lo = rd_word(code, p, 0), hi = rd_word(code, p, 1);
        if (!(hi >> 31) && is_jump(lo)) regs |= 1u << ((lo >> 11) & 15);
    }
    memset(t, 0, NPAIRS);
    if (!regs) return 0;
    for (u32 p = 0; p < NPAIRS; p++) {
        if (!in[p]) continue;
        u32 lo = rd_word(code, p, 0), hi = rd_word(code, p, 1);
        if ((hi >> 31) || (lo >> 25) != 0x08 || ((lo >> 11) & 31) != 0 || !(regs >> ((lo >> 16) & 15) & 1)) continue;
        u32 c = (((lo >> 10) & 0x7800) | (lo & 0x7FF)) % NPAIRS;
        if (!t[c] && !in[c]) added++;
        t[c] = 1;
    }
    return added;
}

/* The pairs reachable from `entry` (in[]), how many: following branches, and the jumps to
 * constant addresses. */
static u32 reach(const u8 *code, u32 entry, u8 *in) {
    static u32 work[NPAIRS * 4];
    static u8 last[NPAIRS];     /* executed, but nothing after it (the pair after an E bit) */
    static u8 t[NPAIRS];
    u32 nw = 0, count = 0;
    memset(in, 0, NPAIRS);
    memset(last, 0, NPAIRS);
    work[nw++] = entry;
    for (;;) {
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
        if (!jump_targets(code, in, t)) break;
        for (u32 p = 0; p < NPAIRS && nw < NPAIRS * 4 - 8; p++)
            if (t[p] && !in[p]) work[nw++] = p;
    }
    return count;
}

/* Of the whole code memory (16 KB): four independent lanes, so it takes well under a microsecond. */
static u64 memory_hash(const u8 *code) {
    u64 h[4] = {0x9E3779B97F4A7C15ull, 0xC2B2AE3D27D4EB4Full, 0x165667B19E3779F9ull, 0x27D4EB2F165667C5ull};
    for (u32 i = 0; i < NPAIRS; i += 4)
        for (int k = 0; k < 4; k++) {
            u64 w;
            memcpy(&w, code + (i + k) * 8, 8);
            h[k] = (h[k] ^ w) * 0xFF51AFD7ED558CCDull;
            h[k] ^= h[k] >> 32;
        }
    u64 r = header_hash;
    for (int k = 0; k < 4; k++) { r = (r ^ h[k]) * 0xC4CEB9FE1A85EC53ull; r ^= r >> 29; }
    return r;
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
        /* as fpu_cvtw() on each lane: truncated, too big -> INT32_MAX, too small or NaN -> INT32_MIN */
        put(s, "    { __m128 t_ = _mm_mul_ps(%s, _mm_set1_ps(%s));\n"
               "      u = _mm_blendv_ps(_mm_castsi128_ps(_mm_cvttps_epi32(t_)), _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF)),\n"
               "                        _mm_cmpge_ps(t_, _mm_set1_ps(2147483648.0f))); }\n",
            FR(d->fs, a), sc[d->sc]);
        break;
    }
    case UK_ABS:
        put(s, "    u = _mm_andnot_ps(_mm_set1_ps(-0.0f), %s);\n", FR(d->fs, a));
        break;
    case UK_CLIP: {
        const char *fs = FR(d->fs, a), *ft = FR(d->ft, b);
        /* x > |w|: bit 0, x < -|w|: bit 1, then y, z (movemask bits spread to every other bit) */
        put(s, "    { static const u8 sp_[8] = {0, 1, 4, 5, 16, 17, 20, 21};\n"
               "      __m128 a_ = %s, l_ = _mm_andnot_ps(_mm_set1_ps(-0.0f), BC(%s, 3));\n"
               "      u32 c_ = sp_[_mm_movemask_ps(_mm_cmpgt_ps(a_, l_)) & 7] | sp_[_mm_movemask_ps(_mm_cmplt_ps(a_, _mm_xor_ps(l_, _mm_set1_ps(-0.0f)))) & 7] << 1;\n"
               "      CLIPV = ((CLIPV << 6) | c_) & 0xFFFFFF; }\n", fs, ft);
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

/* A program as C, the general way: every pair a labelled block, a branch setting where to go on
   (v->pc kept up to date), so any shape works (a delay slot holding a branch or an E bit, an E bit
   whose next pair branches). program_c uses it for those shapes only. */
static char *program_c_general(const u8 *code, u32 entry, const u8 *in) {
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

/* ---- program_c: control flow known when writing the C. A branch's pair and the pair after it (its delay
 * slot) are written together, followed by direct gotos to the target or the next pair; an E bit's
 * pair is followed by the next pair and the way out. v->pc is only written on the way out. Q, P, I,
 * the flags and the four-pair flag delay (a shift register: m0 newest .. m3 seen by flag reads) are
 * locals too. Programs where a delay slot holds a branch or an E bit, or an E bit's next pair
 * branches, are written by program_c_general. */
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
    "#define TICKQ() do { if (l_qw && --l_qw == 0) l_q = l_qn; } while (0)\n"
    "#define TICKP() do { if (l_pw && --l_pw == 0) l_p = l_pn; } while (0)\n"
    "#define FLAGS_ADVANCE_MS() do { m3 = m2; m2 = m1; m1 = m0; m0 = l_mac; s3 = s2; s2 = s1; s1 = s0; s0 = l_st; } while (0)\n"
    "#define FLAGS_ADVANCE_C() do { c3 = c2; c2 = c1; c1 = c0; c0 = l_clip; } while (0)\n\n";

/* mac_reads: the program reads the MAC or status flags (otherwise they are not computed); clip_reads:
 * the clip flags; qp: Q or P. */
typedef struct { int mac_reads, clip_reads, qp; const u8 *mac_live, *tick; } Needs;

/* One pair's work (no label, no flow). Returns the kind of its lower instruction: 0 plain,
 * 1 branch or jump written inline, 2 through vu_lower() (may branch). */
static int emit_body(Str *s, const u8 *code, u32 p, Needs n) {
    u32 lo = rd_word(code, p, 0), hi = rd_word(code, p, 1);
    Dec d;
    vu_decode(&d, lo, hi);
    if (n.qp && (n.tick[p] & 1)) put(s, "    TICKQ();\n");
    if (n.qp && (n.tick[p] & 2)) put(s, "    TICKP();\n");
    int has_out = 0, out_dest = 0, kind = 0;
    char out_dst[8] = "";
    gen_upper(s, &d, n.mac_reads && n.mac_live[p], &has_out, out_dst, &out_dest);
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
    if (n.mac_reads) put(s, "    FLAGS_ADVANCE_MS();\n");
    if (n.clip_reads) put(s, "    FLAGS_ADVANCE_C();\n");
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

/* How the pairs in in[] follow each other (with branch delay pairs), for the analyses below. A pair
 * with out set may be followed by code outside (another program, or vu_lower()). */
enum { MAXS = 16 };
typedef struct {
    u32 succ[NPAIRS][MAXS];
    u8 nsucc[NPAIRS], out[NPAIRS];
    int open;                   /* a JR / JALR may go to more labels than recorded */
} Flow;

static void flow_build(const u8 *code, const u8 *in, Flow *f) {
    u8 lab[NPAIRS];
    memset(f->nsucc, 0, sizeof f->nsucc);
    memset(f->out, 0, sizeof f->out);
    f->open = 0;
    jump_targets(code, in, lab);
    Str scratch = {0};
#define SUCC(p, q) do { u32 q_ = (q) % NPAIRS; if (!in[q_]) f->out[p] = 1; else if (f->nsucc[p] < MAXS) f->succ[p][f->nsucc[p]++] = q_; else { f->out[p] = 1; f->open = 1; } } while (0)
    for (u32 p = 0; p < NPAIRS; p++) {
        if (!in[p]) continue;
        u32 lo = rd_word(code, p, 0), hi = rd_word(code, p, 1);
        if (!(hi >> 31) && lo != 0x8000033Cu) {
            scratch.len = 0;
            if (gen_lower(&scratch, lo, p * 8) == 2) f->out[p] = 1;   /* through vu_lower() */
        }
        SUCC(p, p + 1);                                    /* after an E pair: its delay pair, then the end */
        if ((hi >> 30) & 1 || (hi >> 31) || !(is_branch(lo) || is_jump(lo))) continue;
        u32 dly = (p + 1) % NPAIRS;                        /* the delay pair goes on at the target(s) */
        if (is_jump(lo)) {
            f->out[dly] = 1;
            for (u32 t = 0; t < NPAIRS; t++) if (lab[t] && in[t]) SUCC(dly, t);
        } else SUCC(dly, branch_target(lo, p));
    }
#undef SUCC
    free(scratch.buf);
}

/* Which pairs must compute the MAC and status flags (live[]): those whose flags can be seen. A
 * flag read sees the flags of 4 pairs before it; a program that goes on in another one (leaving
 * through `out` other than at its end, or through vu_lower()) hands over the flags of its last 4
 * pairs. Flags that only reach the end of the program are not kept, as when the program reads no
 * flags at all. FCSET and FSSET put the pair's flags in all 4 places. The sticky status bits need
 * every result: a program reading them computes them everywhere. */
static void mac_liveness(const u8 *code, const u8 *in, const Flow *f, u8 *live) {
    u8 sets[NPAIRS], obs[NPAIRS], fill[NPAIRS];
    memset(sets, 0, sizeof sets);
    memset(obs, 0, sizeof obs);
    memset(fill, 0, sizeof fill);
    memset(live, 0, NPAIRS);
    Str scratch = {0};
    for (u32 p = 0; p < NPAIRS; p++) {
        if (!in[p]) continue;
        u32 lo = rd_word(code, p, 0), hi = rd_word(code, p, 1), op = lo >> 25;
        Dec d;
        vu_decode(&d, lo, hi);
        int has_out = 0, out_dest = 0;
        char out_dst[8];
        scratch.len = 0;
        gen_upper(&scratch, &d, 1, &has_out, out_dst, &out_dest);
        sets[p] = scratch.len && strstr(scratch.buf, "SETFLAGS") != NULL;
        if ((hi >> 31) || lo == 0x8000033Cu) continue;
        u32 imm12 = ((lo >> 10) & 0x800) | (lo & 0x7FF);
        if (op == 0x14 || ((op == 0x16 || op == 0x17) && (imm12 & 0xFC0))) {   /* sticky bits */
            memset(live, 1, NPAIRS);
            free(scratch.buf);
            return;
        }
        if (op >= 0x16 && op <= 0x1B) obs[p] = 1;          /* reads them 4 pairs later */
        if (op == 0x11 || op == 0x15) fill[p] = 1;         /* FCSET, FSSET: this pair's flags in all 4 */
        if (f->out[p]) obs[p] = 1;                         /* vu_lower() reads them too */
    }
    free(scratch.buf);
    /* seen[p]: the flags after p can be seen: a read 1 to 4 pairs on, or a way out 0 to 3 pairs on */
    u8 seen[NPAIRS], rd[NPAIRS], ex[NPAIRS], nrd[NPAIRS], nex[NPAIRS];
    memcpy(seen, fill, sizeof seen);
    memcpy(rd, obs, sizeof rd);
    memcpy(ex, f->out, sizeof ex);
    for (int k = 0; k <= 4; k++) {                          /* rd: a read k pairs on; ex: a way out */
        for (u32 p = 0; p < NPAIRS; p++) if (in[p] && ((k >= 1 && rd[p]) || (k <= 3 && ex[p]))) seen[p] = 1;
        for (u32 p = 0; p < NPAIRS; p++) {
            nrd[p] = nex[p] = 0;
            for (u32 j = 0; j < f->nsucc[p]; j++) { nrd[p] |= rd[f->succ[p][j]]; nex[p] |= ex[f->succ[p][j]]; }
        }
        memcpy(rd, nrd, sizeof rd);
        memcpy(ex, nex, sizeof ex);
    }
    /* live[p]: the flags after p are seen, here or after pairs that don't set them */
    memcpy(live, seen, NPAIRS);
    for (int changed = 1; changed;) {
        changed = 0;
        for (u32 p = 0; p < NPAIRS; p++) {
            if (!in[p] || live[p]) continue;
            for (u32 k = 0; k < f->nsucc[p]; k++) {
                u32 q = f->succ[p][k];
                if (live[q] && !sets[q]) { live[p] = 1; changed = 1; break; }
            }
        }
    }
}

/* Where a Q or P result can still be on its way when the pair starts (tick[p]: bit 0 Q, bit 1 P),
 * so that the pair has to count it down. A program starts with none on the way (it checks). */
static void qp_pending(const u8 *code, const u8 *in, const Flow *f, u8 *tick) {
    u8 qin[NPAIRS], pin[NPAIRS];                           /* the most pairs left on entry */
    memset(qin, 0, sizeof qin);
    memset(pin, 0, sizeof pin);
    memset(tick, 0, NPAIRS);
    if (f->open) { memset(tick, 3, NPAIRS); return; }
    for (int changed = 1; changed;) {
        changed = 0;
        for (u32 p = 0; p < NPAIRS; p++) {
            if (!in[p]) continue;
            u32 lo = rd_word(code, p, 0), hi = rd_word(code, p, 1);
            int q = qin[p] ? qin[p] - 1 : 0, pp = pin[p] ? pin[p] - 1 : 0;
            if (!(hi >> 31) && (lo >> 25) == 0x40 && (lo & 0x3F) >= 0x3C) {
                u32 s2 = ((lo >> 6) & 0x1F) << 2 | (lo & 3);
                /* the latencies gen_lower() gives them; 64 for those left to vu_lower() */
                static const u8 lat[0x10] = {11, 18, 18, 24, 64, 64, 12, 64, 12, 18, 12, 0, 64, 64, 64, 64};
                if (s2 == 0x38 || s2 == 0x39) q = 7;           /* DIV, SQRT */
                else if (s2 == 0x3A) q = 13;                   /* RSQRT */
                else if (s2 == 0x3B) q = 0;                    /* WAITQ */
                else if (s2 >= 0x70 && s2 <= 0x7F) pp = lat[s2 - 0x70];   /* EFU, WAITP */
            }
            for (u32 k = 0; k < f->nsucc[p]; k++) {
                u32 t = f->succ[p][k];
                if (q > qin[t]) { qin[t] = (u8)q; changed = 1; }
                if (pp > pin[t]) { pin[t] = (u8)pp; changed = 1; }
            }
        }
    }
    for (u32 p = 0; p < NPAIRS; p++) tick[p] = (qin[p] ? 1 : 0) | (pin[p] ? 2 : 0);
}

/* The C of the program starting at pair `entry` made of the pairs in[] (see above), compiled into
   a function returning 0 at its end, 1 on an indirect jump out of it, 2 when it can't start. */
static char *program_c(const u8 *code, u32 entry, const u8 *in) {
    /* fall back on the general writer for the unusual shapes */
    for (u32 p = 0; p < NPAIRS; p++) {
        if (!in[p]) continue;
        int br, e, br1, e1;
        pair_flags(code, p, &br, &e);
        if (!br && !e) continue;
        pair_flags(code, (p + 1) % NPAIRS, &br1, &e1);
        if (br1 || e1) return program_c_general(code, entry, in);
    }
    Str s = {0};
    Needs n = {0, 0, 0, NULL, NULL};
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
        if (op >= 0x14 && op <= 0x1B) n.mac_reads = 1;
        if ((op >= 0x10 && op <= 0x13) || op == 0x1C) n.clip_reads = 1;
        if (op == 0x40 && (lo & 0x3F) >= 0x3C) {
            u32 s2 = ((lo >> 6) & 0x1F) << 2 | (lo & 3);
            if ((s2 >= 0x38 && s2 <= 0x3B) || (s2 >= 0x70 && s2 <= 0x7E)) n.qp = 1;
        }
    }
    Flow *flow = malloc(sizeof *flow);
    u8 *mac_live = malloc(NPAIRS), *tick = malloc(NPAIRS);
    flow_build(code, in, flow);
    if (n.mac_reads) mac_liveness(code, in, flow, mac_live);
    if (n.qp) qp_pending(code, in, flow, tick);
    free(flow);
    n.mac_live = mac_live;
    n.tick = tick;
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
    /* Only the pairs entered through L2 have their address taken: the entry, where BAL / JALR
     * return and the constant JR / JALR targets. Any other JR target leaves through `out` and the
     * caller goes on from v->pc. With fewer ways in, gcc keeps values in registers across pairs
     * and drops flags and Q/P updates nobody reads. */
    u8 *lab = calloc(NPAIRS, 1);
    jump_targets(code, in, lab);
    lab[entry] = 1;
    for (u32 p = 0; p < NPAIRS; p++) {
        if (!in[p]) continue;
        u32 lo = rd_word(code, p, 0), hi = rd_word(code, p, 1), op = lo >> 25;
        if (!(hi >> 31) && (op == 0x21 || op == 0x25)) lab[(p + 2) % NPAIRS] = 1;
    }
    for (u32 p = 0; p < NPAIRS; p++)
        if (lab[p] && in[p]) put(&s, "        L2[%u] = &&p%u;\n", p, p);
    free(lab);
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
    if (n.qp) put(&s, "    if (l_qw | l_pw) return 2;   /* Q / P on the way: counted only where the program can have them */\n");
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
    free(mac_live);
    free(tick);
    return s.buf;
}

/* ------------------------------------------------------------------------------- compiling */

#ifdef _WIN32
/* Windows: only the programs built in (no compiler at run time); the others are interpreted */
static void load(Prog *p, const char *so) { (void)so; __atomic_store_n(&p->state, 2, __ATOMIC_RELEASE); }
static int setup(void) {
    const char *e = getenv("SSTHEH_VUJIT");
    if (e && !atoi(e)) return 0;
    if (!&vu_builtin_count || !vu_builtin_count) return 0;
    header_hash = vu_builtin_header_hash;
    rt_log("vujit", "%d VU1 programs built in", vu_builtin_count);
    return 1;
}
#else
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
        while (!queue_head && !ahead_head) pthread_cond_wait(&qcond, &qlock);
        int ahead = !queue_head;
        Prog *p = ahead ? ahead_head : queue_head;
        if (ahead) { ahead_head = p->queue_next; if (!ahead_head) ahead_tail = NULL; }
        else { queue_head = p->queue_next; if (!queue_head) queue_tail = NULL; }
        pthread_mutex_unlock(&qlock);
        if (!p->source) {
            p->source = program_c(p->image, p->entry / 8, p->in);
            free(p->image);
            free(p->in);
            p->image = p->in = NULL;
        }

        char c_path[PATH_MAX + 32], so_path[PATH_MAX + 32], tmp_path[PATH_MAX + 48], cmd[4 * PATH_MAX + 256];
        snprintf(c_path, sizeof c_path, "%s/%016llx.c", cache_dir, (unsigned long long)p->key);
        snprintf(so_path, sizeof so_path, "%s/%016llx.so", cache_dir, (unsigned long long)p->key);
        snprintf(tmp_path, sizeof tmp_path, "%s/%016llx.%d.so", cache_dir, (unsigned long long)p->key, getpid());
        FILE *f = fopen(c_path, "w");
        if (f) { fputs(p->source, f); fclose(f); }
        free(p->source);
        p->source = NULL;
        snprintf(cmd, sizeof cmd,
                 "%sgcc " CC_FLAGS " -I'%s/port/runtime' -I'%s/port/gs' -o '%s' '%s' -lm",
                 ahead ? "nice -n 10 " : "", src_dir, src_dir, tmp_path, c_path);
        if (!f || system(cmd) != 0 || rename(tmp_path, so_path) != 0) {
            rt_log("vujit", "compiling %s failed", c_path);
            __atomic_store_n(&p->state, 2, __ATOMIC_RELEASE);
        } else {
            load(p, so_path);
            rt_log("vujit", "program at %03X compiled (%016llx)%s", p->entry, (unsigned long long)p->key, ahead ? " ahead of time" : "");
        }
        if (ahead) __atomic_sub_fetch(&ahead_left, 1, __ATOMIC_RELEASE);
    }
    return NULL;
}

/* A subdirectory of the VU cache named as a version's: 16 hex digits. */
static int version_name(const char *s) {
    if (strlen(s) != 16) return 0;
    for (int k = 0; k < 16; k++)
        if (!((s[k] >= '0' && s[k] <= '9') || (s[k] >= 'a' && s[k] <= 'f'))) return 0;
    return 1;
}

/* A file the cache keeps: a program's C or shared object, or a compile's temporary .so. */
static int cache_file(const char *s) {
    size_t n = strlen(s);
    return (n > 2 && !strcmp(s + n - 2, ".c")) || (n > 3 && !strcmp(s + n - 3, ".so"));
}

/* Removes from dir (~/.cache/sstheh/vu) the other versions' subdirectories and the programs kept
 * directly in it before there were versions, and from the current one (the subdirectory current)
 * the temporary files of compiles whose process is gone. A program another version is still
 * running stays mapped; what that version compiles afterwards is interpreted. */
static void clean_cache(const char *dir, const char *current) {
    DIR *d = opendir(dir);
    if (!d) return;
    char path[PATH_MAX + 64], file[2 * PATH_MAX + 64];
    u32 removed = 0;
    struct dirent *e;
    while ((e = readdir(d))) {
        if (snprintf(path, sizeof path, "%s/%s", dir, e->d_name) >= (int)sizeof path) continue;
        if (cache_file(e->d_name)) { removed += unlink(path) == 0; continue; }
        if (!version_name(e->d_name)) continue;
        int mine = !strcmp(e->d_name, current);
        DIR *sub = opendir(path);
        if (!sub) continue;
        struct dirent *f;
        while ((f = readdir(sub))) {
            if (!cache_file(f->d_name)) continue;
            int pid;
            if (mine && (sscanf(f->d_name, "%*16[0-9a-f].%d.so", &pid) != 1 || kill(pid, 0) == 0 || errno != ESRCH)) continue;
            snprintf(file, sizeof file, "%s/%s", path, f->d_name);
            removed += unlink(file) == 0;
        }
        closedir(sub);
        if (!mine) rmdir(path);
    }
    closedir(d);
    if (removed) rt_log("vujit", "%u old files removed from %s", removed, dir);
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
    int built_in = &vu_builtin_count && vu_builtin_count > 0;
    if (access(probe, R_OK) != 0) {
        if (!built_in) { rt_log("vujit", "sources not found (%s): VU1 programs are interpreted", probe); return 0; }
        header_hash = vu_builtin_header_hash;
        rt_log("vujit", "%d VU1 programs built in (no sources: any other one is interpreted)", vu_builtin_count);
        return 1;
    }
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
    for (const char *c = CC_FLAGS; *c; c++) header_hash = (header_hash ^ (u8)*c) * 0x100000001B3ull;
    if (built_in && header_hash != vu_builtin_header_hash)
        rt_log("vujit", "the sources changed since the build: its %d programs are not used", vu_builtin_count);
    else if (built_in) rt_log("vujit", "%d VU1 programs built in", vu_builtin_count);
    const char *home = getenv("XDG_CACHE_HOME");
    char base[PATH_MAX];
    if (home && *home) snprintf(base, sizeof base, "%s", home);
    else snprintf(base, sizeof base, "%s/.cache", getenv("HOME") ? getenv("HOME") : "/tmp");
    char version[17], vu_dir[PATH_MAX];
    snprintf(version, sizeof version, "%016llx", (unsigned long long)((header_hash ^ GEN_VERSION) * 0x100000001B3ull));
    if (snprintf(vu_dir, sizeof vu_dir, "%s/sstheh/vu", base) >= (int)sizeof vu_dir ||
        snprintf(cache_dir, sizeof cache_dir, "%s/%s", vu_dir, version) >= (int)sizeof cache_dir) {
        rt_log("vujit", "cache path too long: VU1 programs not compiled at run time");
        return built_in;
    }
    can_compile = 1;
    char top[PATH_MAX + 16];
    snprintf(top, sizeof top, "%s/sstheh", base);
    mkdir(base, 0755);
    mkdir(top, 0755);
    mkdir(vu_dir, 0755);
    mkdir(cache_dir, 0755);
    clean_cache(vu_dir, version);
    long cpus = sysconf(_SC_NPROCESSORS_ONLN);
    int threads = cpus > 4 ? (int)(cpus / 2) : 2;
    if (threads > 8) threads = 8;
    for (int k = 0; k < threads; k++) {
        pthread_t t;
        pthread_create(&t, NULL, compiler, NULL);
        pthread_setname_np(t, "vu-compiler");
        pthread_detach(t);
    }
    return 1;
}
#endif

/* The native code for the program starting at v->pc, or NULL (interpret it). */
static ProgFn find(Vu *v) {
    u32 entry = (v->pc & 0x3FFF) / 8;
    if (by_entry[entry].gen == code_gen) {
        Prog *p = by_entry[entry].p;
        return p && __atomic_load_n(&p->state, __ATOMIC_ACQUIRE) == 1 ? p->fn : NULL;
    }
    u64 tl = perf_stamp();
    if (code_hash_gen != code_gen) {
        code_hash_gen = code_gen;
        code_hash = memory_hash(v->code);
    }
    u64 sk = (code_hash ^ entry) * 0x9E3779B97F4A7C15ull;
    u32 slot = sk >> 50;
    while (seen[slot].p && seen[slot].key != sk) slot = (slot + 1) % 16384;
    Prog *p = seen[slot].p;
    if (p) {
        if (tl) { perf.jit_lookups++; perf.jit_lookup_ns += perf_since(tl); }
        by_entry[entry].gen = code_gen;
        by_entry[entry].p = p;
        return __atomic_load_n(&p->state, __ATOMIC_ACQUIRE) == 1 ? p->fn : NULL;
    }
    static u8 in[NPAIRS];
    reach(v->code, entry, in);
    u64 key = prog_key(v->code, entry, in);
    if (tl) { perf.jit_lookups++; perf.jit_lookup_ns += perf_since(tl); }
    Prog **b = &buckets[key % 4096];
    p = *b;
    while (p && p->key != key) p = p->next;
    if (!p) {
        p = calloc(1, sizeof *p);
        p->key = key;
        p->entry = entry * 8;
        p->next = *b;
        *b = p;
        ProgFn bf = builtin(key);
        char so_path[PATH_MAX + 32];
        if (bf) { p->fn = bf; p->state = 1; perf.jit_cached++; }
        else if (!can_compile) p->state = 2;
        else {
        snprintf(so_path, sizeof so_path, "%s/%016llx.so", cache_dir, (unsigned long long)key);
        if (access(so_path, R_OK) == 0) { load(p, so_path); perf.jit_cached++; }
        else {
            perf.jit_queued++;
            p->source = program_c(v->code, entry, in);
            pthread_mutex_lock(&qlock);
            if (queue_tail) queue_tail->queue_next = p;
            else queue_head = p;
            queue_tail = p;
            pthread_cond_signal(&qcond);
            pthread_mutex_unlock(&qlock);
        }
        }
    }
    static u32 nseen;
    if (nseen < 16384 * 3 / 4) {        /* full: no more remembered (the old way still finds them) */
        nseen++;
        seen[slot].key = sk;
        seen[slot].p = p;
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
        int r = fn(v);
        if (r == 0) return 1;
        if (r == 2) return 0;
        perf.jit_hops++;
        if (dbg) {
            static u32 told2[0x800];
            if (told2[(v->pc & 0x3FFF) / 8]++ < 3) rt_log("vujit", "program at %03X left at %03X", at, v->pc & 0x3FFF);
        }
    }
    return 0;
}

/* ------------------------------------------------------------------------------- ahead of time
 *
 * All the game's VU1 code is in its executable: DMA packets of MPGs at 0x3C6F80. The first packet
 * is the resident part (from 0); each of the others is an overlay the game loads right after it.
 * For the resident part alone and with each overlay, the programs are taken from where they can
 * start: the first pair, the pair after each program's end (E bit) or JR (the next subroutine),
 * where JALRs return, and the constants put in integer registers (where JR goes). Those not compiled yet are compiled in the background, after
 * the ones the game is waiting for. */

#define MICROCODE_AT 0x3C6F80u
#define MICROCODE_LEN 62848u

/* Writes the MPGs of the DMA packet at pk into code[] (at base + their address); the end of what
 * was written (bytes), and the packet's size in *size. */
static u32 packet_mpgs(const u8 *pk, u32 room, u8 *code, u32 base, u32 *size) {
    u64 tag;
    memcpy(&tag, pk, 8);
    u32 nw = 2 + (u32)(tag & 0xFFFF) * 4, end = 0;
    *size = 16 + (u32)(tag & 0xFFFF) * 16;
    if (*size > room) return 0;
    const u8 *w = pk + 8;
    for (u32 i = 0; i < nw;) {
        u32 vc;
        memcpy(&vc, w + i * 4, 4);
        i++;
        u32 cmd = (vc >> 24) & 0x7F, num = (vc >> 16) & 0xFF, imm = vc & 0xFFFF;
        if (cmd == 0x4A) {
            u32 n = num ? num : 256, at = base + imm * 8;
            if (i + n * 2 > nw || at + n * 8 > 0x4000) return end;
            memcpy(code + at, w + i * 4, n * 8);
            if (at + n * 8 > end) end = at + n * 8;
            i += n * 2;
        } else if (cmd != 0x00 && cmd != 0x10 && cmd != 0x11 && cmd != 0x13) return end;   /* only MPGs, NOPs, FLUSHes */
    }
    return end;
}

/* vu_jit_generate: the programs written as C into GEN_FILES files instead of being compiled */
#define GEN_FILES 16
static FILE *gen_file[GEN_FILES];
static u64 gen_key[8192];
static u32 gen_n;

static void gen_write(const char *src, u64 key) {
    FILE *f = gen_file[gen_n % GEN_FILES];
    char name[64];
    snprintf(name, sizeof name, "int vu_prog_%016llx(Vu *v) {", (unsigned long long)key);
    const char *at = strstr(src, "int vu_prog(Vu *v) {");
    if (!at) return;
    fprintf(f, "/* ---- program %016llx */\n", (unsigned long long)key);
    fwrite(src, 1, (size_t)(at - src), f);
    fputs(name, f);
    fputs(at + strlen("int vu_prog(Vu *v) {"), f);
    for (const char *l = src; l && *l; l = strchr(l, '\n') ? strchr(l, '\n') + 1 : NULL)   /* its macros, for the next one */
        if (!strncmp(l, "#define ", 8)) {
            const char *n = l + 8, *e = n;
            while (*e == '_' || (*e >= 'A' && *e <= 'Z') || (*e >= 'a' && *e <= 'z') || (*e >= '0' && *e <= '9')) e++;
            fprintf(f, "#undef %.*s\n", (int)(e - n), n);
        }
    gen_key[gen_n++] = key;
}

static u32 ahead_image(const u8 *code, u32 from, u32 to, u64 *seen, u32 nseen_max, u32 *nseen) {
    u32 starts[NPAIRS], ns = 0, queued = 0;
    static u8 hit[NPAIRS];
    memset(hit, 0, sizeof hit);
#define START(x) do { u32 x_ = (x); if (x_ < to && !hit[x_]) { hit[x_] = 1; starts[ns++] = x_; } } while (0)
    START(from);
    for (u32 p = from; p < to; p++) {
        u32 lo = rd_word(code, p, 0), hi = rd_word(code, p, 1);
        if (hi & 0x40000000u) START(p + 2);
        if (hi >> 31) continue;
        if ((lo >> 25) == 0x08) START(((lo >> 10) & 0x7800) | (lo & 0x7FF));   /* IADDIU */
        if (is_jump(lo)) START(p + 2);              /* the next subroutine after a JR; where a JALR returns */
    }
#undef START
    static u8 in[NPAIRS];
    for (u32 k = 0; k < ns; k++) {
        reach(code, starts[k], in);
        u64 key = prog_key(code, starts[k], in);
        u32 j = 0;
        while (j < *nseen && seen[j] != key) j++;
        if (j < *nseen || *nseen == nseen_max) continue;
        seen[(*nseen)++] = key;
        if (gen_file[0]) {
            char *src = program_c(code, starts[k], in);
            gen_write(src, key);
            free(src);
            continue;
        }
        if (builtin(key) || !can_compile) continue;
        char so_path[PATH_MAX + 32];
        snprintf(so_path, sizeof so_path, "%s/%016llx.so", cache_dir, (unsigned long long)key);
        if (access(so_path, R_OK) == 0) continue;
        Prog **b = &buckets[key % 4096], *p = *b;
        while (p && p->key != key) p = p->next;
        if (p) continue;
        p = calloc(1, sizeof *p);
        p->key = key;
        p->entry = starts[k] * 8;
        p->image = malloc(0x4000);
        memcpy(p->image, code, 0x4000);
        p->in = malloc(NPAIRS);
        memcpy(p->in, in, NPAIRS);
        p->next = *b;
        *b = p;
        pthread_mutex_lock(&qlock);
        if (ahead_tail) ahead_tail->queue_next = p;
        else ahead_head = p;
        ahead_tail = p;
        __atomic_add_fetch(&ahead_left, 1, __ATOMIC_RELEASE);
        pthread_cond_signal(&qcond);
        pthread_mutex_unlock(&qlock);
        queued++;
    }
    return queued;
}

/* Before the game starts (the program table is the game thread's afterwards). wait: until all
 * are compiled. How many programs there are, and in *queued how many are being compiled. */
int vu_jit_ahead(int wait, int *queued) {
    *queued = 0;
    if (enabled < 0) enabled = setup();
    if (!enabled) return 0;
    const u8 *pk = rt_ram + MICROCODE_AT;
    static u8 code[0x4000];
    static u64 seen[8192];
    u32 nseen = 0, size;
    memset(code, 0, sizeof code);
    u32 base_end = packet_mpgs(pk, MICROCODE_LEN, code, 0, &size);
    if (!base_end || base_end % 8) { rt_log("vujit", "no VU1 code at %08X", MICROCODE_AT); return 0; }
    static u8 resident[0x4000];
    memcpy(resident, code, sizeof resident);
    *queued += (int)ahead_image(code, 0, base_end / 8, seen, 8192, &nseen);
    int overlays = 0;
    for (u32 off = size; off + 16 <= MICROCODE_LEN; off += size) {
        memcpy(code, resident, sizeof code);
        u32 end = packet_mpgs(pk + off, MICROCODE_LEN - off, code, base_end, &size);
        if (!size) break;
        if (end <= base_end) continue;
        overlays++;
        *queued += (int)ahead_image(code, 0, end / 8, seen, 8192, &nseen);
    }
    rt_log("vujit", "%u VU1 programs (resident code and %d overlays), %d to compile", nseen, overlays, *queued);
    if (wait)
        while (__atomic_load_n(&ahead_left, __ATOMIC_ACQUIRE) > 0) usleep(20000);
    return (int)nseen;
}

static int cmp_key(const void *a, const void *b) {
    u64 x = *(const u64 *)a, y = *(const u64 *)b;
    return x < y ? -1 : x > y;
}

/* --gen-vu dir (the build): the game's programs as C, in dir/vu_00.c .. vu_15.c, and their table in
 * dir/vu_builtin.c. 0: done. */
int vu_jit_generate(const char *dir) {
    if (enabled < 0) enabled = setup();
    if (!enabled || !can_compile) { fprintf(stderr, "--gen-vu: the sources are needed\n"); return 1; }
    char path[PATH_MAX + 32];
    for (int k = 0; k < GEN_FILES; k++) {
        snprintf(path, sizeof path, "%s/vu_%02d.c", dir, k);
        if (!(gen_file[k] = fopen(path, "w"))) { perror(path); return 1; }
        fputs("/* generated by build/sstheh-stage1 --gen-vu (port/gs/vu_jit.c): the game's VU1 programs */\n", gen_file[k]);
    }
    int queued;
    vu_jit_ahead(0, &queued);
    for (int k = 0; k < GEN_FILES; k++) fclose(gen_file[k]);
    qsort(gen_key, gen_n, sizeof *gen_key, cmp_key);
    snprintf(path, sizeof path, "%s/vu_builtin.c", dir);
    FILE *f = fopen(path, "w");
    if (!f) { perror(path); return 1; }
    fputs("/* generated by build/sstheh-stage1 --gen-vu (port/gs/vu_jit.c) */\n#include \"vu_internal.h\"\n\n", f);
    for (u32 i = 0; i < gen_n; i++) fprintf(f, "int vu_prog_%016llx(Vu *v);\n", (unsigned long long)gen_key[i]);
    fputs("\ntypedef struct { u64 key; int (*fn)(Vu *); } VuBuiltin;\nconst VuBuiltin vu_builtin[] = {\n", f);
    for (u32 i = 0; i < gen_n; i++) fprintf(f, "    {0x%016llxull, vu_prog_%016llx},\n", (unsigned long long)gen_key[i], (unsigned long long)gen_key[i]);
    fprintf(f, "};\nconst int vu_builtin_count = %u;\nconst u64 vu_builtin_header_hash = 0x%016llxull;\n", gen_n, (unsigned long long)header_hash);
    fclose(f);
    printf("%u VU1 programs written into %s\n", gen_n, dir);
    return 0;
}
