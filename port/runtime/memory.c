/*
 * Guest memory: 32 MB of RAM, the scratchpad, and hardware registers.
 *
 * Hardware registers are kept as plain storage for now (reads return what was written), with every
 * access to a register nobody has implemented logged once, so the log shows what the game touches.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"
#include "gs.h"

int timer_read(u32 addr, u32 *value);   /* timers.c */
int timer_write(u32 addr, u32 value);

u8 *rt_ram;
u8 rt_spr[0x4000] __attribute__((aligned(16)));

/* 0x10000000..0x1000FFFF (EE registers) and 0x12000000..0x12001FFF (GS privileged registers) */
static u8 io_ee[0x10000] __attribute__((aligned(16)));
static u8 io_gs[0x2000] __attribute__((aligned(16)));
static u8 seen_ee[0x10000 / 4], seen_gs[0x2000 / 4];

void memory_init(void) {
    rt_ram = aligned_alloc(64, 0x02000000);
    memset(rt_ram, 0, 0x02000000);
}

static u8 *io_slot(u32 a, u8 **seen) {
    u32 p = a & 0x1FFFFFFF;
    if (p >= 0x10000000 && p < 0x10010000) { *seen = &seen_ee[(p - 0x10000000) / 4]; return io_ee + (p - 0x10000000); }
    if (p >= 0x12000000 && p < 0x12002000) { *seen = &seen_gs[(p - 0x12000000) / 4]; return io_gs + (p - 0x12000000); }
    return NULL;
}

u32 rt_mmio_read(Ctx *c, u32 a, int size) {
    u8 *seen;
    u8 *p = io_slot(a, &seen);
    if (!p) rt_fatal(c, "read%d from unmapped address %08X", size * 8, a);
    u32 p_ = a & 0x1FFFFFFF;
    if (p_ >= 0x10008000 && p_ < 0x1000F000) return dmac_read(p_);
    { u32 tv; if (timer_read(p_, &tv)) return tv; }
    /* VIF0/VIF1/GIF status: transfers complete at once, so the paths are always idle */
    if (p_ == 0x10003800 || p_ == 0x10003C00 || p_ == 0x10003020) return 0;
    /* registers whose reads must not just echo the last write */
    if (p_ == 0x12001000) {               /* GS CSR: report VSync/FINISH events as happened */
        return 0x0000000C | (kernel_vblank_count() & 1 ? 0x2000 : 0);
    }
    if (!(*seen & 1)) { *seen |= 1; rt_log("mmio", "read%d  %08X", size * 8, a); }
    u32 v = 0;
    memcpy(&v, p, size > 4 ? 4 : size);
    return v;
}

void rt_mmio_write(Ctx *c, u32 a, int size, u64 value) {
    u8 *seen;
    u8 *p = io_slot(a, &seen);
    if (!p) rt_fatal(c, "write%d to unmapped address %08X", size * 8, a);
    u32 p_ = a & 0x1FFFFFFF;
    if (p_ >= 0x10008000 && p_ < 0x1000F000 && size <= 4 && dmac_write(c, p_, (u32)value)) return;
    if (size <= 4 && timer_write(p_, (u32)value)) return;
    if (!(*seen & 2)) { *seen |= 2; rt_log("mmio", "write%d %08X = %llX", size * 8, a, (unsigned long long)value); }
    memcpy(p, &value, size);
}

void rt_mmio_read128(Ctx *c, u32 a, GPR *out) {
    out->d[0] = rt_mmio_read(c, a, 4) | (u64)rt_mmio_read(c, a + 4, 4) << 32;
    out->d[1] = rt_mmio_read(c, a + 8, 4) | (u64)rt_mmio_read(c, a + 12, 4) << 32;
}

void rt_mmio_write128(Ctx *c, u32 a, const GPR *v) {
    /* 0x10004000 / 0x10005000: VIF0/VIF1 FIFOs, 0x10006000: GIF FIFO, 0x10007010: IPU in FIFO */
    rt_mmio_write(c, a, 8, v->d[0]);
    rt_mmio_write(c, a + 8, 8, v->d[1]);
}

/* Load the program segments of a PS2 ELF into RAM. */
int memory_load_elf(const char *path, u32 *entry) {
    FILE *f = fopen(path, "rb");
    if (!f) return -1;
    u8 hdr[0x34];
    if (fread(hdr, 1, sizeof hdr, f) != sizeof hdr || memcmp(hdr, "\x7f" "ELF", 4)) { fclose(f); return -1; }
    u32 phoff, e;
    u16 phnum, phentsize;
    memcpy(&e, hdr + 0x18, 4);
    memcpy(&phoff, hdr + 0x1C, 4);
    memcpy(&phentsize, hdr + 0x2A, 2);
    memcpy(&phnum, hdr + 0x2C, 2);
    for (int i = 0; i < phnum; i++) {
        u32 ph[8];
        fseek(f, phoff + i * phentsize, SEEK_SET);
        if (fread(ph, 4, 8, f) != 8) break;
        if (ph[0] != 1) continue;                     /* PT_LOAD */
        u32 off = ph[1], vaddr = ph[2], filesz = ph[4], memsz = ph[5];
        if (vaddr + memsz > 0x02000000) { fclose(f); return -1; }
        memset(rt_ram + vaddr, 0, memsz);
        fseek(f, off, SEEK_SET);
        if (filesz && fread(rt_ram + vaddr, 1, filesz, f) != filesz) { fclose(f); return -1; }
    }
    fclose(f);
    *entry = e;
    return 0;
}

/* GS privileged registers (PMODE, DISPFB, DISPLAY, ...), by offset from 0x12000000 */
u64 gs_priv_read(u32 off) {
    u64 v;
    memcpy(&v, io_gs + (off & 0x1FF8), 8);
    return v;
}
