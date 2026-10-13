/*
 * SIF: the link between the EE and the IOP (I/O processor).
 *
 * EE side, as the SDK uses it: SifSetDma copies blocks into IOP memory (commands go to the IOP's
 * command buffer, whose address the IOP publishes in SIF register 2); SifGetReg/SifSetReg read and
 * write the SIF registers. The IOP's answers are written into the EE's receive buffer and announced
 * with the DMA channel 5 (SIF0) interrupt, which the kernel delivers at the next safe point.
 */
#include <stdio.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"
#include "kernel.h"
#include "iop.h"

/* SIF registers 1-4: MAINADDR, SUBADDR, MSFLAG, SMFLAG. System registers 0x80000000+ are scratch
 * values the SIF libraries share (0: IOP command buffer, 1: EE command data, 2: RPC initialised). */
static u32 regs[8], sysregs[32];
static u32 dma_id;

#define SIF_STAT_SIFINIT 0x10000
#define SIF_STAT_CMDINIT 0x20000
#define SIF_STAT_BOOTEND 0x40000

void sif_init(void) {
    regs[2] = IOP_CMD_BUFFER;
    regs[4] = SIF_STAT_SIFINIT | SIF_STAT_CMDINIT | SIF_STAT_BOOTEND;
}

s32 sif_syscall(Ctx *c, int k, int isr, u32 a0, u32 a1, u32 a2) {
    (void)isr;
    (void)a2;
    switch (k) {
    case 0x76:                                   /* SifDmaStat(id): < 0 when the transfer is done */
        return -1;
    case 0x77: {                                 /* SifSetDma(SifDmaTransfer_t *list, count) */
        for (u32 i = 0; i < a1; i++) {
            u32 t = a0 + i * 16;
            u32 src = rd32(c, t), dst = rd32(c, t + 4), size = rd32(c, t + 8);
            iop_receive(c, src, dst, size);
        }
        return ++dma_id;
    }
    case 0x78:                                   /* SifSetDChain: re-arms SIF0 reception */
        return 0;
    case 0x79:                                   /* SifSetReg(reg, value) */
        if (a0 & 0x80000000) sysregs[a0 & 31] = a1;
        else if (a0 < 8) regs[a0] = (a0 == 3 || a0 == 4) ? regs[a0] | a1 : a1;
        return 0;
    case 0x7A:                                   /* SifGetReg(reg) */
        if (a0 & 0x80000000) return sysregs[a0 & 31];
        return a0 < 8 ? regs[a0] : 0;
    }
    return 0;
}
