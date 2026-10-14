/* The graphics path: DMAC (dmac.c) -> VIF0/VIF1 (vif.c) -> GIF (gif.c) -> GS (gs.c). */
#pragma once
#include "r5900.h"

/* dmac.c: registers 0x10008000..0x1000EFFF */
u32 dmac_read(u32 addr);
int dmac_gs_busy(void);       /* VIF1 / GIF transfers still running on their thread */
int dmac_write(Ctx *c, u32 addr, u32 value);      /* 0 if not a DMAC register */

/* destinations of DMA data */
void gif_dma(const u8 *data, u32 qwc);
void vif1_dma(const u8 *data, u32 qwc);
void vif0_dma(const u8 *data, u32 qwc);
void vif_tag(int vif, const u8 *two_codes);       /* the upper half of a DMA tag sent with TTE */

/* kernel.c: deliver a DMAC interrupt for channel `ch` at the next safe point */
void kernel_raise_dmac(int ch);

/* memory.c */
u64 gs_priv_read(u32 offset);
