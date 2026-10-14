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
 *   0x408  PS2RNA create { 2, 0, SJ left, SJ right }: a voice playing those streams.
 *   0x409  PS2RNA destroy { voice }.
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
 * PS2RNA messages (DTX 1): { u16 command, voice, value }: 2 play (1), 3 channels, 4 sampling
 * rate, 5 volume (0.1 dB, 0 = full, down to -960), 8 stop (1), 9 (ignored).
 *
 * The PCM (16 bits, signed, one stream per channel) is played through SDL: the audio callback mixes
 * the playing voices at 48 kHz, reading their streams' chunks, and what it has played goes back to
 * the EE as free space at the next exchange. Without an audio device (or SSTHEH_AUDIO=0) the
 * streams are drained in real time as if played. SSTHEH_AUDIO_DUMP=file.wav records the mix.
 */
#include <math.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include <SDL3/SDL.h>

#include "r5900.h"
#include "runtime.h"
#include "iop.h"

#define MAX_DTX 4
#define MAX_SJX 32
#define MAX_VOICES 16
#define MAX_CHUNKS 256
#define MAX_FREED 256
#define OUT_RATE 48000

typedef struct { u32 ee_buf, iop_buf, size, used; } Dtx;
typedef struct { u32 addr, len; } Chunk;
typedef struct {
    u32 used, ee_sjx, rmt, ch;
    Chunk q[MAX_CHUNKS];        /* data waiting to be played */
    u32 head, n;
    Chunk freed[MAX_FREED];     /* played, to go back to the EE */
    u32 nfreed;
    double credit;              /* (no audio device) bytes that may be dropped */
} Sjx;
typedef struct {
    u32 used, handle, rmt[2], nch, rate, playing;
    float gain;
    double pos;                 /* fraction of the next source sample (resampling) */
    s16 last[2], next[2];       /* the samples around pos, per channel */
    int primed;
} Voice;

static Dtx dtx[MAX_DTX];
static Sjx sjx[MAX_SJX];
static Voice voices[MAX_VOICES];
static pthread_mutex_t alock = PTHREAD_MUTEX_INITIALIZER;   /* sjx[] and voices[] (EE thread vs audio thread) */
static int audio_state;         /* 0 not tried, 1 playing through SDL, -1 none: drain by time */
static SDL_AudioStream *stream;
static FILE *dump;
static u32 dump_bytes;
static u64 last_ns;

static u64 now_ns(void) {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (u64)ts.tv_sec * 1000000000ull + (u64)ts.tv_nsec;
}

#define SJX_HANDLE(i) (0x00190000u + (i) * 0x10)

static Sjx *sjx_of(u32 handle) {
    u32 i = (handle - SJX_HANDLE(0)) / 0x10;
    return i < MAX_SJX && sjx[i].used && handle == SJX_HANDLE(i) ? &sjx[i] : NULL;
}

static Sjx *sjx_of_rmt(u32 rmt) {
    for (u32 i = 0; i < MAX_SJX; i++)
        if (sjx[i].used && sjx[i].rmt == rmt) return &sjx[i];
    return NULL;
}

static Voice *voice_of(u32 handle) {
    for (u32 i = 0; i < MAX_VOICES; i++)
        if (voices[i].used && voices[i].handle == handle) return &voices[i];
    return NULL;
}

/* A played piece of a stream goes back to the EE (merged with the previous one when contiguous). */
static void give_back(Sjx *s, u32 addr, u32 len) {
    if (s->nfreed && s->freed[s->nfreed - 1].addr + s->freed[s->nfreed - 1].len == addr) { s->freed[s->nfreed - 1].len += len; return; }
    if (s->nfreed < MAX_FREED) s->freed[s->nfreed++] = (Chunk){addr, len};
}

/* The next 16-bit sample of a stream, or 0 (and *ok = 0) if it has none. */
static s16 take_sample(Sjx *s, int *ok) {
    while (s && s->n) {
        Chunk *k = &s->q[s->head];
        if (k->len < 2) {                                /* an odd byte left: give it back */
            if (k->len) give_back(s, k->addr, k->len);
            s->head = (s->head + 1) % MAX_CHUNKS;
            s->n--;
            continue;
        }
        s16 v;
        memcpy(&v, iop_ram + (k->addr & (IOP_RAM_SIZE - 1)), 2);
        give_back(s, k->addr, 2);
        k->addr += 2;
        k->len -= 2;
        if (!k->len) { s->head = (s->head + 1) % MAX_CHUNKS; s->n--; }
        return v;
    }
    *ok = 0;
    return 0;
}

/* A voice stops: what its streams hold goes back to the EE unplayed. */
static void voice_flush(Voice *v) {
    for (int k = 0; k < 2; k++) {
        Sjx *s = sjx_of_rmt(v->rmt[k]);
        while (s && s->n) {
            Chunk *c = &s->q[s->head];
            if (c->len) give_back(s, c->addr, c->len);
            s->head = (s->head + 1) % MAX_CHUNKS;
            s->n--;
        }
    }
    v->primed = 0;
}

static void mix(float *out, int frames) {
    memset(out, 0, (size_t)frames * 2 * sizeof *out);
    pthread_mutex_lock(&alock);
    for (int vi = 0; vi < MAX_VOICES; vi++) {
        Voice *v = &voices[vi];
        if (!v->used || !v->playing) continue;
        Sjx *src[2] = {sjx_of_rmt(v->rmt[0]), v->nch > 1 ? sjx_of_rmt(v->rmt[1]) : NULL};
        double step = (double)(v->rate ? v->rate : OUT_RATE) / OUT_RATE;
        for (int f = 0; f < frames; f++) {
            while (!v->primed || v->pos >= 1.0) {         /* advance to the source samples around pos */
                int ok = 1;
                s16 a = take_sample(src[0], &ok), b = src[1] ? take_sample(src[1], &ok) : a;
                if (!ok) { v->primed = 0; goto starved; }
                v->last[0] = v->next[0];
                v->last[1] = v->next[1];
                v->next[0] = a;
                v->next[1] = b;
                if (!v->primed) { v->last[0] = a; v->last[1] = b; v->primed = 1; v->pos = 0; }
                else v->pos -= 1.0;
            }
            {
                float t = (float)v->pos;
                float l = (v->last[0] + (v->next[0] - v->last[0]) * t) / 32768.0f;
                float r = (v->last[1] + (v->next[1] - v->last[1]) * t) / 32768.0f;
                out[f * 2] += l * v->gain;
                out[f * 2 + 1] += r * v->gain;
                v->pos += step;
            }
        }
    starved:;
    }
    pthread_mutex_unlock(&alock);
    for (int i = 0; i < frames * 2; i++) out[i] = out[i] > 1.0f ? 1.0f : out[i] < -1.0f ? -1.0f : out[i];
}

static void SDLCALL audio_cb(void *ud, SDL_AudioStream *s, int additional, int total) {
    (void)ud;
    (void)total;
    static float buf[4096 * 2];
    while (additional > 0) {
        int frames = additional / (int)(2 * sizeof(float));
        if (frames <= 0) break;
        if (frames > 4096) frames = 4096;
        mix(buf, frames);
        SDL_PutAudioStreamData(s, buf, frames * 2 * (int)sizeof(float));
        if (dump) {
            static s16 pcm[4096 * 2];
            for (int i = 0; i < frames * 2; i++) pcm[i] = (s16)(buf[i] * 32767.0f);
            fwrite(pcm, 2, (size_t)frames * 2, dump);
            dump_bytes += (u32)frames * 4;
        }
        additional -= frames * 2 * (int)sizeof(float);
    }
}

static void wav_header(FILE *f, u32 data) {
    u32 v;
    fseek(f, 0, SEEK_SET);
    fwrite("RIFF", 1, 4, f); v = 36 + data; fwrite(&v, 4, 1, f); fwrite("WAVEfmt ", 1, 8, f);
    v = 16; fwrite(&v, 4, 1, f);
    u16 fmt[2] = {1, 2}; fwrite(fmt, 2, 2, f);
    v = OUT_RATE; fwrite(&v, 4, 1, f); v = OUT_RATE * 4; fwrite(&v, 4, 1, f);
    u16 al[2] = {4, 16}; fwrite(al, 2, 2, f);
    fwrite("data", 1, 4, f); fwrite(&data, 4, 1, f);
}

static void dump_close(void) {
    if (!dump) return;
    SDL_LockAudioStream(stream);
    wav_header(dump, dump_bytes);
    fclose(dump);
    dump = NULL;
    SDL_UnlockAudioStream(stream);
}

static void audio_start(void) {
    if (audio_state) return;
    audio_state = -1;
    const char *e = getenv("SSTHEH_AUDIO");
    if (e && !atoi(e)) return;
    if (!SDL_InitSubSystem(SDL_INIT_AUDIO)) { rt_log("adxi", "no audio: %s", SDL_GetError()); return; }
    SDL_AudioSpec spec = {SDL_AUDIO_F32, 2, OUT_RATE};
    stream = SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, audio_cb, NULL);
    if (!stream) { rt_log("adxi", "no audio device: %s", SDL_GetError()); return; }
    const char *d = getenv("SSTHEH_AUDIO_DUMP");
    if (d && (dump = fopen(d, "wb"))) { wav_header(dump, 0); atexit(dump_close); }
    SDL_ResumeAudioStreamDevice(stream);
    audio_state = 1;
    rt_log("adxi", "sound through SDL (%s)", SDL_GetCurrentAudioDriver());
}

u32 srv_cri_adxi(Ctx *c, u32 fn, u8 *in, u32 in_size, u8 *out, u32 out_size) {
    (void)c;
    static u32 seen[0x500], next_handle = 0x00180000;
    u32 a[4] = {0};
    memcpy(a, in, in_size < 16 ? in_size : 16);
    if ((fn < 0x500 && !seen[fn]++) || rt_verbose > 1)
        rt_log("adxi", "fn %u (%u bytes in, %u out) %08X %08X %08X %08X", fn, in_size, out_size, a[0], a[1], a[2], a[3]);
    u32 h = 0;
    pthread_mutex_lock(&alock);
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
        if (fn == 0x408)
            for (u32 i = 0; i < MAX_VOICES; i++)
                if (!voices[i].used) {
                    memset(&voices[i], 0, sizeof voices[i]);
                    voices[i] = (Voice){.used = 1, .handle = h, .rmt = {a[2], a[3]}, .nch = 2, .rate = OUT_RATE, .gain = 1.0f};
                    break;
                }
    }
    if (fn == 0x409) {
        Voice *v = voice_of(a[0]);
        if (v) { voice_flush(v); v->used = 0; }
    }
    pthread_mutex_unlock(&alock);
    if (fn == 0x408) audio_start();
    if (out_size == 4) {
        memcpy(out, &h, 4);
        return 4;
    }
    return 0;
}

/* No audio device: drop what the elapsed time allows (all streams, as if played). */
static void drain_by_time(void) {
    u64 now = now_ns();
    double secs = last_ns ? (double)(now - last_ns) / 1e9 : 0;
    if (secs > 0.25) secs = 0.25;      /* after a pause, don't skip a lot of sound */
    last_ns = now;
    for (u32 i = 0; i < MAX_SJX; i++) {
        Sjx *s = &sjx[i];
        if (!s->used) continue;
        if (!s->n) { s->credit = 0; continue; }
        s->credit += secs * OUT_RATE * 2;
        while (s->n && s->credit >= 2) {
            Chunk *k = &s->q[s->head];
            u32 take = s->credit >= k->len ? k->len : (u32)s->credit & ~1u;
            if (!take) break;
            give_back(s, k->addr, take);
            s->credit -= take;
            k->addr += take;
            k->len -= take;
            if (!k->len) { s->head = (s->head + 1) % MAX_CHUNKS; s->n--; }
        }
    }
}

static void sjx_message(Ctx *c, const Dtx *d) {
    u32 count = iop_rd32(d->iop_buf);
    if (count > 0x80) count = 0x80;
    pthread_mutex_lock(&alock);
    for (u32 i = 0; i < count; i++) {
        u32 e = d->iop_buf + 0x10 + i * 16;
        Sjx *s = sjx_of(iop_rd32(e + 4));
        if (!s) continue;
        if (s->n == MAX_CHUNKS) { rt_log("adxi", "SJX %08X: too many chunks", iop_rd32(e + 4)); continue; }
        s->q[(s->head + s->n) % MAX_CHUNKS] = (Chunk){iop_rd32(e + 8), iop_rd32(e + 12)};
        s->n++;
    }
    if (audio_state != 1) drain_by_time();
    /* the reply: what was played, as free space */
    u32 max = (d->size - 0x40 - 0x10) / 16, n = 0;
    if (max > 0x80) max = 0x80;
    for (u32 i = 0; i < MAX_SJX && n < max; i++) {
        Sjx *s = &sjx[i];
        u32 k = 0;
        for (; k < s->nfreed && n < max; k++, n++) {
            u32 e = d->ee_buf + 0x10 + n * 16;
            wr8(c, e + 0, 0);
            wr8(c, e + 1, 0);                  /* channel 0: free space */
            wr16(c, e + 2, 0);
            wr32(c, e + 4, s->ee_sjx);
            wr32(c, e + 8, s->freed[k].addr);
            wr32(c, e + 12, s->freed[k].len);
        }
        if (k) { memmove(s->freed, s->freed + k, (s->nfreed - k) * sizeof *s->freed); s->nfreed -= k; }
    }
    pthread_mutex_unlock(&alock);
    wr32(c, d->ee_buf, n);
}

static void rna_message(Ctx *c, const Dtx *d) {
    u32 count = iop_rd32(d->iop_buf);
    if (count > 0x80) count = 0x80;
    pthread_mutex_lock(&alock);
    for (u32 i = 0; i < count; i++) {
        u32 e = d->iop_buf + 0x10 + i * 16;
        u32 cmd = iop_rd32(e) & 0xFFFF, handle = iop_rd32(e + 4), value = iop_rd32(e + 8);
        if (rt_verbose > 2) rt_log("adxi", "PS2RNA command %u voice %08X value %08X", cmd, handle, value);
        Voice *v = voice_of(handle);
        if (!v) continue;
        switch (cmd) {
        case 2: v->playing = value != 0; break;
        case 3: v->nch = value ? value : 1; break;
        case 4: v->rate = value; break;
        case 5: { s32 db = (s32)value; if (db > 0) db = 0; v->gain = db <= -960 ? 0.0f : powf(10.0f, (float)db / 200.0f); break; }
        case 8: if (value) { v->playing = 0; voice_flush(v); } break;
        default: break;
        }
    }
    pthread_mutex_unlock(&alock);
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
