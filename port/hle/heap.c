/*
 * SSTHEH_POISON_FREE=1 (to find a use after free): on entry to the game's allocator free
 * (port/hle.txt: "before"), the block is filled with 0xA5 and remembered with the calls that freed
 * it. A pointer read from a freed block is then 0xA5A5A5A5, outside RAM, and the program stops
 * right there; the crash report (rt_fatal) says which registers point into a freed block and who
 * freed it.
 *
 * Every free is also told to training.c (the end of a fight).
 *
 * Blocks start after a header beginning with "MEM" (16-byte aligned), as the allocator finds them:
 * a block ends where the next header starts.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"

typedef struct {
    u32 start, end, vblank;
    u32 calls[6];
} Freed;

#define NFREED 65536
static Freed freed[NFREED];
static u32 nfreed;
static int poison = -1;

static int is_header(u32 a) {
    return a + 3 <= 0x02000000 && rt_ram[a] == 'M' && rt_ram[a + 1] == 'E' && rt_ram[a + 2] == 'M';
}

/* on entry to func_00100A20 (allocator, p) */
void hle_heap_free(Ctx *c) {
    if (poison < 0) poison = getenv("SSTHEH_POISON_FREE") && atoi(getenv("SSTHEH_POISON_FREE"));
    u32 p = RW(5) & 0x01FFFFFF;
    void training_freed(u32 p);              /* training.c: the battle object's end */
    if (p) training_freed(p);
    if (!poison || !p) return;
    u32 end = (p + 15) & ~15u;
    while (end < 0x02000000 && end - p < (4u << 20) && !is_header(end)) end += 16;
    Freed *f = &freed[nfreed++ % NFREED];
    f->start = p;
    f->end = end;
    f->vblank = kernel_vblank_count();
    memset(f->calls, 0, sizeof f->calls);
    u32 sp = RW(29) & 0x01FFFFFC, n = 0;
    for (u32 a = sp; a < sp + 0x400 && a + 4 <= 0x02000000 && n < 6; a += 4) {   /* as in rt_fatal */
        u32 w, call;
        memcpy(&w, rt_ram + a, 4);
        if (w < 0x00100008 || w >= 0x02000000 || (w & 3)) continue;
        memcpy(&call, rt_ram + w - 8, 4);
        if ((call >> 26) == 3 || (call & 0xFC00003F) == 9) f->calls[n++] = w;
    }
    memset(rt_ram + p, 0xA5, end - p);
}

/* For rt_fatal: if addr is in a block freed lately, say so (the latest free of it). */
void heap_explain(const char *what, u32 addr) {
    if (!poison) return;
    addr &= 0x01FFFFFF;
    u32 n = nfreed < NFREED ? nfreed : NFREED;
    for (u32 k = 0; k < n; k++) {
        const Freed *f = &freed[(nfreed - 1 - k) % NFREED];
        if (addr < f->start || addr >= f->end) continue;
        fprintf(stderr, "%s=%08X is in a block freed at vertical blank %u (%08X..%08X), by:\n", what, addr, f->vblank,
                f->start, f->end);
        for (int i = 0; i < 6 && f->calls[i]; i++) fprintf(stderr, "    %08X in %s\n", f->calls[i], rt_name_of(f->calls[i]));
        return;
    }
}
