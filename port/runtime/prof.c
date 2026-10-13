/*
 * SSTHEH_PROF=1: a sampling profiler. SIGPROF fires every millisecond of CPU time on whichever
 * thread is running; the interrupted instruction address is counted. prof_report() prints the
 * functions that took the most samples (symbols need the program linked with -rdynamic).
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

static void on_prof(int sig, siginfo_t *si, void *uc_) {
    (void)sig;
    (void)si;
    ucontext_t *uc = uc_;
    int i = __atomic_fetch_add(&nsamples, 1, __ATOMIC_RELAXED);
    if (i < MAX_SAMPLES) samples[i] = (void *)uc->uc_mcontext.gregs[REG_RIP];
}

void prof_start(void) {
    if (!getenv("SSTHEH_PROF")) return;
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
    fprintf(stderr, "profile: %d samples (1 ms of CPU each)\n", n);
    for (int k = 0; k < nrows && k < 30; k++)
        fprintf(stderr, "  %5.1f%%  %s\n", 100.0 * rows[k].count / (n ? n : 1), rows[k].name);
}
