/*
 * RSSD: the game's own sound driver on the IOP (SSD.IRX / RSSD.IRX, by Dimps), server 0x900.
 *
 * Placeholder until the driver is reimplemented: it accepts every request without playing
 * anything, and answers the start-up handshake the EE side (SsdEE) waits for. The driver talks
 * back to the EE through the EE's own RPC server 0x901; the command number is the RPC function
 * number and the data a 32-byte message. 0xF0 ends initialisation: +0x04 status (0 = ok).
 */
#include <stdio.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"
#include "iop.h"

#define EE_SERVER 0x901

u32 srv_rssd(Ctx *c, u32 fn, u8 *in, u32 in_size, u8 *out, u32 out_size) {
    (void)c;
    (void)in;
    (void)out;
    static u32 seen[256];
    if (fn < 256 && !seen[fn]++) rt_log("rssd", "fn %u (%u bytes in, %u out): not implemented", fn, in_size, out_size);
    if (fn == 1) {
        u8 msg[32] = {0};
        u32 version = 0x04052700;
        memcpy(msg + 0x10, &version, 4);
        iop_call_ee(EE_SERVER, 0xF0, msg, sizeof msg);
    }
    return 0;
}
