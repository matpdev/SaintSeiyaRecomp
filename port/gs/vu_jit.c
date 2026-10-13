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
    u64 h = (0xCBF29CE484222325ull ^ header_hash) * 0x100000001B3ull ^ entry;
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

static char *generate(const u8 *code, u32 entry, const u8 *in) {
    Str s = {0};
    put(&s, "/* VU1 program from %03X */\n#include \"vu_internal.h\"\n\n", entry);
    put(&s, "int vu_prog(Vu *v) {\n    static void *L2[%d];\n    static int init;\n    if (!init) {\n", NPAIRS);
    put(&s, "        for (int k = 0; k < %d; k++) L2[k] = &&out;\n", NPAIRS);
    for (u32 p = 0; p < NPAIRS; p++)
        if (in[p]) put(&s, "        L2[%u] = &&p%u;\n", p, p);
    put(&s, "        init = 1;\n    }\n");
    put(&s, "    int ending = 0, pend = 0, taken = 0;\n    u32 ptarget = 0, target = 0, npc;\n    long guard = 0;\n    UpperOut uo;\n");
    put(&s, "    (void)taken; (void)target; (void)guard;\n");
    put(&s, "    goto *L2[(v->pc & 0x3FFF) >> 3];\nout:\n    return 1;\n");
    for (u32 p = 0; p < NPAIRS; p++) {
        if (!in[p]) continue;
        u32 lo = rd_word(code, p, 0), hi = rd_word(code, p, 1), next = ((p + 1) % NPAIRS) * 8;
        Dec d;
        vu_decode(&d, lo, hi);
        put(&s, "p%u: {\n", p);
        put(&s, "    if (v->q_wait && --v->q_wait == 0) v->q = v->q_next;\n");
        put(&s, "    if (v->p_wait && --v->p_wait == 0) v->p = v->p_next;\n");
        put(&s, "    { static const Dec d = {%u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, 1, 0x%08Xu, 0x%08Xu}; upper(v, &d, &uo); }\n",
            d.kind, d.op, d.bsrc, d.bc, d.dest, d.fs, d.ft, d.fd, d.to_acc, d.sc, d.ibit, d.ebit, d.lnop, lo, hi);
        int br = 0;
        if (d.ibit) put(&s, "    { u32 x = 0x%08Xu; memcpy(&v->i, &x, 4); }\n", lo);
        else if (!d.lnop) {
            br = is_branch(lo) || is_jump(lo);
            put(&s, "    %slower(v, 0x%08Xu, %uu, &target);\n", br ? "taken = " : "", lo, p * 8);
        }
        put(&s, "    commit_upper(&uo);\n    flags_advance(v);\n");
        put(&s, "    npc = %uu;\n    if (pend) { pend = 0; npc = ptarget & 0x3FFF; }\n", next);
        if (br) put(&s, "    if (taken) { pend = 1; ptarget = target; }\n");
        put(&s, "    if (ending) { v->pc = npc; return 0; }\n");
        if (d.ebit) put(&s, "    ending = 1;\n");
        put(&s, "    v->pc = npc;\n");
        put(&s, "    if (npc != %uu) { if (++guard > (1 << 22)) return 0; goto *L2[npc >> 3]; }\n", next);
        u32 np = (p + 1) % NPAIRS;
        if (!in[np]) put(&s, "    return 1;\n");
        else if (np != p + 1) put(&s, "    goto p%u;\n", np);
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
    for (int hops = 0; hops < 64; hops++) {
        ProgFn fn = find(v);
        if (!fn) return 0;
        if (fn(v) == 0) return 1;
    }
    return 0;
}
