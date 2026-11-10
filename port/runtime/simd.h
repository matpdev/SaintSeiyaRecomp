/*
 * 128-bit SIMD (the VUs, the GS): SSE intrinsics on x86-64; on arm64 (Apple Silicon) the same intrinsics
 * through sse2neon, with its exact min/max, division and square root (the VU programs translated to C
 * include this through vu_internal.h, so they build the same everywhere).
 *
 * simd_flush_denormals() / simd_restore(): denormals are zero, as on the VU (x86: FTZ | DAZ in MXCSR;
 * arm64: FZ in FPCR, which flushes inputs and results alike).
 */
#pragma once

#if defined(__aarch64__) || defined(_M_ARM64)
#define SSE2NEON_PRECISE_MINMAX 1
#define SSE2NEON_PRECISE_DIV 1
#define SSE2NEON_PRECISE_SQRT 1
#define SSE2NEON_SUPPRESS_WARNINGS
#include "third_party/sse2neon.h"

typedef unsigned long simd_fpstate;
static inline simd_fpstate simd_flush_denormals(void) {
    simd_fpstate fpcr;
    __asm__ volatile("mrs %0, fpcr" : "=r"(fpcr));
    __asm__ volatile("msr fpcr, %0" : : "r"(fpcr | (1ul << 24)));
    return fpcr;
}
static inline void simd_restore(simd_fpstate fpcr) { __asm__ volatile("msr fpcr, %0" : : "r"(fpcr)); }
#else
#include <immintrin.h>

typedef unsigned int simd_fpstate;
static inline simd_fpstate simd_flush_denormals(void) {
    simd_fpstate csr = _mm_getcsr();
    _mm_setcsr(csr | 0x8040);
    return csr;
}
static inline void simd_restore(simd_fpstate csr) { _mm_setcsr(csr); }
#endif
