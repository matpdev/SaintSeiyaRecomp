/*
 * SPU2, as libsd shows it: 2 cores of 24 voices over 2 MB of sound memory, at 48 kHz.
 *
 * Voices play PS-ADPCM: 16-byte blocks { shift | filter << 4, flags, 14 bytes of 4-bit samples }
 * (28 samples); flags bit 0 ends the block's loop (ENDX), bit 1 repeats from the loop address, bit 2
 * marks the loop start. The pitch is a 4.12 step (0x1000 = 48 kHz). The envelope is the SPU's ADSR
 * (attack, decay to the sustain level, sustain, release on key off). Volumes are fixed (bit 15 clear:
 * a signed 15-bit level) or sweeps, taken here at full level. A voice reaches the core's dry output
 * when its VMIX bits say so; core 0's output goes through core 1, which is the output.
 *
 * libsd's entries: core in bit 0, voice in bits 1-5, the register in bits 8-15 (see lle.h).
 * Addresses are bytes. Block transfers (ADMA) stream 16-bit stereo PCM into a core's sound data
 * input: 512 bytes of left, then 512 of right; a looping transfer raises the transfer interrupt
 * at each half of its buffer.
 */
#include <pthread.h>
#include <stdio.h>
#include <string.h>

#include "runtime.h"
#include "lle.h"

#define RAM_BYTES 0x200000u

enum { ENV_OFF, ENV_ATTACK, ENV_DECAY, ENV_SUSTAIN, ENV_RELEASE };

typedef struct {
    u16 voll, volr, pitch, adsr1, adsr2;
    u32 ssa, lsa, nax;              /* byte addresses */
    int env, phase, env_counter;
    u32 counter;                    /* 12-bit fraction of the next sample */
    s16 hist[2];                    /* ADPCM filter history */
    s16 dec[28];
    int dec_pos;                    /* 28: decode the block at nax next */
    u8 flags;                       /* of the block being played */
    s16 interp[4];                  /* the last samples, for interpolation */
} Voice;

typedef struct {
    Voice v[24];
    u32 vmixl, vmixr, vmixel, vmixer, endx, pmon, non, mmix;
    u16 mvoll, mvolr, evoll, evolr, avoll, avolr, bvoll, bvolr;
    u32 attr, irqa, esa, eea, tsa;
    /* block transfer (ADMA) */
    int adma_on, adma_loop;
    u32 adma_addr, adma_size, adma_pos;
} Core;

static Core core[2];
static u16 ram[RAM_BYTES / 2];
static pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
static volatile int irq_bits;

static const int filt0[5] = {0, 60, 115, 98, 122}, filt1[5] = {0, 0, -52, -55, -60};

void spu2_init(void) {
    pthread_mutex_lock(&lock);
    memset(core, 0, sizeof core);
    for (int c = 0; c < 2; c++)
        for (int i = 0; i < 24; i++) core[c].v[i].dec_pos = 28;
    pthread_mutex_unlock(&lock);
    rt_log("spu2", "init");
}

static float vol(u16 v) {
    if (v & 0x8000) return 1.0f;                    /* a sweep: taken at full level */
    return (float)(s16)(v << 1) / 32768.0f;
}

/* ---------------------------------------------------------------------------------------- registers */

#define CORE(e) (&core[(e) & 1])
#define VOICE(e) (&core[(e) & 1].v[(((e) >> 1) & 31) % 24])

void spu2_set_param(u32 e, u32 value) {
    pthread_mutex_lock(&lock);
    Core *c = CORE(e);
    Voice *v = VOICE(e);
    u16 x = (u16)value;
    switch ((e >> 8) & 0xFF) {
    case 0x00: v->voll = x; break;
    case 0x01: v->volr = x; break;
    case 0x02: v->pitch = x; break;
    case 0x03: v->adsr1 = x; break;
    case 0x04: v->adsr2 = x; break;
    case 0x05: v->env = x; break;
    case 0x08: c->mmix = x; break;
    case 0x09: c->mvoll = x; break;
    case 0x0A: c->mvolr = x; break;
    case 0x0B: c->evoll = x; break;
    case 0x0C: c->evolr = x; break;
    case 0x0D: c->avoll = x; break;
    case 0x0E: c->avolr = x; break;
    case 0x0F: c->bvoll = x; break;
    case 0x10: c->bvolr = x; break;
    default: rt_log("spu2", "SetParam %04X = %04X", e, value); break;
    }
    pthread_mutex_unlock(&lock);
}

u32 spu2_get_param(u32 e) {
    pthread_mutex_lock(&lock);
    Core *c = CORE(e);
    Voice *v = VOICE(e);
    u32 r = 0;
    switch ((e >> 8) & 0xFF) {
    case 0x00: r = v->voll; break;
    case 0x01: r = v->volr; break;
    case 0x02: r = v->pitch; break;
    case 0x03: r = v->adsr1; break;
    case 0x04: r = v->adsr2; break;
    case 0x05: r = (u32)v->env; break;
    case 0x06: r = (u32)(u16)(s16)(vol(v->voll) * v->env); break;
    case 0x07: r = (u32)(u16)(s16)(vol(v->volr) * v->env); break;
    case 0x08: r = c->mmix; break;
    case 0x09: r = c->mvoll; break;
    case 0x0A: r = c->mvolr; break;
    default: break;
    }
    pthread_mutex_unlock(&lock);
    return r;
}

static void key_on(Core *c, int i) {
    Voice *v = &c->v[i];
    if (rt_verbose > 2)
        rt_log("spu2", "key on %d:%02d at %06X pitch %04X adsr %04X %04X vol %04X %04X mix %d%d", (int)(c - core), i, v->ssa,
               v->pitch, v->adsr1, v->adsr2, v->voll, v->volr, (c->vmixl >> i) & 1, (c->vmixr >> i) & 1);
    v->nax = v->ssa;
    v->dec_pos = 28;
    v->counter = 0;
    v->hist[0] = v->hist[1] = 0;
    memset(v->interp, 0, sizeof v->interp);
    v->env = 0;
    v->env_counter = 0;
    v->phase = ENV_ATTACK;
    c->endx &= ~(1u << i);
}

void spu2_set_switch(u32 e, u32 value) {
    pthread_mutex_lock(&lock);
    Core *c = CORE(e);
    value &= 0xFFFFFF;
    switch ((e >> 8) & 0xFF) {
    case 0x13: c->pmon = value; break;
    case 0x14: c->non = value; break;
    case 0x15: for (int i = 0; i < 24; i++) if (value >> i & 1) key_on(c, i); break;
    case 0x16:
        for (int i = 0; i < 24; i++)
            if ((value >> i & 1) && c->v[i].phase != ENV_OFF) { c->v[i].phase = ENV_RELEASE; c->v[i].env_counter = 0; }
        break;
    case 0x17: c->endx = 0; break;
    case 0x18: c->vmixl = value; break;
    case 0x19: c->vmixel = value; if (rt_verbose > 2) rt_log("spu2", "core %u VMIXEL %06X", e & 1, value); break;
    case 0x1A: c->vmixr = value; break;
    case 0x1B: c->vmixer = value; break;
    default: rt_log("spu2", "SetSwitch %04X = %06X", e, value); break;
    }
    pthread_mutex_unlock(&lock);
}

u32 spu2_get_switch(u32 e) {
    pthread_mutex_lock(&lock);
    Core *c = CORE(e);
    u32 r = 0;
    switch ((e >> 8) & 0xFF) {
    case 0x13: r = c->pmon; break;
    case 0x14: r = c->non; break;
    case 0x17: r = c->endx; break;
    case 0x18: r = c->vmixl; break;
    case 0x19: r = c->vmixel; break;
    case 0x1A: r = c->vmixr; break;
    case 0x1B: r = c->vmixer; break;
    default: break;
    }
    pthread_mutex_unlock(&lock);
    return r;
}

void spu2_set_addr(u32 e, u32 value) {
    pthread_mutex_lock(&lock);
    Core *c = CORE(e);
    Voice *v = VOICE(e);
    value &= RAM_BYTES - 1;
    switch ((e >> 8) & 0xFF) {
    case 0x1C: c->esa = value; break;
    case 0x1D: c->eea = value; break;
    case 0x1E: c->tsa = value; break;
    case 0x1F: c->irqa = value; break;
    case 0x20: v->ssa = value; break;
    case 0x21: v->lsa = value; break;
    case 0x22: v->nax = value; break;
    default: break;
    }
    pthread_mutex_unlock(&lock);
}

u32 spu2_get_addr(u32 e) {
    pthread_mutex_lock(&lock);
    Core *c = CORE(e);
    Voice *v = VOICE(e);
    u32 r = 0;
    switch ((e >> 8) & 0xFF) {
    case 0x1C: r = c->esa; break;
    case 0x1D: r = c->eea; break;
    case 0x1E: r = c->tsa; break;
    case 0x1F: r = c->irqa; break;
    case 0x20: r = v->ssa; break;
    case 0x21: r = v->lsa; break;
    case 0x22: r = v->nax; break;
    default: break;
    }
    pthread_mutex_unlock(&lock);
    return r;
}

void spu2_set_core_attr(u32 e, u32 value) {
    pthread_mutex_lock(&lock);
    Core *c = CORE(e);
    u32 bit = 1u << ((e >> 1) & 7);                 /* EFFECT_ENABLE 2, IRQ_ENABLE 4, MUTE 6, NOISE_CLK 8, SPDIF 0xA */
    if (rt_verbose > 2) rt_log("spu2", "core %u attr %X = %u", e & 1, e & ~1u, value);
    if (value) c->attr |= bit; else c->attr &= ~bit;
    pthread_mutex_unlock(&lock);
}

u32 spu2_get_core_attr(u32 e) {
    Core *c = CORE(e);
    return (c->attr >> ((e >> 1) & 7)) & 1;
}

void spu2_set_effect(int c, u32 mode, int depth_l, int depth_r, int delay, int feedback) {
    (void)c; (void)mode; (void)depth_l; (void)depth_r; (void)delay; (void)feedback;
}

void spu2_write_ram(u32 a, const u8 *src, u32 bytes) {
    pthread_mutex_lock(&lock);
    for (u32 i = 0; i < bytes; i++) ((u8 *)ram)[(a + i) & (RAM_BYTES - 1)] = src[i];
    pthread_mutex_unlock(&lock);
}

void spu2_read_ram(u32 a, u8 *dst, u32 bytes) {
    pthread_mutex_lock(&lock);
    for (u32 i = 0; i < bytes; i++) dst[i] = ((u8 *)ram)[(a + i) & (RAM_BYTES - 1)];
    pthread_mutex_unlock(&lock);
}

u32 spu2_block_trans(int ci, u32 mode, u32 iop_addr, u32 size, u32 start) {
    (void)start;
    pthread_mutex_lock(&lock);
    Core *c = &core[ci];
    if ((mode & 3) == 2) c->adma_on = 0;            /* STOP */
    else if ((mode & 3) == 0) {
        c->adma_on = 1;
        c->adma_loop = (mode & 0x10) != 0;
        c->adma_addr = iop_addr;
        c->adma_size = size & ~0x3FFu;
        c->adma_pos = 0;
    }
    pthread_mutex_unlock(&lock);
    rt_log("spu2", "BlockTrans core %d mode %X iop %08X size %X", ci, mode, iop_addr, size);
    return 0;
}

u32 spu2_block_status(int ci) {
    Core *c = &core[ci];
    if (!c->adma_on) return 0;
    u32 half = c->adma_pos >= c->adma_size / 2;
    return (half << 24) | ((c->adma_addr + c->adma_pos) & 0xFFFFFF);
}

int spu2_take_irq(void) { return __atomic_exchange_n(&irq_bits, 0, __ATOMIC_ACQ_REL); }

/* ---------------------------------------------------------------------------------------- voices */

static void decode_block(Core *c, int ci, Voice *v) {
    const u8 *b = (const u8 *)ram + (v->nax & (RAM_BYTES - 1) & ~15u);
    int shift = b[0] & 15, f = (b[0] >> 4) & 7;
    if (f > 4) f = 4;
    if (shift > 12) shift = 9;
    v->flags = b[1];
    if (v->flags & 4) v->lsa = v->nax & ~15u;
    if ((c->attr & 4) && (c->irqa & ~15u) == (v->nax & ~15u)) __atomic_or_fetch(&irq_bits, 1 << ci, __ATOMIC_RELEASE);
    for (int i = 0; i < 28; i++) {
        int nib = (b[2 + i / 2] >> ((i & 1) * 4)) & 15;
        int s = (s16)(nib << 12) >> shift;
        s += (v->hist[0] * filt0[f] + v->hist[1] * filt1[f] + 32) >> 6;
        if (s > 32767) s = 32767;
        if (s < -32768) s = -32768;
        v->hist[1] = v->hist[0];
        v->hist[0] = (s16)s;
        v->dec[i] = (s16)s;
    }
    v->dec_pos = 0;
}

static s16 next_sample(Core *c, int ci, int i) {
    Voice *v = &c->v[i];
    if (v->dec_pos >= 28) decode_block(c, ci, v);
    s16 s = v->dec[v->dec_pos++];
    if (v->dec_pos >= 28) {                          /* the block is done: where next */
        if (v->flags & 1) {
            c->endx |= 1u << i;
            v->nax = v->lsa;
            if (!(v->flags & 2)) { v->phase = ENV_OFF; v->env = 0; }
        } else
            v->nax = (v->nax + 16) & (RAM_BYTES - 1);
    }
    return s;
}

static void envelope(Voice *v) {
    int rate, exp, dec;
    switch (v->phase) {
    case ENV_ATTACK: rate = (v->adsr1 >> 8) & 0x7F; exp = v->adsr1 >> 15; dec = 0; break;
    case ENV_DECAY: rate = ((v->adsr1 >> 4) & 15) << 2; exp = 1; dec = 1; break;
    case ENV_SUSTAIN: rate = (v->adsr2 >> 6) & 0x7F; exp = v->adsr2 >> 15; dec = (v->adsr2 >> 14) & 1; break;
    case ENV_RELEASE: rate = (v->adsr2 & 31) << 2; exp = (v->adsr2 >> 5) & 1; dec = 1; break;
    default: return;
    }
    int shift = rate >> 2, step = rate & 3;
    int s = dec ? -8 + step : 7 - step;
    int cycles = 1 << (shift > 11 ? shift - 11 : 0);
    int amount = s << (shift < 11 ? 11 - shift : 0);
    if (exp && !dec && v->env > 0x6000) cycles *= 4;
    if (exp && dec) amount = amount * v->env >> 15;
    if (++v->env_counter >= cycles) {
        v->env_counter = 0;
        v->env += amount;
        if (v->env > 0x7FFF) v->env = 0x7FFF;
        if (v->env < 0) v->env = 0;
    }
    switch (v->phase) {
    case ENV_ATTACK: if (v->env >= 0x7FFF) { v->phase = ENV_DECAY; v->env_counter = 0; } break;
    case ENV_DECAY: if (v->env <= (((v->adsr1 & 15) + 1) << 11)) { v->phase = ENV_SUSTAIN; v->env_counter = 0; } break;
    case ENV_RELEASE: if (v->env <= 0) v->phase = ENV_OFF; break;
    default: break;
    }
}

/* Catmull-Rom over the last 4 samples, t in [0, 1) between interp[1] and interp[2]. */
static float interpolate(const s16 *p, float t) {
    float a = p[0], b = p[1], c = p[2], d = p[3];
    return b + 0.5f * t * (c - a + t * (2 * a - 5 * b + 4 * c - d + t * (3 * (b - c) + d - a)));
}

static void mix_core(int ci, float *l, float *r, int frames) {
    Core *c = &core[ci];
    for (int i = 0; i < 24; i++) {
        Voice *v = &c->v[i];
        if (v->phase == ENV_OFF) continue;
        int to_l = (c->vmixl >> i) & 1, to_r = (c->vmixr >> i) & 1;
        float vl = vol(v->voll) * to_l, vr = vol(v->volr) * to_r;
        u32 pitch = v->pitch > 0x3FFF ? 0x3FFF : v->pitch;
        for (int f = 0; f < frames && v->phase != ENV_OFF; f++) {
            v->counter += pitch;
            while (v->counter >= 0x1000) {
                v->counter -= 0x1000;
                memmove(v->interp, v->interp + 1, 3 * sizeof(s16));
                v->interp[3] = next_sample(c, ci, i);
            }
            float s = interpolate(v->interp, (float)v->counter / 4096.0f) * (float)v->env / (32768.0f * 32768.0f);
            l[f] += s * vl;
            r[f] += s * vr;
            envelope(v);
        }
    }
    if (c->adma_on && c->adma_size) {               /* the sound data input */
        float bl = vol(c->bvoll), br = vol(c->bvolr);
        for (int f = 0; f < frames; f++) {
            u32 blk = c->adma_pos & ~0x3FFu, k = (c->adma_pos & 0x3FF) / 2;
            s16 sl = (s16)iop_r16(c->adma_addr + blk + k * 2), sr = (s16)iop_r16(c->adma_addr + blk + 0x200 + k * 2);
            l[f] += sl / 32768.0f * bl;
            r[f] += sr / 32768.0f * br;
            u32 before = c->adma_pos;
            c->adma_pos += 2;
            if ((c->adma_pos & 0x1FF) == 0) c->adma_pos += 0x200;   /* skip the right half of the block */
            if (before < c->adma_size / 2 && c->adma_pos >= c->adma_size / 2) iop_lle_trans_done(ci);
            if (c->adma_pos >= c->adma_size) {
                iop_lle_trans_done(ci);
                if (c->adma_loop) c->adma_pos = 0;
                else { c->adma_on = 0; break; }
            }
        }
    }
}

void spu2_mix(float *out, int frames) {
    float l0[256], r0[256], l1[256], r1[256];
    if (frames > 256) frames = 256;
    memset(l0, 0, sizeof l0); memset(r0, 0, sizeof r0);
    memset(l1, 0, sizeof l1); memset(r1, 0, sizeof r1);
    pthread_mutex_lock(&lock);
    mix_core(0, l0, r0, frames);
    mix_core(1, l1, r1, frames);
    float m0l = vol(core[0].mvoll), m0r = vol(core[0].mvolr), m1l = vol(core[1].mvoll), m1r = vol(core[1].mvolr);
    pthread_mutex_unlock(&lock);
    for (int f = 0; f < frames; f++) {
        out[f * 2] += (l0[f] * m0l + l1[f]) * m1l;
        out[f * 2 + 1] += (r0[f] * m0r + r1[f]) * m1r;
    }
}
