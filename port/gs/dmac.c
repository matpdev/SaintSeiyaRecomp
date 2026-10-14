/*
 * The EE's DMA controller (DMAC), the part the game uses to feed the graphics hardware.
 *
 * A transfer starts when the game writes CHCR with STR (bit 8) set. It is carried out at once:
 * the data is walked (normal mode: QWC quadwords at MADR; chain mode: DMA tags from TADR) and
 * handed to the channel's destination, then STR is cleared, the channel's bit in D_STAT is set
 * and, if enabled in D_STAT's mask, the DMAC interrupt for the channel is raised.
 *
 * Channel registers (base + offset): CHCR 0x00, MADR 0x10, QWC 0x20, TADR 0x30, ASR0 0x40,
 * ASR1 0x50, SADR 0x80. CHCR: DIR 0, MOD 2-3 (0 normal, 1 chain, 2 interleave), ASP 4-5, TTE 6,
 * TIE 7, STR 8, TAG 16-31.
 * Source-chain tag (one quadword): QWC 0-15, PCE 26-27, ID 28-30, IRQ 31, ADDR 32-62 (bit 63: SPR).
 * IDs: 0 refe, 1 cnt, 2 next, 3 ref, 4 refs, 5 call, 6 ret, 7 end.
 *
 * VIF1 (1) and GIF (2) transfers run on their own thread, as the VU1 and the GS run beside the EE
 * on the hardware: starting one queues it and leaves STR set; the thread carries them out in order,
 * then clears STR, sets D_STAT and raises the interrupt. While any is pending, VIF1_STAT, GIF_STAT
 * and VPU-STAT read busy (dmac_gs_busy). SSTHEH_GSTHREAD=0: everything at once on the EE's thread.
 */
#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"
#include "kernel.h"
#include "gs.h"

static const u32 base[10] = {0x10008000, 0x10009000, 0x1000A000, 0x1000B000, 0x1000B400,
                             0x1000C000, 0x1000C400, 0x1000C800, 0x1000D000, 0x1000D400};
static const char *const names[10] = {"VIF0", "VIF1", "GIF", "fromIPU", "toIPU", "SIF0", "SIF1", "SIF2",
                                      "fromSPR", "toSPR"};
static volatile u32 d_stat;     /* 0-9 channel done, 16-25 interrupt mask */
static u32 reg[10][0x100 / 4];  /* each channel's registers, by offset / 4 */

int dmac_channel_of(u32 a) {
    for (int i = 0; i < 10; i++)
        if (a >= base[i] && a < base[i] + 0x100) return i;
    return -1;
}

/* Host pointer to `qwc` quadwords of guest memory (RAM or scratchpad), or NULL. */
static const u8 *mem(u32 addr, int spr) {
    if (spr || (addr & 0x80000000u)) return rt_spr + (addr & 0x3FF0);
    return rt_ptr(addr & 0x01FFFFF0);
}

static void deliver(Ctx *c, int ch, const u8 *data, u32 qwc) {
    (void)c;
    if (!data || !qwc) return;
    if (ch == 2) gif_dma(data, qwc);
    else if (ch == 1) vif1_dma(data, qwc);
    else if (ch == 0) vif0_dma(data, qwc);
}

static void run_chain(Ctx *c, int ch) {
    u32 *r = reg[ch];
    u32 tadr = r[0x30 / 4], asr[2] = {r[0x40 / 4], r[0x50 / 4]};
    int asp = (r[0] >> 4) & 3, tte = (r[0] >> 6) & 1;
    for (int guard = 0; guard < 100000; guard++) {
        const u8 *t = mem(tadr, 0);
        if (!t) { rt_log("dmac", "%s: tag address %08X unmapped", names[ch], tadr); break; }
        u64 tag;
        memcpy(&tag, t, 8);
        u32 qwc = tag & 0xFFFF, id = (tag >> 28) & 7, addr = (u32)(tag >> 32) & 0x7FFFFFF0, spr = tag >> 63;
        int irq = (tag >> 31) & 1;
        if (tte && (ch == 0 || ch == 1)) vif_tag(ch, t + 8);   /* the tag's upper half: two VIF codes */
        r[0] = (r[0] & 0xFFFF) | (u32)(tag & 0xFFFF0000);       /* CHCR.TAG = upper 16 bits of the tag */
        u32 next = tadr + 16;
        switch (id) {
        case 0: deliver(c, ch, mem(addr, spr), qwc); next = 0; break;                     /* refe */
        case 1: deliver(c, ch, t + 16, qwc); next = tadr + 16 + qwc * 16; break;          /* cnt */
        case 2: deliver(c, ch, t + 16, qwc); next = addr; break;                          /* next */
        case 3: case 4: deliver(c, ch, mem(addr, spr), qwc); next = tadr + 16; break;     /* ref, refs */
        case 5:                                                                           /* call */
            deliver(c, ch, t + 16, qwc);
            if (asp < 2) asr[asp++] = tadr + 16 + qwc * 16;
            next = addr;
            break;
        case 6:                                                                           /* ret */
            deliver(c, ch, t + 16, qwc);
            if (asp > 0) next = asr[--asp];
            else next = 0;
            break;
        case 7: deliver(c, ch, t + 16, qwc); next = 0; break;                             /* end */
        }
        if (next == 0 || (irq && (r[0] & 0x80))) break;
        tadr = next;
    }
    r[0x30 / 4] = tadr;
    r[0x20 / 4] = 0;
}

/* Scratchpad <-> RAM: fromSPR (8) copies QWC quadwords from SPR at SADR to MADR; toSPR (9) copies
 * from MADR (or a source chain) into SPR at SADR. A destination chain on fromSPR reads its tags
 * from the scratchpad data: ID 0 cnts (data follows, to MADR), 1 cnt, 7 end; ADDR = the RAM address. */
static void spr_copy(int to_spr, u32 ram, u32 spr, u32 qwc) {
    for (u32 i = 0; i < qwc; i++) {
        u8 *m = rt_ptr((ram + i * 16) & 0x01FFFFF0);
        u8 *s = rt_spr + ((spr + i * 16) & 0x3FF0);
        if (!m) continue;
        if (to_spr) memcpy(s, m, 16);
        else memcpy(m, s, 16);
    }
}

static void spr_transfer(Ctx *c, int ch) {
    (void)c;
    u32 *r = reg[ch];
    int mod = (r[0] >> 2) & 3;
    u32 sadr = r[0x80 / 4] & 0x3FF0;
    if (ch == 9 && mod == 1) {                      /* toSPR, source chain */
        u32 tadr = r[0x30 / 4];
        for (int guard = 0; guard < 100000; guard++) {
            const u8 *t = mem(tadr, 0);
            if (!t) break;
            u64 tag;
            memcpy(&tag, t, 8);
            u32 qwc = tag & 0xFFFF, id = (tag >> 28) & 7, addr = (u32)(tag >> 32) & 0x7FFFFFF0;
            u32 src = (id == 0 || id == 3 || id == 4) ? addr : tadr + 16, next = 0;
            spr_copy(1, src, sadr, qwc);
            sadr += qwc * 16;
            if (id == 1) next = tadr + 16 + qwc * 16;
            else if (id == 2) next = addr;
            else if (id == 3 || id == 4) next = tadr + 16;
            if (!next || id == 0 || id == 7) break;
            tadr = next;
        }
    } else if (ch == 8 && mod == 1) {               /* fromSPR, destination chain */
        for (int guard = 0; guard < 100000; guard++) {
            u64 tag;
            memcpy(&tag, rt_spr + sadr, 8);
            sadr = (sadr + 16) & 0x3FF0;
            u32 qwc = tag & 0xFFFF, id = (tag >> 28) & 7, addr = (u32)(tag >> 32) & 0x7FFFFFF0;
            spr_copy(0, addr, sadr, qwc);
            sadr = (sadr + qwc * 16) & 0x3FF0;
            if (id == 7) break;
        }
    } else {
        spr_copy(ch == 9, r[0x10 / 4], sadr, r[0x20 / 4]);
        r[0x10 / 4] += r[0x20 / 4] * 16;
        sadr += r[0x20 / 4] * 16;
    }
    r[0x80 / 4] = sadr;
}

static void finish(int ch) {
    u32 *r = reg[ch];
    r[0x20 / 4] = 0;
    __atomic_and_fetch(&r[0], ~0x100u, __ATOMIC_RELEASE);
    __atomic_or_fetch(&d_stat, 1u << ch, __ATOMIC_RELEASE);
    kernel_raise_dmac(ch);                          /* the kernel runs the handlers enabled for it */
}

static void transfer(Ctx *c, int ch) {
    u32 *r = reg[ch];
    int mod = (r[0] >> 2) & 3;
    if (mod == 1) run_chain(c, ch);
    else deliver(c, ch, mem(r[0x10 / 4], r[0x10 / 4] >> 31), r[0x20 / 4]);
}

/* ---- the VIF1 / GIF thread */
static int async = -1;
static pthread_mutex_t qlock = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t qcond = PTHREAD_COND_INITIALIZER, qdone = PTHREAD_COND_INITIALIZER;
static int queue[64], qhead, qcount;
static volatile int outstanding;     /* queued or running */

static void *gs_thread(void *arg) {
    (void)arg;
    for (;;) {
        pthread_mutex_lock(&qlock);
        while (!qcount) pthread_cond_wait(&qcond, &qlock);
        int ch = queue[qhead];
        pthread_mutex_unlock(&qlock);
        transfer(NULL, ch);
        pthread_mutex_lock(&qlock);
        qhead = (qhead + 1) % 64;
        qcount--;
        pthread_cond_broadcast(&qdone);
        pthread_mutex_unlock(&qlock);
        finish(ch);
        __atomic_sub_fetch(&outstanding, 1, __ATOMIC_RELEASE);
    }
    return NULL;
}

int dmac_gs_busy(void) { return __atomic_load_n(&outstanding, __ATOMIC_ACQUIRE) != 0; }

static void queue_transfer(int ch) {
    __atomic_add_fetch(&outstanding, 1, __ATOMIC_ACQ_REL);
    pthread_mutex_lock(&qlock);
    while (qcount == 64) pthread_cond_wait(&qdone, &qlock);
    queue[(qhead + qcount) % 64] = ch;
    qcount++;
    pthread_cond_signal(&qcond);
    pthread_mutex_unlock(&qlock);
}

static void start(Ctx *c, int ch) {
    u32 *r = reg[ch];
    int mod = (r[0] >> 2) & 3;
    if (ch == 8 || ch == 9) {
        spr_transfer(c, ch);
        finish(ch);
        return;
    }
    if (ch == 5 || ch == 6 || ch == 7) {            /* SIF: handled by the SIF syscalls */
        r[0] &= ~0x100u;
        return;
    }
    (void)mod;
    if (async < 0) {
        const char *e = getenv("SSTHEH_GSTHREAD");
        async = !(e && !atoi(e));
        if (async) {
            pthread_t t;
            pthread_create(&t, NULL, gs_thread, NULL);
            pthread_detach(t);
        }
    }
    if (async && (ch == 1 || ch == 2)) { queue_transfer(ch); return; }
    transfer(c, ch);
    finish(ch);
}

u32 dmac_read(u32 a) {
    if (a == 0x1000E010) return d_stat;
    int ch = dmac_channel_of(a);
    if (ch >= 0) return reg[ch][(a - base[ch]) / 4];
    return 0;
}

int dmac_write(Ctx *c, u32 a, u32 v) {
    if (a == 0x1000E010) {                          /* D_STAT: write 1 clears a status bit, toggles a mask bit */
        __atomic_and_fetch(&d_stat, ~(v & 0x3FF), __ATOMIC_ACQ_REL);
        __atomic_xor_fetch(&d_stat, v & 0x3FF0000, __ATOMIC_ACQ_REL);
        return 1;
    }
    int ch = dmac_channel_of(a);
    if (ch < 0) return 0;
    reg[ch][(a - base[ch]) / 4] = v;
    if (a == base[ch] && (v & 0x100)) start(c, ch);
    return 1;
}
