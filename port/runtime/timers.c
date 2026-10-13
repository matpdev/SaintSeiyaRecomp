/*
 * The EE's four timers (0x10000000, 0x10000800, 0x10001000, 0x10001800): COUNT +0x00, MODE +0x10,
 * COMP +0x20, HOLD +0x30. COUNT runs while MODE.CUE (bit 7) is set, at the rate MODE.CLKS (bits 0-1)
 * selects: bus clock 147.456 MHz, /16, /256, or horizontal blanks (PAL: 15625 a second). It is
 * computed from host time when read: the value written, plus the ticks since.
 * Interrupts on compare / overflow are not raised yet.
 */
#include <time.h>

#include "r5900.h"
#include "runtime.h"

typedef struct { u32 count, mode, comp, hold; u64 since_ns; } Timer;
static Timer timers[4];

static u64 now_ns(void) {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (u64)ts.tv_sec * 1000000000ull + (u64)ts.tv_nsec;
}

static double rate(u32 mode) {
    switch (mode & 3) {
    case 0: return 147456000.0;
    case 1: return 147456000.0 / 16;
    case 2: return 147456000.0 / 256;
    default: return 15625.0;
    }
}

static u32 count_now(Timer *t) {
    if (!(t->mode & 0x80)) return t->count & 0xFFFF;
    double ticks = (double)(now_ns() - t->since_ns) * rate(t->mode) / 1e9;
    return (u32)(t->count + (u64)ticks) & 0xFFFF;
}

/* Returns 1 and the value if `addr` is a timer register. */
int timer_read(u32 addr, u32 *value) {
    if (addr < 0x10000000 || addr >= 0x10002000) return 0;
    Timer *t = &timers[(addr >> 11) & 3];
    switch (addr & 0x7F0) {
    case 0x00: *value = count_now(t); return 1;
    case 0x10: *value = t->mode; return 1;
    case 0x20: *value = t->comp; return 1;
    case 0x30: *value = t->hold; return 1;
    }
    return 0;
}

int timer_write(u32 addr, u32 value) {
    if (addr < 0x10000000 || addr >= 0x10002000) return 0;
    Timer *t = &timers[(addr >> 11) & 3];
    switch (addr & 0x7F0) {
    case 0x00: t->count = value & 0xFFFF; t->since_ns = now_ns(); return 1;
    case 0x10:
        t->count = count_now(t);
        t->since_ns = now_ns();
        t->mode = value & 0x3FF;                     /* bits 10-11 (equal / overflow flags) clear on write */
        return 1;
    case 0x20: t->comp = value & 0xFFFF; return 1;
    case 0x30: t->hold = value & 0xFFFF; return 1;
    }
    return 0;
}
