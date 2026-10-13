/*
 * VU memories, UNPACK (VIF data -> VU data memory) and microprogram upload.
 *
 * UNPACK writes NUM vectors starting at ADDR (immediate bits 0-9, in quadwords; bit 14 USN:
 * unsigned; bit 15 FLG: add VIF1's TOPS). Each source element is 32, 16 or 8 bits (VL 0, 1, 2) or
 * a packed 16-bit RGBA5551 (V4-5); VN+1 elements make a vector, missing components are left
 * alone (V1 fills all four with its value). The write cycle: CL vectors written out of every WL
 * (CL >= WL: skip CL - WL slots after each WL writes; CL < WL is "fill" mode, rare).
 * MODE 1 adds ROW to each component (offset), MODE 2 adds and updates ROW (difference).
 * With MASK set, each component takes, per the 2-bit field of STMASK for its slot, the data (0),
 * ROW (1), COL (2) or nothing (3).
 */
#include <stdio.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"
#include "vu.h"

u8 vu1_mem[0x4000] __attribute__((aligned(16))), vu1_code[0x4000] __attribute__((aligned(16)));
u8 vu0_mem[0x1000] __attribute__((aligned(16))), vu0_code[0x1000] __attribute__((aligned(16)));

void vu_load_program(int vu, u32 addr, const u32 *words, u32 count) {
    u8 *code = vu ? vu1_code : vu0_code;
    u32 size = vu ? sizeof vu1_code : sizeof vu0_code;
    for (u32 i = 0; i < count; i++) memcpy(code + ((addr + i * 4) & (size - 1)), &words[i], 4);   /* addr in bytes */
    vu_code_written(vu, addr & (size - 1), count * 4);
}

void vu_unpack(int vu, const VuUnpack *u, const u32 *data) {
    u8 *mem = vu ? vu1_mem : vu0_mem;
    u32 qwords = vu ? 0x400 : 0x100;
    u32 code = u->cmd;
    u32 num = (code >> 16) & 0xFF;
    if (!num) num = 256;
    u32 addr = (code & 0x3FF) + u->tops_add;
    int usn = (code >> 14) & 1, masked = (code >> 28) & 1;
    u32 vn = (code >> 26) & 3, vl = (code >> 24) & 3;
    u32 cl = u->cl ? u->cl : 1, wl = u->wl ? u->wl : 1;
    const u8 *src = (const u8 *)data;
    u32 bits = vl == 3 ? 16 : (32 >> vl) * (vn + 1);
    u32 bitpos = 0, cycle = 0;
    u32 row[4];
    memcpy(row, u->row, 16);

    for (u32 n = 0; n < num;) {
        u32 *dst = (u32 *)(mem + (addr % qwords) * 16);
        int write_data = cl >= wl ? 1 : (cycle < cl);
        u32 val[4] = {0, 0, 0, 0};
        if (write_data) {
            if (vl == 3) {                                         /* V4-5: RGBA 5551 */
                u16 h;
                memcpy(&h, src + bitpos / 8, 2);
                val[0] = (h & 0x1F) << 3;
                val[1] = ((h >> 5) & 0x1F) << 3;
                val[2] = ((h >> 10) & 0x1F) << 3;
                val[3] = (h >> 15) << 7;
            } else {
                u32 esz = 32 >> vl;
                for (u32 k = 0; k <= vn; k++) {
                    const u8 *p = src + bitpos / 8 + k * (esz / 8);
                    u32 x;
                    if (esz == 32) memcpy(&x, p, 4);
                    else if (esz == 16) { u16 h; memcpy(&h, p, 2); x = usn ? h : (u32)(s32)(s16)h; }
                    else x = usn ? p[0] : (u32)(s32)(s8)p[0];
                    val[k] = x;
                }
                if (vn == 0) val[1] = val[2] = val[3] = val[0];     /* S-type: broadcast */
            }
            bitpos += bits;
        }
        u32 slot = cycle < 4 ? cycle : 3;
        for (int k = 0; k < 4; k++) {
            int how = masked ? (u->mask >> (slot * 8 + k * 2)) & 3 : 0;
            if (!write_data && how == 0) how = 3;
            u32 out = dst[k];
            switch (how) {
            case 0:
                if (vl != 3 && k > (int)vn && vn != 0) break;      /* component not in the data */
                out = val[k];
                if (u->mode == 1) out += row[k];
                else if (u->mode == 2) { out += row[k]; row[k] = out; }
                break;
            case 1: out = row[k]; break;
            case 2: out = u->col[slot]; break;
            default: break;
            }
            dst[k] = out;
        }
        n++;
        cycle++;
        if (cl >= wl) {
            addr++;
            if (cycle == wl) { addr += cl - wl; cycle = 0; }
        } else {
            addr++;
            if (cycle == wl) cycle = 0;
        }
    }
    if (u->mode == 2) memcpy((void *)u->row, row, 16);
}
