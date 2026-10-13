/* Services shared by the runtime's parts (not used by the recompiled code). */
#pragma once
#include "r5900.h"

_Noreturn void rt_fatal(Ctx *c, const char *fmt, ...) __attribute__((format(printf, 2, 3)));
void rt_log(const char *area, const char *fmt, ...) __attribute__((format(printf, 2, 3)));
extern int rt_verbose;

const FuncEntry *rt_find(u32 addr);
const char *rt_name_of(u32 addr);

/* kernel.c */
void kernel_init(void);
void kernel_run(u32 entry);
u32 kernel_vblank_count(void);

/* memory.c */
void memory_init(void);
int memory_load_elf(const char *path, u32 *entry);
