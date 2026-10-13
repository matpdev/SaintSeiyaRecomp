/*
 * SSTHEH_PROF=1 (or =N: from vertical blank N on): a sampling profiler. SIGPROF fires every millisecond of CPU time on whichever
 * thread is running; the interrupted instruction address is counted. prof_report() prints the
 * functions that took the most samples (symbols need the program linked with -rdynamic).
 * SSTHEH_PROF_IN=<function>: also the hottest 16-byte spots inside it, as offsets for addr2line.
 */
#define _GNU_SOURCE
#include <dlfcn.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <ucontext.h>

#define MAX_SAMPLES (1 << 20)
static void *samples[MAX_SAMPLES];
static volatile int nsamples;
static unsigned prof_from;
unsigned kernel_vblank_count(void);

static void on_prof(int sig, siginfo_t *si, void *uc_) {
    (void)sig;
    (void)si;
    ucontext_t *uc = uc_;
    if (kernel_vblank_count() < prof_from) return;
    int i = __atomic_fetch_add(&nsamples, 1, __ATOMIC_RELAXED);
    if (i < MAX_SAMPLES) samples[i] = (void *)uc->uc_mcontext.gregs[REG_RIP];
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

typedef struct { const char *name; int count; } Row;

static int by_count(const void *a, const void *b) { return ((const Row *)b)->count - ((const Row *)a)->count; }

void prof_report(void) {
    if (!getenv("SSTHEH_PROF")) return;
    struct itimerval off = {0};
    setitimer(ITIMER_PROF, &off, NULL);
    int n = nsamples < MAX_SAMPLES ? nsamples : MAX_SAMPLES;
    static Row rows[1 << 16];
    int nrows = 0;
    for (int i = 0; i < n; i++) {
        Dl_info info;
        static char buf[1 << 16][24];
        static int nbuf;
        const char *name;
        if (dladdr(samples[i], &info) && info.dli_sname) name = info.dli_sname;
        else {
            /* not exported (static): the offset in the executable, for addr2line; 64-byte buckets */
            unsigned long off = (unsigned long)((char *)samples[i] - (char *)info.dli_fbase) & ~63ul;
            if (nbuf == (int)(sizeof buf / sizeof *buf)) continue;
            snprintf(buf[nbuf], sizeof buf[0], "@%lx", off);
            name = buf[nbuf++];
        }
        int k = 0;
        for (; k < nrows; k++) if (rows[k].name == name || !strcmp(rows[k].name, name)) break;
        if (k == nrows) { if (nrows == (int)(sizeof rows / sizeof *rows)) continue; rows[nrows++] = (Row){name, 0}; }
        rows[k].count++;
    }
    qsort(rows, nrows, sizeof *rows, by_count);
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
}
