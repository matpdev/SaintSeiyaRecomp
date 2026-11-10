/*
 * SSTHEH_PROF=1 (or =N: from vertical blank N on): a sampling profiler. SIGPROF fires every millisecond of CPU time on whichever
 * thread is running; the interrupted instruction address is counted. prof_report() prints the
 * functions that took the most samples (symbols need the program linked with -rdynamic).
 * SSTHEH_PROF_IN=<function>: also the hottest 16-byte spots inside it, as offsets for addr2line.
 */
#define _GNU_SOURCE
#include <stdint.h>
#include <time.h>
#include "perf.h"

/* the time stamp counter's rate */
double perf_tsc_ns = 0.25;

void perf_calibrate(void) {
    struct timespec a, b;
    clock_gettime(CLOCK_MONOTONIC, &a);
    uint64_t c0 = perf_cycles();
    struct timespec d = {0, 20000000};
    nanosleep(&d, NULL);
    clock_gettime(CLOCK_MONOTONIC, &b);
    uint64_t c1 = perf_cycles();
    double ns = (b.tv_sec - a.tv_sec) * 1e9 + (b.tv_nsec - a.tv_nsec);
    if (c1 > c0) perf_tsc_ns = ns / (double)(c1 - c0);
}

#ifdef _WIN32
/* Windows: no SIGPROF; the profiler is off */
void prof_start(void) {}
void prof_report(void) {}
#else
#include <dlfcn.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>
#ifdef __APPLE__
#include <pthread.h>
#include <sys/ucontext.h>     /* (<ucontext.h> wants _XOPEN_SOURCE there) */
#else
#include <sys/syscall.h>
#include <ucontext.h>
#endif

#include "perf.h"

#define MAX_SAMPLES (1 << 20)
static void *samples[MAX_SAMPLES];
static int sample_tid[MAX_SAMPLES];
static volatile int nsamples;
static unsigned prof_from;
unsigned kernel_vblank_count(void);

/* the interrupted instruction and the thread it is on */
static void *sample_pc(ucontext_t *uc) {
#if defined(__APPLE__) && defined(__aarch64__)
    return (void *)uc->uc_mcontext->__ss.__pc;
#elif defined(__APPLE__)
    return (void *)uc->uc_mcontext->__ss.__rip;
#elif defined(__aarch64__)
    return (void *)uc->uc_mcontext.pc;
#else
    return (void *)uc->uc_mcontext.gregs[REG_RIP];
#endif
}

static int thread_id(void) {
#ifdef __APPLE__
    uint64_t t = 0;
    pthread_threadid_np(NULL, &t);
    return (int)t;
#else
    return (int)syscall(SYS_gettid);
#endif
}

static void on_prof(int sig, siginfo_t *si, void *uc_) {
    (void)sig;
    (void)si;
    ucontext_t *uc = uc_;
    if (kernel_vblank_count() < prof_from) return;
    int i = __atomic_fetch_add(&nsamples, 1, __ATOMIC_RELAXED);
    if (i < MAX_SAMPLES) { samples[i] = sample_pc(uc); sample_tid[i] = thread_id(); }
}

void prof_start(void) {
    if (!getenv("SSTHEH_PROF")) return;
    prof_from = (unsigned)atoi(getenv("SSTHEH_PROF"));
    if (prof_from == 1) prof_from = 0;
    struct sigaction sa = {0};
    sa.sa_sigaction = on_prof;
    sa.sa_flags = SA_SIGINFO | SA_RESTART;
    sigaction(SIGPROF, &sa, NULL);
    struct itimerval it = {{0, 1000}, {0, 1000}};
    setitimer(ITIMER_PROF, &it, NULL);
}

/* The time stamp counter's rate against the monotonic clock, over 20 ms (the counter runs at a
 * constant rate on current x86 CPUs). */


typedef struct { const char *name; int count; } Row;

static int by_count(const void *a, const void *b) { return ((const Row *)b)->count - ((const Row *)a)->count; }

/* The samples' functions (only thread tid's, or all with 0), most samples first; how many rows. */
static int tally(Row *rows, int max_rows, int n, int tid) {
    int nrows = 0;
    for (int i = 0; i < n; i++) {
        if (tid && sample_tid[i] != tid) continue;
        Dl_info info;
        static char buf[1 << 16][24];
        static int nbuf;
        const char *name;
        if (dladdr(samples[i], &info) && info.dli_sname && strcmp(info.dli_sname, "vu_prog")) name = info.dli_sname;
        else if (info.dli_sname) name = strrchr(info.dli_fname, '/') ? strrchr(info.dli_fname, '/') + 1 : info.dli_fname;  /* a VU1 program: its file */
        else {
            /* not exported (static): the offset in the executable, for addr2line; 64-byte buckets */
            unsigned long off = (unsigned long)((char *)samples[i] - (char *)info.dli_fbase) & ~63ul;
            int b = 0;
            for (; b < nbuf; b++) if (strtoul(buf[b] + 1, NULL, 16) == off) break;
            if (b == nbuf) {
                if (nbuf == (int)(sizeof buf / sizeof *buf)) continue;
                snprintf(buf[nbuf++], sizeof buf[0], "@%lx", off);
            }
            name = buf[b];
        }
        int k = 0;
        for (; k < nrows; k++) if (rows[k].name == name || !strcmp(rows[k].name, name)) break;
        if (k == nrows) { if (nrows == max_rows) continue; rows[nrows++] = (Row){name, 0}; }
        rows[k].count++;
    }
    qsort(rows, nrows, sizeof *rows, by_count);
    return nrows;
}

void prof_report(void) {
    if (!getenv("SSTHEH_PROF")) return;
    struct itimerval off = {0};
    setitimer(ITIMER_PROF, &off, NULL);
    int n = nsamples < MAX_SAMPLES ? nsamples : MAX_SAMPLES;
    static Row rows[1 << 16];
    int nrows = tally(rows, 1 << 16, n, 0);
    const char *in = getenv("SSTHEH_PROF_IN");
    if (in) {
        static struct { unsigned long off; int count; } spots[4096];
        int nspots = 0;
        for (int i = 0; i < n; i++) {
            Dl_info info;
            if (!dladdr(samples[i], &info) || !info.dli_sname || strcmp(info.dli_sname, in)) continue;
            unsigned long off = (unsigned long)((char *)samples[i] - (char *)info.dli_fbase) & ~15ul;
            int k = 0;
            for (; k < nspots; k++) if (spots[k].off == off) break;
            if (k == nspots) { if (nspots == 4096) continue; spots[nspots++].off = off; spots[k].count = 0; }
            spots[k].count++;
        }
        for (int pass = 0; pass < 40 && pass < nspots; pass++) {
            int best = pass;
            for (int k = pass + 1; k < nspots; k++) if (spots[k].count > spots[best].count) best = k;
            __typeof__(spots[0]) t = spots[pass]; spots[pass] = spots[best]; spots[best] = t;
            fprintf(stderr, "spot %lx %5.1f%%\n", spots[pass].off, 100.0 * spots[pass].count / (n ? n : 1));
        }
    }
    fprintf(stderr, "profile: %d samples (1 ms of CPU each)\n", n);
    for (int k = 0; k < nrows && k < 30; k++)
        fprintf(stderr, "  %5.1f%%  %s\n", 100.0 * rows[k].count / (n ? n : 1), rows[k].name);
    /* the busiest threads, each with its own functions */
    static struct { int tid, count; } th[256];
    int nth = 0;
    for (int i = 0; i < n; i++) {
        int k = 0;
        for (; k < nth; k++) if (th[k].tid == sample_tid[i]) break;
        if (k == nth) { if (nth == 256) continue; th[nth++].tid = sample_tid[i]; th[k].count = 0; }
        th[k].count++;
    }
    for (int pass = 0; pass < 4 && pass < nth; pass++) {
        int best = pass;
        for (int k = pass + 1; k < nth; k++) if (th[k].count > th[best].count) best = k;
        __typeof__(th[0]) t = th[pass]; th[pass] = th[best]; th[best] = t;
        static Row trows[4096];
        int nt = tally(trows, 4096, n, th[pass].tid);
        fprintf(stderr, "thread %d: %.1f%% of the samples\n", th[pass].tid, 100.0 * th[pass].count / (n ? n : 1));
        for (int k = 0; k < nt && k < (pass ? 12 : 60); k++)
            fprintf(stderr, "  %5.1f%%  %s\n", 100.0 * trows[k].count / th[pass].count, trows[k].name);
    }
}

#endif
