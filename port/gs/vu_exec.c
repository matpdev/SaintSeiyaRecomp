/*
 * VU microprogram execution. Placeholder: counts the program starts per address until the
 * interpreter is written.
 */
#include <stdio.h>

#include "r5900.h"
#include "runtime.h"
#include "vu.h"

static u32 starts[2][0x800];

void vu_start(int vu, int addr, u32 itop) {
    (void)itop;
    if (addr < 0) return;
    if (!starts[vu][addr & 0x7FF]++) rt_log("vu", "VU%d program at %03X first started", vu, addr);
}
