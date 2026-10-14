/*
 * IOP modules run as they are (low-level emulation): the game's own sound driver (SSD.IRX, the
 * "PS2_SuzukiSoundDriver", and RSSD.IRX, its RPC front end) is loaded from the disc into IOP memory
 * and run by a MIPS I interpreter; the functions they import from the IOP's system modules (threads,
 * semaphores, memory, timers, SIF RPC, CD, libsd) are native, and libsd drives an emulated SPU2.
 */
#pragma once
#include "r5900.h"
#include "iop.h"

/* ---- CPU (iop_cpu.c) */
typedef struct IopCpu {
    u32 r[32], hi, lo, pc, npc;  /* npc: the next pc (a branch's target once its delay slot ran) */
} IopCpu;

#define IOP_RET_MAGIC 0xFFFFFFF0u   /* return address that ends iop_call */

typedef void (*IopNative)(IopCpu *cpu);   /* reads a0..a3 / the stack, writes v0 */

u32 iop_call(IopCpu *cpu, u32 addr, u32 a0, u32 a1, u32 a2, u32 a3);   /* run a function */
void iop_set_native(u32 addr, IopNative fn);                            /* a stub that runs native code */
u32 iop_arg(IopCpu *cpu, int n);                                         /* argument n (4+: on the stack) */
extern volatile int iop_irq_flag;                                        /* iop_lle_poll() is due */
void iop_lle_poll(void);                                                 /* deliver interrupts between instructions */

static inline u8 *iop_ptr(u32 a) { return iop_ram + (a & (IOP_RAM_SIZE - 1)); }
static inline u32 iop_r32(u32 a) { u32 v; memcpy(&v, iop_ptr(a), 4); return v; }
static inline u16 iop_r16(u32 a) { u16 v; memcpy(&v, iop_ptr(a), 2); return v; }
static inline void iop_w32(u32 a, u32 v) { memcpy(iop_ptr(a), &v, 4); }
static inline void iop_w16(u32 a, u16 v) { memcpy(iop_ptr(a), &v, 2); }

/* ---- the big lock: IOP code runs on one host thread at a time (iop_lib.c) */
void iop_lock(void);
void iop_unlock(void);

/* ---- modules (irx.c) */
int irx_load(const u8 *file, u32 size, const char *name);   /* load, link, start; 0 on success */
void irx_export(const char *lib, u32 table);                /* a library registered by a module */
u32 irx_find_export(const char *lib, int index);            /* address of an exported function */

/* ---- system modules (iop_lib.c) */
IopNative iop_import(const char *lib, int index, u32 stub);  /* native function for an import */
u32 iop_alloc(u32 size);                                    /* AllocSysMemory */
u32 iop_lle_start_module(u32 entry);                        /* run a module's entry point */
int iop_lle_load(const char *path);                         /* LoadModule: 0 if it runs */
void iop_lle_clock_start(void);
void iop_lle_trans_done(int ch);                            /* a SPU2 transfer ended: its interrupt */
void iop_lle_audio(float *out, int frames);                 /* the sound device's callback adds the SPU2 */

/* ---- SPU2 (spu2.c) */
void spu2_init(void);
void spu2_set_param(u32 entry, u32 value);
u32 spu2_get_param(u32 entry);
void spu2_set_switch(u32 entry, u32 value);
u32 spu2_get_switch(u32 entry);
void spu2_set_addr(u32 entry, u32 value);
u32 spu2_get_addr(u32 entry);
void spu2_write_ram(u32 spu_addr, const u8 *src, u32 bytes);
void spu2_read_ram(u32 spu_addr, u8 *dst, u32 bytes);
void spu2_set_core_attr(u32 entry, u32 value);
u32 spu2_get_core_attr(u32 entry);
void spu2_set_effect(int core, u32 mode, int depth_l, int depth_r, int delay, int feedback);
u32 spu2_block_trans(int core, u32 mode, u32 iop_addr, u32 size, u32 start);
u32 spu2_block_status(int core);
void spu2_mix(float *out, int frames);                      /* 48 kHz stereo, added to out */
int spu2_take_irq(void);                                    /* cores whose IRQ address was reached (bits) */
