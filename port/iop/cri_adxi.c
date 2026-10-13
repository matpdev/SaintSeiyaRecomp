/*
 * CRI_ADXI.IRX: the IOP half of CRI's PS2 sound output (PS2RNA), server 0x90000200.
 *
 * Placeholder until sound is reimplemented: the EE asks the IOP to create objects (fn 2: the PS2RNA
 * object; 0x422: SJUNI_CreateRmt, a remote stream buffer; each returns a handle that must not be 0)
 * and then drives them. Seen so far: 0x403 init, 0x40C set output rate (48000). Nothing is played;
 * every request is logged once.
 */
#include <stdio.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"
#include "iop.h"

u32 srv_cri_adxi(Ctx *c, u32 fn, u8 *in, u32 in_size, u8 *out, u32 out_size) {
    (void)c;
    (void)in;
    static u32 seen[64], next_handle = 0x00180000;
    if ((fn < 64 && !seen[fn]++) || rt_verbose > 1) {
        u32 a[4] = {0};
        memcpy(a, in, in_size < 16 ? in_size : 16);
        rt_log("adxi", "fn %u (%u bytes in, %u out) %08X %08X %08X %08X", fn, in_size, out_size, a[0], a[1], a[2], a[3]);
    }
    /* creation calls (2: PS2RNA object, 0x422: SJUNI_CreateRmt, ...) answer a handle; for now every
     * call that expects 4 bytes gets one, which is also a harmless "ok" for setters */
    if (out_size == 4) {
        u32 h = next_handle;
        next_handle += 0x100;
        memcpy(out, &h, 4);
        return 4;
    }
    return 0;
}
