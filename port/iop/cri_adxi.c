/*
 * CRI_ADXI.IRX: the IOP half of CRI's PS2 sound output (PS2RNA), server 0x90000200.
 *
 * The EE decodes ADX into PCM and moves it to the IOP; the IOP plays it on the SPU2 and gives the
 * buffers back. The pieces, as the EE side (cri.s) uses them:
 *
 * RPC (function 0x400 + n of the EE's DTX_CallUrpc, or a plain number):
 *   2      DTX_Create { id, EE buffer, IOP buffer, size }: a pair of buffers exchanged every tick
 *          (id 0: SJX, id 1: PS2RNA).
 *   0x422  SJUNI_CreateRmt { 1, IOP buffer, ? }: a stream ("SJ") whose memory is on the IOP.
 *   0x400  SJX_Create { EE SJ, remote SJ, channel, EE SJX object }: links the EE's mirror of a
 *          remote stream to it; the handle returned comes back in SJX messages.
 *   0x408  PS2RNA create { channels, ?, SJ left, SJ right }: a voice playing those streams.
 *   others answer a handle (4 bytes) or nothing.
 *
 * DTX: the EE fills its buffer (size N), puts a sequence number at N-4 and DMAs all of it to the
 * IOP buffer; it then waits until the number at N-4 of its own buffer is greater, and hands that
 * buffer to its receive callback. Here the reply is written into the EE buffer as soon as the EE's
 * transfer arrives (iop_receive -> cri_adxi_dma).
 *
 * SJX messages (DTX 0): +0 count, entries of 16 bytes from +0x10.
 *   EE -> IOP: { 0, channel, id (u16), SJX handle, chunk address (IOP memory), chunk length }:
 *              PCM the EE has copied into the remote stream (channel 1: data).
 *   IOP -> EE: { 0, channel, -, EE SJX object, chunk address, chunk length }: the EE puts the
 *              chunk back into that channel of its mirror (channel 0: free space).
 * The streams here are drained in real time (48000 16-bit samples a second each) and their
 * chunks given back as free; nothing is played yet.
 * PS2RNA messages (DTX 1) are commands { u16 command, voice, value }; logged, answered empty.
 */
#include <stdio.h>
#include <string.h>
#include <time.h>

#include "r5900.h"
#include "runtime.h"
#include "iop.h"

#define MAX_DTX 4
#define MAX_SJX 32
#define MAX_CHUNKS 256
#define BYTES_PER_SEC (48000 * 2)

typedef struct { u32 ee_buf, iop_buf, size, used; } Dtx;
typedef struct { u32 addr, len; } Chunk;
typedef struct {
    u32 used, ee_sjx, rmt, ch;
    Chunk q[MAX_CHUNKS];        /* data waiting to be played */
    u32 head, n;
    double credit;              /* bytes that may be played */
} Sjx;

static Dtx dtx[MAX_DTX];
static Sjx sjx[MAX_SJX];
static u64 last_ns;

static u64 now_ns(void) {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (u64)ts.tv_sec * 1000000000ull + (u64)ts.tv_nsec;
}

#define SJX_HANDLE(i) (0x00190000u + (i) * 0x10)

u32 srv_cri_adxi(Ctx *c, u32 fn, u8 *in, u32 in_size, u8 *out, u32 out_size) {
    (void)c;
    static u32 seen[0x500], next_handle = 0x00180000;
    u32 a[4] = {0};
    memcpy(a, in, in_size < 16 ? in_size : 16);
    if ((fn < 0x500 && !seen[fn]++) || rt_verbose > 1)
        rt_log("adxi", "fn %u (%u bytes in, %u out) %08X %08X %08X %08X", fn, in_size, out_size, a[0], a[1], a[2], a[3]);
    u32 h = 0;
    if (fn == 2 && a[0] < MAX_DTX) {
        dtx[a[0]] = (Dtx){a[1], a[2], a[3], 1};
        h = 0x00170000 + a[0];
    } else if (fn == 0x400) {
        for (u32 i = 0; i < MAX_SJX; i++)
            if (!sjx[i].used) {
                memset(&sjx[i], 0, sizeof sjx[i]);
                sjx[i].used = 1;
                sjx[i].ee_sjx = a[3];
                sjx[i].rmt = a[1];
                sjx[i].ch = a[2];
                h = SJX_HANDLE(i);
                break;
            }
    } else if (out_size == 4) {
        /* creation calls (0x422 SJUNI_CreateRmt, 0x408 voices, ...) answer a handle; it is also a
         * harmless "ok" for setters */
        h = next_handle;
        next_handle += 0x100;
    }
    if (out_size == 4) {
        memcpy(out, &h, 4);
        return 4;
    }
    return 0;
}

static Sjx *sjx_of(u32 handle) {
    u32 i = (handle - SJX_HANDLE(0)) / 0x10;
    return i < MAX_SJX && sjx[i].used && handle == SJX_HANDLE(i) ? &sjx[i] : NULL;
}

/* Play (drop) what the elapsed time allows and write the freed chunks as SJX reply entries. */
static u32 drain(Ctx *c, u32 entries, u32 max) {
    u64 now = now_ns();
    double secs = last_ns ? (double)(now - last_ns) / 1e9 : 0;
    if (secs > 0.25) secs = 0.25;      /* after a pause, don't skip a lot of sound */
    last_ns = now;
    u32 n = 0;
    for (u32 i = 0; i < MAX_SJX && n < max; i++) {
        Sjx *s = &sjx[i];
        if (!s->used) continue;
        if (!s->n) { s->credit = 0; continue; }
        s->credit += secs * BYTES_PER_SEC;
        while (s->n && n < max && s->credit >= 2) {
            Chunk *k = &s->q[s->head];
            u32 take = s->credit >= k->len ? k->len : (u32)s->credit & ~1u;
            if (!take) break;
            u32 e = entries + n * 16;
            wr8(c, e + 0, 0);
            wr8(c, e + 1, 0);                  /* channel 0: free space */
            wr16(c, e + 2, 0);
            wr32(c, e + 4, s->ee_sjx);
            wr32(c, e + 8, k->addr);
            wr32(c, e + 12, take);
            n++;
            s->credit -= take;
            k->addr += take;
            k->len -= take;
            if (!k->len) { s->head = (s->head + 1) % MAX_CHUNKS; s->n--; }
        }
    }
    return n;
}

static void sjx_message(Ctx *c, const Dtx *d) {
    u32 count = iop_rd32(d->iop_buf);
    if (count > 0x80) count = 0x80;
    for (u32 i = 0; i < count; i++) {
        u32 e = d->iop_buf + 0x10 + i * 16;
        Sjx *s = sjx_of(iop_rd32(e + 4));
        if (!s) continue;
        if (s->n == MAX_CHUNKS) { rt_log("adxi", "SJX %08X: too many chunks", iop_rd32(e + 4)); continue; }
        s->q[(s->head + s->n) % MAX_CHUNKS] = (Chunk){iop_rd32(e + 8), iop_rd32(e + 12)};
        s->n++;
    }
    u32 max = (d->size - 0x40 - 0x10) / 16;
    if (max > 0x80) max = 0x80;
    u32 n = drain(c, d->ee_buf + 0x10, max);
    wr32(c, d->ee_buf, n);
}

static void rna_message(Ctx *c, const Dtx *d) {
    u32 count = iop_rd32(d->iop_buf);
    if (count > 0x80) count = 0x80;
    if (rt_verbose > 1)
        for (u32 i = 0; i < count; i++) {
            u32 e = d->iop_buf + 0x10 + i * 16;
            rt_log("adxi", "PS2RNA command %u voice %08X value %08X", iop_rd32(e) & 0xFFFF, iop_rd32(e + 4), iop_rd32(e + 8));
        }
    wr32(c, d->ee_buf, 0);
}

/* An EE -> IOP transfer arrived (sceSifSetDma): a DTX buffer gets its reply. */
void cri_adxi_dma(Ctx *c, u32 iop_dst, u32 size) {
    (void)size;
    for (u32 id = 0; id < MAX_DTX; id++) {
        const Dtx *d = &dtx[id];
        if (!d->used || iop_dst != (d->iop_buf & (IOP_RAM_SIZE - 1))) continue;
        u32 seq = iop_rd32(d->iop_buf + d->size - 4);
        if (id == 0) sjx_message(c, d);
        else rna_message(c, d);
        wr32(c, d->ee_buf + d->size - 4, seq + 1);
        return;
    }
}
