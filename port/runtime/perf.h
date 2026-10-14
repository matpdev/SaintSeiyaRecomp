/* Counters for the on-screen performance panel (display.c). Times are host nanoseconds. */
#pragma once
#include <stdint.h>
#include <time.h>

typedef struct {
    volatile uint64_t gs_ns;     /* GIF/GS: unpacking packets, rasterising */
    volatile uint64_t vu_ns;     /* VU1 microprograms */
    volatile uint64_t prims;     /* primitives drawn */
} PerfCounters;

extern PerfCounters perf;
extern volatile int perf_timing;  /* the panel or SSTHEH_PERF_LOG wants the VU / GS times */

static inline uint64_t perf_now(void) {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint64_t)ts.tv_sec * 1000000000ull + (uint64_t)ts.tv_nsec;
}

/* a time stamp for the VU / GS shares, 0 when nobody looks at them (it costs a system call) */
static inline uint64_t perf_stamp(void) { return perf_timing ? perf_now() : 0; }
