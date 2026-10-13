/*
 * VIF0 / VIF1: the units in front of VU0 / VU1 that unpack data into VU memory, load
 * microprograms and start them, and (VIF1 only) pass GIF packets straight to the GS.
 *
 * Data arrives in DMA blocks; a command or its data may continue in the next block, so each VIF
 * keeps the command in progress. Each VIF code is 32 bits: IMMEDIATE 0-15, NUM 16-23, CMD 24-30,
 * IRQ 31. Commands:
 *   0x00 NOP, 0x01 STCYCL, 0x02 OFFSET, 0x03 BASE, 0x04 ITOP, 0x05 STMOD, 0x06 MSKPATH3,
 *   0x07 MARK, 0x10 FLUSHE, 0x11 FLUSH, 0x13 FLUSHA, 0x14 MSCAL, 0x15 MSCALF, 0x17 MSCNT,
 *   0x20 STMASK (+1 word), 0x30 STROW (+4), 0x31 STCOL (+4), 0x4A MPG (+NUM pairs of words),
 *   0x50 DIRECT / 0x51 DIRECTHL (+IMMEDIATE quadwords), 0x60-0x7F UNPACK.
 * UNPACK: bits 0-1 VL (element size 32/16/8/5 bits), 2-3 VN (1-4 elements), bit 4 MASK.
 */
#include <stdio.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"
#include "gs.h"
#include "vu.h"

typedef struct {
    int id;                 /* 0 or 1 */
    u32 cmd;                /* command waiting for data, or 0xFFFFFFFF */
    u32 need, got;          /* words still to collect for it */
    u32 buf[0x10000];
    u32 cl, wl, mode, mask, row[4], col[4], base, ofst, tops, itop, num_unpack;
    u64 counts[128];
} Vif;

static Vif vifs[2] = {{.id = 0, .cmd = 0xFFFFFFFF}, {.id = 1, .cmd = 0xFFFFFFFF}};

/* Words of data an UNPACK of `num` vectors brings (with write cycles cl/wl). */
static u32 unpack_words(Vif *v, u32 code) {
    u32 num = (code >> 16) & 0xFF;
    if (num == 0) num = 256;
    u32 vn = (code >> 26) & 3, vl = (code >> 24) & 3;
    u32 bits_per = (32 >> vl) * (vn + 1);
    if (vl == 3) bits_per = 16;                       /* V4-5: one 16-bit word per vector */
    u32 n = num;
    if (v->wl > v->cl && v->cl) n = v->cl * (num / v->wl) + (num % v->wl < v->cl ? num % v->wl : v->cl);
    return (n * bits_per + 31) / 32;
}

static void run(Vif *v, u32 code, const u32 *data) {
    u32 cmd = (code >> 24) & 0x7F, imm = code & 0xFFFF, num = (code >> 16) & 0xFF;
    v->counts[cmd]++;
    switch (cmd) {
    case 0x00: break;
    case 0x01: v->cl = imm & 0xFF; v->wl = (imm >> 8) & 0xFF; break;
    case 0x02: v->ofst = imm & 0x3FF; break;
    case 0x03: v->base = imm & 0x3FF; break;
    case 0x04: v->itop = imm & 0x3FF; break;
    case 0x05: v->mode = imm & 3; break;
    case 0x06: case 0x07: case 0x10: case 0x11: case 0x13: break;
    case 0x14: case 0x15: vu_start(v->id, imm, v->itop); break;          /* MSCAL / MSCALF */
    case 0x17: vu_start(v->id, -1, v->itop); break;                      /* MSCNT: continue */
    case 0x20: v->mask = data[0]; break;
    case 0x30: memcpy(v->row, data, 16); break;
    case 0x31: memcpy(v->col, data, 16); break;
    case 0x4A: vu_load_program(v->id, imm * 8, data, num ? num * 2 : 512); break;
    case 0x50: case 0x51: if (v->id == 1) gif_path2((const u8 *)data, imm ? imm : 0x10000); break;
    default:
        if (cmd >= 0x60) {
            VuUnpack u = {.cmd = code, .cl = v->cl, .wl = v->wl, .mode = v->mode, .mask = v->mask,
                          .row = v->row, .col = v->col, .tops_add = (v->id == 1 && (code & 0x8000)) ? v->base : 0};
            vu_unpack(v->id, &u, data);
        } else {
            static u8 told[128];
            if (!told[cmd]++) rt_log("vif", "VIF%d: unknown command %02X", v->id, cmd);
        }
    }
}

static void feed(Vif *v, const u32 *w, u32 n) {
    for (u32 i = 0; i < n;) {
        if (v->cmd != 0xFFFFFFFF) {                   /* collecting a command's data */
            u32 take = n - i < v->need - v->got ? n - i : v->need - v->got;
            memcpy(v->buf + v->got, w + i, take * 4);
            v->got += take;
            i += take;
            if (v->got == v->need) {
                u32 code = v->cmd;
                v->cmd = 0xFFFFFFFF;
                run(v, code, v->buf);
            }
            continue;
        }
        u32 code = w[i++];
        u32 cmd = (code >> 24) & 0x7F, imm = code & 0xFFFF, num = (code >> 16) & 0xFF;
        u32 need = 0;
        if (cmd == 0x20) need = 1;
        else if (cmd == 0x30 || cmd == 0x31) need = 4;
        else if (cmd == 0x4A) need = (num ? num : 256) * 2;
        else if (cmd == 0x50 || cmd == 0x51) {
            need = (imm ? imm : 0x10000) * 4;
            u32 pad = i & 3;                          /* DIRECT data starts on a quadword boundary */
            if (pad) i += 4 - pad;
        } else if (cmd >= 0x60) need = unpack_words(v, code);
        if (need == 0) { run(v, code, NULL); continue; }
        if (need > sizeof v->buf / 4) {
            rt_log("vif", "VIF%d: command %08X wants %u words, dropped", v->id, code, need);
            return;
        }
        v->cmd = code;
        v->need = need;
        v->got = 0;
    }
}

void vif1_dma(const u8 *data, u32 qwc) { feed(&vifs[1], (const u32 *)data, qwc * 4); }
void vif0_dma(const u8 *data, u32 qwc) { feed(&vifs[0], (const u32 *)data, qwc * 4); }
void vif_tag(int vif, const u8 *two_codes) { feed(&vifs[vif], (const u32 *)two_codes, 2); }

void vif_stats(void) {
    for (int k = 0; k < 2; k++) {
        char line[512];
        int n = 0;
        for (int c = 0; c < 128; c++)
            if (vifs[k].counts[c]) n += snprintf(line + n, sizeof line - n, " %02X:%llu", c, (unsigned long long)vifs[k].counts[c]);
        if (n) rt_log("vif", "VIF%d commands:%s", k, line);
    }
}
