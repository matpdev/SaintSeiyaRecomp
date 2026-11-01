/*
 * The opening video (DATA/GX_JP.SFD: MPEG-2, 512x448 at 25 frames a second, ADX sound, ~85 s),
 * played with FFmpeg.
 *
 * The game plays it from a scene (the title screen left alone for ~80 s) whose step, 0x002C3740,
 * starts CRI's Sofdec player on the file and waits for its end. Sofdec decodes the pictures with the
 * IPU, which the port has not got: the screen stayed black and the video never ended. The step is
 * replaced: the file is read from the disc image and decoded on a thread of its own, its pictures
 * shown in place of the game's (port/gs/display.c) and its sound mixed with the game's
 * (port/iop/cri_adxi.c); START skips it as on the PS2, and at the end the scene ends as the game's
 * step ends it. The player the game's step makes (+0x44) stays 0, which the scene's other
 * functions allow. Built without FFmpeg (configure.py did not find it), the video is skipped.
 *
 * No other SFD is named in the executable: GX_US.SFD (the same size) is not used by this build, and
 * the 1.9 GB GX_MAIN.SFD is zeros (it fills the disc).
 */
#define _GNU_SOURCE
#include <pthread.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "r5900.h"
#include "runtime.h"

#define NAMES 0x004FFCD0u       /* the scene's video names, by its index (+0x40): "DATA/GX_JP.SFD", 0 */
#define PAD_START 0x0008

int cdvd_find(const char *path, u32 *lsn, u32 *size);
int cdvd_read(u32 lsn, u32 count, u8 *out);
void cri_audio_start(void);

#ifdef SSTHEH_FFMPEG
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libswresample/swresample.h>
#include <libswscale/swscale.h>

#define OUT_RATE 48000
#define RING (OUT_RATE * 2 * 4)  /* 4 s of the sound, stereo */
#define BLOCK 32                 /* sectors read at a time */

static pthread_t thread;
static pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
static volatile int running, done, stop;
static u32 lsn, size;           /* the file on the disc */
static u64 start_ns;

/* the newest picture (RGBA), published by the thread */
static u32 *picture;
static int pic_w, pic_h;
static u32 pic_gen;

/* the sound, decoded ahead of the mixer */
static float ring[RING];
static u32 ring_head, ring_n;

static u64 now_ns(void) {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (u64)ts.tv_sec * 1000000000ull + (u64)ts.tv_nsec;
}

/* the file, for libavformat: read through a block of sectors */
typedef struct { s64 pos; u32 block; u8 buf[BLOCK * 2048]; int have; } File;

static int io_read(void *opaque, uint8_t *out, int n) {
    File *f = opaque;
    int got = 0;
    while (got < n && f->pos < size) {
        u32 sector = (u32)(f->pos / 2048), first = sector / BLOCK * BLOCK;
        if (!f->have || f->block != first) {
            u32 count = (size + 2047) / 2048 - first;
            if (count > BLOCK) count = BLOCK;
            if (cdvd_read(lsn + first, count, f->buf)) return got ? got : AVERROR(EIO);
            f->block = first;
            f->have = 1;
        }
        s64 at = f->pos - (s64)first * 2048, left = (s64)BLOCK * 2048 - at, rest = size - f->pos;
        int k = (int)(left < rest ? left : rest);
        if (k > n - got) k = n - got;
        memcpy(out + got, f->buf + at, (size_t)k);
        got += k;
        f->pos += k;
    }
    return got ? got : AVERROR_EOF;
}

static int64_t io_seek(void *opaque, int64_t off, int whence) {
    File *f = opaque;
    if (whence & AVSEEK_SIZE) return size;
    whence &= ~AVSEEK_FORCE;
    s64 to = whence == SEEK_SET ? off : whence == SEEK_CUR ? f->pos + off : whence == SEEK_END ? size + off : -1;
    if (to < 0 || to > size) return -1;
    f->pos = to;
    return to;
}

/* Waits until the video's time t (seconds), or stop. */
static void wait_until(double t) {
    while (!stop) {
        s64 left = (s64)(t * 1e9) - (s64)(now_ns() - start_ns);
        if (left <= 0) return;
        struct timespec ts = {0, left > 5000000 ? 5000000 : left};
        nanosleep(&ts, NULL);
    }
}

static void put_sound(const float *s, int frames) {
    pthread_mutex_lock(&lock);
    for (int i = 0; i < frames * 2 && ring_n < RING; i++, ring_n++) ring[(ring_head + ring_n) % RING] = s[i];
    pthread_mutex_unlock(&lock);
}

static void *play(void *arg) {
    (void)arg;
    File *f = calloc(1, sizeof *f);
    AVFormatContext *fmt = avformat_alloc_context();
    u8 *iobuf = av_malloc(65536);
    fmt->pb = avio_alloc_context(iobuf, 65536, 0, f, io_read, NULL, io_seek);
    AVCodecContext *dec[2] = {NULL, NULL};          /* video, sound */
    int idx[2] = {-1, -1};
    struct SwsContext *sws = NULL;
    SwrContext *swr = NULL;
    AVPacket *pkt = av_packet_alloc();
    AVFrame *fr = av_frame_alloc();
    float *pcm = NULL;
    int pcm_cap = 0;
    if (avformat_open_input(&fmt, NULL, NULL, NULL) < 0 || avformat_find_stream_info(fmt, NULL) < 0) {
        rt_log("movie", "not a video FFmpeg can read");
        goto out;
    }
    for (int k = 0; k < 2; k++) {
        idx[k] = av_find_best_stream(fmt, k ? AVMEDIA_TYPE_AUDIO : AVMEDIA_TYPE_VIDEO, -1, -1, NULL, 0);
        if (idx[k] < 0) continue;
        AVStream *st = fmt->streams[idx[k]];
        const AVCodec *codec = avcodec_find_decoder(st->codecpar->codec_id);
        if (!codec || !(dec[k] = avcodec_alloc_context3(codec)) || avcodec_parameters_to_context(dec[k], st->codecpar) < 0
            || avcodec_open2(dec[k], codec, NULL) < 0) {
            rt_log("movie", "no decoder for stream %d", idx[k]);
            avcodec_free_context(&dec[k]);
            idx[k] = -1;
        }
    }
    if (idx[0] < 0) goto out;
    rt_log("movie", "%dx%d %s%s", dec[0]->width, dec[0]->height, avcodec_get_name(dec[0]->codec_id),
           idx[1] >= 0 ? ", with sound" : "");
    start_ns = now_ns();
    double last = 0;
    for (int eof = 0; !stop;) {
        int k = -1;
        if (!eof) {
            if (av_read_frame(fmt, pkt) < 0) {
                eof = 1;
                for (int j = 0; j < 2; j++) if (dec[j]) avcodec_send_packet(dec[j], NULL);
            } else {
                k = pkt->stream_index == idx[0] ? 0 : pkt->stream_index == idx[1] ? 1 : -1;
                if (k >= 0) avcodec_send_packet(dec[k], pkt);
                av_packet_unref(pkt);
                if (k < 0) continue;
            }
        }
        int any = 0;
        for (int j = 0; j < 2; j++) {
            if (!dec[j] || (k >= 0 && j != k)) continue;
            while (!stop && avcodec_receive_frame(dec[j], fr) == 0) {
                any = 1;
                if (j == 1) {
                    if (!swr) {
                        AVChannelLayout stereo = AV_CHANNEL_LAYOUT_STEREO;
                        swr_alloc_set_opts2(&swr, &stereo, AV_SAMPLE_FMT_FLT, OUT_RATE, &fr->ch_layout, fr->format,
                                            fr->sample_rate, 0, NULL);
                        if (swr_init(swr) < 0) swr_free(&swr);
                    }
                    int cap = swr ? swr_get_out_samples(swr, fr->nb_samples) : 0;
                    if (cap > pcm_cap) { pcm_cap = cap; pcm = realloc(pcm, (size_t)cap * 2 * sizeof *pcm); }
                    int n = swr ? swr_convert(swr, (uint8_t **)&pcm, cap, (const uint8_t **)fr->extended_data, fr->nb_samples) : 0;
                    if (n > 0) put_sound(pcm, n);
                } else {
                    AVRational tb = fmt->streams[idx[0]]->time_base;
                    double t = fr->best_effort_timestamp == AV_NOPTS_VALUE ? last : fr->best_effort_timestamp * av_q2d(tb);
                    last = t;
                    sws = sws_getCachedContext(sws, fr->width, fr->height, fr->format, fr->width, fr->height,
                                               AV_PIX_FMT_RGBA, SWS_BILINEAR, NULL, NULL, NULL);
                    static u32 *back;
                    static int back_size;
                    if (back_size < fr->width * fr->height) { back_size = fr->width * fr->height; back = realloc(back, (size_t)back_size * 4); }
                    uint8_t *dst[1] = {(uint8_t *)back};
                    int stride[1] = {fr->width * 4};
                    sws_scale(sws, (const uint8_t *const *)fr->data, fr->linesize, 0, fr->height, dst, stride);
                    wait_until(t);
                    pthread_mutex_lock(&lock);
                    if (pic_w * pic_h < fr->width * fr->height) picture = realloc(picture, (size_t)fr->width * fr->height * 4);
                    memcpy(picture, back, (size_t)fr->width * fr->height * 4);
                    pic_w = fr->width;
                    pic_h = fr->height;
                    pic_gen++;
                    pthread_mutex_unlock(&lock);
                }
                av_frame_unref(fr);
            }
        }
        if (eof && !any) break;
    }
    if (!stop) {                                    /* the last picture's time, then what is left of the sound */
        wait_until(last + 1.0 / 25);
        for (int k = 0; k < 100 && !stop && ring_n; k++) wait_until((double)(now_ns() - start_ns) / 1e9 + 0.01);
        rt_log("movie", "ended at %.1f s", last);
    }
out:
    av_frame_free(&fr);
    av_packet_free(&pkt);
    for (int k = 0; k < 2; k++) avcodec_free_context(&dec[k]);
    sws_freeContext(sws);
    swr_free(&swr);
    free(pcm);
    if (fmt->pb) { av_freep(&fmt->pb->buffer); avio_context_free(&fmt->pb); }
    avformat_close_input(&fmt);
    free(f);
    done = 1;
    return NULL;
}

static int movie_start(const char *name) {
    char path[160];
    snprintf(path, sizeof path, "\\%s;1", name);
    if (!cdvd_find(path, &lsn, &size)) { rt_log("movie", "%s not on the disc", path); return 0; }
    rt_log("movie", "playing %s", name);
    cri_audio_start();
    stop = done = 0;
    pic_gen = 0;
    ring_n = 0;
    running = 1;
    if (pthread_create(&thread, NULL, play, NULL)) { running = 0; return 0; }
    pthread_setname_np(thread, "movie");
    return 1;
}

static void movie_stop(void) {
    if (!running) return;
    stop = 1;
    pthread_join(thread, NULL);
    pthread_mutex_lock(&lock);
    running = 0;
    ring_n = 0;
    pthread_mutex_unlock(&lock);
}

static int movie_playing(void) { return running && !done; }

/* For the display: the newest picture into out (if there is a video and *gen is not its picture's
 * number); 0 when no video is playing. */
int movie_take(u32 *out, int max, int *w, int *h, u32 *gen) {
    if (!running) return 0;
    pthread_mutex_lock(&lock);
    int on = running && pic_gen;
    if (on && pic_gen != *gen && pic_w * pic_h <= max) {
        memcpy(out, picture, (size_t)pic_w * pic_h * 4);
        *w = pic_w;
        *h = pic_h;
        *gen = pic_gen;
    }
    pthread_mutex_unlock(&lock);
    return on;
}

/* For the mixer: adds the video's sound to out (stereo, OUT_RATE). */
void movie_audio(float *out, int frames) {
    if (!running) return;
    pthread_mutex_lock(&lock);
    for (int i = 0; i < frames * 2 && ring_n; i++, ring_n--) {
        out[i] += ring[ring_head];
        ring_head = (ring_head + 1) % RING;
    }
    pthread_mutex_unlock(&lock);
}
#else
static int movie_start(const char *name) { rt_log("movie", "%s skipped: built without FFmpeg", name); return 0; }
static void movie_stop(void) {}
static int movie_playing(void) { return 0; }
int movie_take(u32 *out, int max, int *w, int *h, u32 *gen) { (void)out; (void)max; (void)w; (void)h; (void)gen; return 0; }
void movie_audio(float *out, int frames) { (void)out; (void)frames; }
#endif

/* void movie_step(MovieScene *s) (0x002C3740), s+0: state, +0x40: which video, +0x44: the player,
 * +0x48: skipped. 0: start the video (none: the scene ends); 1: wait for its end or START; 2: the
 * scene ends (0x00139AB0). */
void hle_movie_step(Ctx *c) {
    u32 s = RW(4);
    u16 state = rd16(c, s);
    if (state == 0) {
        u32 name_at = rd32(c, NAMES + rd16(c, s + 0x40) * 4);
        if (!name_at) { rt_call(c, 0x00139AB0); return; }
        char name[128];
        u32 n = 0;
        while (n < sizeof name - 1 && (name[n] = (char)rd8(c, name_at + n))) n++;
        name[n] = 0;
        movie_start(name);
        wr16(c, s, 1);
    } else if (state == 1) {
        rt_call(c, 0x00138DE0);                     /* the pad */
        SET64(4, RW(2));
        SET64(5, -1);
        rt_call(c, 0x0013E020);                     /* buttons just pressed */
        if (RW(2) & PAD_START) {
            wr8(c, s + 0x48, 1);
            movie_stop();
        }
        if (!movie_playing()) wr16(c, s, 2);
    } else if (state == 2) {
        movie_stop();
        wr32(c, s + 0x44, 0);
        SET64(4, s);
        rt_call(c, 0x00139AB0);
    }
}
