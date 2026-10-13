#pragma once
#include <string.h>
#include "r5900.h"

#define IOP_RAM_SIZE 0x200000u
#define IOP_CMD_BUFFER 0x0001F000u    /* where the EE sends SIF command packets */

extern u8 iop_ram[IOP_RAM_SIZE];

void sif_init(void);
void iop_init(void);
/* An EE -> IOP transfer (SifSetDma): copy, and run the command if it went to the command buffer. */
void iop_receive(Ctx *c, u32 ee_src, u32 iop_dst, u32 size);
/* cri_adxi.c: answers the CRI sound driver's buffer exchanges (DTX) when they arrive */
void cri_adxi_dma(Ctx *c, u32 iop_dst, u32 size);
/* Deliver queued IOP -> EE packets; called by the kernel with interrupts allowed. */
int iop_pending(void);
void iop_deliver(Ctx *c, void (*raise_sif0)(Ctx *c));

/* An RPC server on the IOP, reimplemented. `in` is the data the EE sent (in IOP memory), `out` the
 * buffer that goes back to the EE's receive address. Returns the number of bytes written to `out`. */
typedef u32 (*RpcHandler)(Ctx *c, u32 fn, u8 *in, u32 in_size, u8 *out, u32 out_size);
void iop_register_server(u32 sid, const char *name, RpcHandler handler);
/* Queue a call from the IOP to an RPC server the EE registered (sceSifRegisterRpc on the EE). */
void iop_call_ee(u32 sid, u32 fn, const void *data, u32 size);

static inline u32 iop_rd32(u32 a) { u32 v; memcpy(&v, iop_ram + (a & (IOP_RAM_SIZE - 1)), 4); return v; }
static inline void iop_wr32(u32 a, u32 v) { memcpy(iop_ram + (a & (IOP_RAM_SIZE - 1)), &v, 4); }
