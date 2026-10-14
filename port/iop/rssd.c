/*
 * RSSD: the game's own sound driver on the IOP (SSD.IRX / RSSD.IRX, by Dimps), server 0x900.
 *
 * Placeholder until the driver is reimplemented: it accepts every request without playing
 * anything, and answers the start-up handshake the EE side (SsdEE) waits for. The driver talks
 * back to the EE through the EE's own RPC server 0x901; the command number is the RPC function
 * number and the data a 32-byte message. 0xF0 ends initialisation: +0x04 status (0 = ok).
 * 0x25 answers each chunk of a data transfer (EE commands 0x20, 0x21).
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"
#include "iop.h"

#define EE_SERVER 0x901

u32 srv_rssd(Ctx *c, u32 fn, u8 *in, u32 in_size, u8 *out, u32 out_size) {
    (void)c;
    (void)in;
    /* every reply (32 bytes) echoes the command at +0 (s16), +2 is an error flag, +4 a result
     * (for a data transfer the game keeps it as the bank's handle) */
    static u32 next_result = 1;
    if (out_size >= 8) {
        u16 cmd = (u16)fn;
        u32 result = next_result++;
        /* 0x55: is this sound (looping effects) still playing? 1 = yes. Anything else makes the
         * game start it again through a path that indexes its slot table with the whole handle
         * (slot << 16 | id) and reads far outside memory (0x00351220 -> 0x001B5CF0) */
        if (fn == 0x55) result = 1;
        memset(out, 0, out_size < 32 ? out_size : 32);
        memcpy(out, &cmd, 2);
        memcpy(out + 4, &result, 4);
    }
    static u32 seen[256];
    if ((fn < 256 && !seen[fn]++) || rt_verbose > 1) rt_log("rssd", "fn %u (%u bytes in, %u out): not implemented", fn, in_size, out_size);
    if (fn == 1) {
        u8 msg[32] = {0};
        u32 version = 0x04052700;
        memcpy(msg + 0x10, &version, 4);
        iop_call_ee(EE_SERVER, 0xF0, msg, sizeof msg);
    }
    {   /* SSTHEH_RSSD_DUMP=dir: every request's data, one file each (tests) */
        static const char *dir = (const char *)1;
        static u32 nreq;
        if (dir == (const char *)1) dir = getenv("SSTHEH_RSSD_DUMP");
        if (dir) {
            char path[512];
            snprintf(path, sizeof path, "%s/%05u_%03X_%u.bin", dir, nreq++, fn, in_size);
            FILE *f = fopen(path, "wb");
            if (f) { fwrite(in, 1, in_size, f); fclose(f); }
        }
    }
    if (fn == 0x20 || fn == 0x21) {
        /* a chunk of sound data was sent (0x20 first, 0x21 the next ones): 0x25 "chunk received",
         * +0x10 status (>= 0: go on with the next chunk or finish) */
        u8 msg[32] = {0};
        iop_call_ee(EE_SERVER, 0x25, msg, sizeof msg);
    }
    return out_size < 32 ? out_size : 32;
}
