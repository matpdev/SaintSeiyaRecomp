/*
 * SIF: the link between the EE and the IOP (I/O processor).
 *
 * The EE side of the SDK sends packets to the IOP with SifSetDma and reads the IOP's status through
 * the SIF registers. This file receives those packets; the IOP services themselves (file I/O, pad,
 * memory card, sound) are reimplemented in port/iop/ as they turn out to be needed.
 */
#include <stdio.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"
#include "kernel.h"

static u32 sif_regs[32];
static u32 dma_id;

/* SIF registers the EE reads: 0 MSCOM, 1 SMCOM, 2 MSFLAG, 3 SMFLAG. The IOP sets SMFLAG bits as it
 * boots; the EE-side sceSifInitCmd waits for 0x10000 (SIF initialised) and 0x20000 (CMD ready). */
static void sif_boot(void) {
    static int done;
    if (done) return;
    done = 1;
    sif_regs[3] = 0x10000 | 0x20000 | 0x40000;
}

s32 sif_syscall(Ctx *c, int k, int isr, u32 a0, u32 a1, u32 a2) {
    (void)isr;
    (void)a2;
    sif_boot();
    switch (k) {
    case 0x76:                                   /* SifDmaStat(id): < 0 when the transfer is done */
        return -1;
    case 0x77: {                                 /* SifSetDma(SifDmaTransfer_t *list, count) */
        for (u32 i = 0; i < a1; i++) {
            u32 t = a0 + i * 16;
            u32 src = rd32(c, t), dst = rd32(c, t + 4), size = rd32(c, t + 8), attr = rd32(c, t + 12);
            rt_log("sif", "DMA %u: EE %08X -> IOP %08X, %u bytes, attr %X", dma_id + 1, src, dst, size, attr);
            sif_packet(c, src, dst, size);
        }
        return ++dma_id;
    }
    case 0x78:                                   /* SifSetDChain */
        return 0;
    case 0x79:                                   /* SifSetReg(reg, value) */
        rt_log("sif", "SetReg %X = %08X", a0, a1);
        if ((a0 & 0x7FFFFFFF) < 32) sif_regs[a0 & 31] = a1;
        else if (a0 & 0x80000000) sif_regs[a0 & 31] = a1;
        return 0;
    case 0x7A: {                                 /* SifGetReg(reg) */
        u32 r = (a0 & 0x80000000) ? sif_regs[a0 & 31] : sif_regs[a0 & 31];
        return r;
    }
    }
    return 0;
}
