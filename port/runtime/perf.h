/* Counters for the on-screen performance panel (display.c). Times are host nanoseconds. */
#pragma once
#include <stdint.h>
#include <time.h>
#include <x86intrin.h>

typedef struct {
    volatile uint64_t gs_ns;     /* GIF/GS: unpacking packets, rasterising */
    volatile uint64_t vu_ns;     /* VU1 microprograms */
    volatile uint64_t prims;     /* primitives drawn */
    volatile uint64_t vu_interp_ns;  /* of vu_ns: VU1 programs interpreted (no native code yet) */
    volatile uint64_t jit_queued;    /* VU1 programs sent to the compiler */
    volatile uint64_t jit_cached;    /* VU1 programs loaded from the cache on disk */
    volatile uint64_t pipes;         /* GPU pipelines created */
    volatile uint64_t pipe_ns;
    volatile uint64_t jit_lookups, jit_lookup_ns;
    volatile uint64_t jit_hops;      /* VU1 programs left for another (a jump to a pair they don't enter) */  /* VU1 programs identified again after a code change */
} PerfCounters;

extern PerfCounters perf;
extern volatile int perf_timing;  /* the panel or SSTHEH_PERF_LOG wants the VU / GS times */

static inline uint64_t perf_now(void) {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint64_t)ts.tv_sec * 1000000000ull + (uint64_t)ts.tv_nsec;
}

/* A time stamp for the VU / GS shares (CPU cycles: thousands are taken per frame), 0 when nobody
 * looks at them; perf_since() is the nanoseconds since one. */
extern double perf_tsc_ns;      /* nanoseconds per cycle, measured at start (perf_calibrate) */
void perf_calibrate(void);
static inline uint64_t perf_stamp(void) { return perf_timing ? __rdtsc() | 1 : 0; }
static inline uint64_t perf_since(uint64_t t) { return (uint64_t)((double)(__rdtsc() - t) * perf_tsc_ns); }
