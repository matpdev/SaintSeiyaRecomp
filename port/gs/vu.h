/* VU0 / VU1 micro mode: memories, UNPACK, microprograms (vu.c, vu_exec.c). */
#pragma once
#include "r5900.h"

typedef struct {
    u32 cmd, cl, wl, mode, mask;
    const u32 *row, *col;
    u32 tops_add;           /* VIF1 UNPACK with FLG... (double buffering: address += TOPS) */
} VuUnpack;

extern u8 vu1_mem[0x4000], vu1_code[0x4000];
extern u8 vu0_mem[0x1000], vu0_code[0x1000];

void vu_unpack(int vu, const VuUnpack *u, const u32 *data);
void vu_load_program(int vu, u32 addr, const u32 *words, u32 count);
void vu_start(int vu, int addr, u32 itop);
void vu_code_written(int vu, u32 addr, u32 bytes);  /* vu_exec.c: forget decoded pairs there */        /* addr -1: continue where the last program stopped */
extern u32 vu1_top;                               /* VIF1 TOP, read by XTOP */
void vu_stats(void);

/* gif.c: GIF packets from the three paths (1: VU1 XGKICK, 2: VIF1 DIRECT, 3: GIF DMA) */
void gif_path1(const u8 *vu_mem, u32 addr);
void gif_path2(const u8 *data, u32 qwc);
