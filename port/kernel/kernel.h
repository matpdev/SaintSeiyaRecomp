#pragma once
#include "r5900.h"

extern u32 gs_imr;

/* sif.c, iop.c */
s32 sif_syscall(Ctx *c, int k, int isr, u32 a0, u32 a1, u32 a2);
void sif_packet(Ctx *c, u32 src, u32 dst, u32 size);

/* gs (port/gs) */
void gs_set_crt(u32 interlace, u32 mode, u32 field);
