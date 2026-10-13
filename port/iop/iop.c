/*
 * IOP side of the SIF command protocol, reimplemented.
 *
 * Every SIF packet starts with a header: { u32 psize:8, dsize:24; u32 dest; s32 cid; u32 opt; }.
 * Commands 0x80000000+ are system commands (set EE address, RPC bind/call/end, ...).
 * For now the packets are only logged, which is enough to see which IOP services the game uses.
 */
#include <stdio.h>

#include "r5900.h"
#include "runtime.h"
#include "kernel.h"

void sif_packet(Ctx *c, u32 src, u32 dst, u32 size) {
    if (size < 16) return;
    u32 psize = rd32(c, src) & 0xFF;
    u32 cid = rd32(c, src + 8);
    rt_log("iop", "packet cid %08X, %u bytes (header psize %u) for IOP %08X", cid, size, psize, dst);
}
