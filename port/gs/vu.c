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
#include "simd.h"

#include "r5900.h"
#include "runtime.h"
#include "vu.h"

u8 vu1_mem[0x4000] __attribute__((aligned(16))), vu1_code[0x4000] __attribute__((aligned(16)));
u8 vu0_mem[0x1000] __attribute__((aligned(16))), vu0_code[0x1000] __attribute__((aligned(16)));

void vu_load_program(int vu, u32 addr, const u32 *words, u32 count) {
    u8 *code = vu ? vu1_code : vu0_code;
    u32 size = vu ? sizeof vu1_code : sizeof vu0_code;
    int changed = 0;
    for (u32 i = 0; i < count; i++) {                    /* addr in bytes */
        u8 *dst = code + ((addr + i * 4) & (size - 1));
        if (memcmp(dst, &words[i], 4)) { memcpy(dst, &words[i], 4); changed = 1; }
    }
    if (changed) vu_code_written(vu, addr & (size - 1), count * 4);   /* the same code again is common */
}

/* One source vector (not V4-5) as four 32-bit lanes; lanes past VN are zero (V1 broadcasts). */
static inline __m128i unpack_load(const u8 *src, int vn, int vl, int usn) {
    __m128i x;
    switch (vl) {
    case 0: {
        u32 w[4] = {0, 0, 0, 0};
        memcpy(w, src, 4 * (vn + 1));
        x = _mm_loadu_si128((const __m128i *)w);
        break;
    }
    case 1: {
        u64 w = 0;
        memcpy(&w, src, 2 * (vn + 1));
        x = _mm_cvtsi64_si128((long long)w);
        x = usn ? _mm_cvtepu16_epi32(x) : _mm_cvtepi16_epi32(x);
        break;
    }
    default: {
        u32 w = 0;
        memcpy(&w, src, vn + 1);
        x = _mm_cvtsi32_si128((int)w);
        x = usn ? _mm_cvtepu8_epi32(x) : _mm_cvtepi8_epi32(x);
        break;
    }
    }
    return vn ? x : _mm_shuffle_epi32(x, 0);
}

/* Each of NUM vectors to its address: CL >= WL, WL written then CL - WL skipped. */
#define UNPACK_EACH(STEP, BODY) do {                                            \
        for (u32 n_ = 0, cycle_ = 0; n_ < num; n_++) {                          \
            __m128i *dst = (__m128i *)(mem + (addr & (qwords - 1)) * 16);       \
            BODY;                                                               \
            src += (STEP);                                                      \
            addr++;                                                             \
            if (++cycle_ == wl) { addr += cl - wl; cycle_ = 0; }                \
        }                                                                       \
    } while (0)

/* The common case (no mask, MODE 0, CL >= WL): a loop per format. */
static void unpack_fast(u8 *mem, u32 qwords, u32 addr, u32 num, u32 cl, u32 wl, int vn, int vl, int usn, const u8 *src) {
    switch (vl << 2 | vn) {
    case 0x3:                                                                               /* V4-32 */
        if (cl == wl) {                                                                     /* runs up to the end of memory */
            while (num) {
                u32 a = addr & (qwords - 1), run = qwords - a < num ? qwords - a : num;
                memcpy(mem + a * 16, src, run * 16);
                src += run * 16;
                addr += run;
                num -= run;
            }
        } else UNPACK_EACH(16, _mm_store_si128(dst, _mm_loadu_si128((const __m128i *)src)));
        break;
    case 0x2: UNPACK_EACH(12, memcpy(dst, src, 12)); break;                                 /* V3-32 */
    case 0x1: UNPACK_EACH(8, memcpy(dst, src, 8)); break;                                   /* V2-32 */
    case 0x0: UNPACK_EACH(4, _mm_store_si128(dst, unpack_load(src, 0, 0, 0))); break;      /* S-32 */
    case 0x7:                                                                               /* V4-16 */
        if (usn) UNPACK_EACH(8, _mm_store_si128(dst, _mm_cvtepu16_epi32(_mm_loadl_epi64((const __m128i *)src))));
        else UNPACK_EACH(8, _mm_store_si128(dst, _mm_cvtepi16_epi32(_mm_loadl_epi64((const __m128i *)src))));
        break;
    case 0xB:                                                                               /* V4-8 */
        if (usn) UNPACK_EACH(4, { u32 w; memcpy(&w, src, 4); _mm_store_si128(dst, _mm_cvtepu8_epi32(_mm_cvtsi32_si128((int)w))); });
        else UNPACK_EACH(4, { u32 w; memcpy(&w, src, 4); _mm_store_si128(dst, _mm_cvtepi8_epi32(_mm_cvtsi32_si128((int)w))); });
        break;
    case 0x6: case 0x5: case 0x4: case 0xA: case 0x9: case 0x8: {                           /* V1..V3 of 16 / 8 bits */
        u32 keep = vn ? 0xFu << (vn + 1) : 0;                                              /* components not in the data */
        __m128i km = _mm_setr_epi32(-(int)((keep >> 0) & 1), -(int)((keep >> 1) & 1), -(int)((keep >> 2) & 1), -(int)((keep >> 3) & 1));
        u32 step = (vl == 1 ? 2 : 1) * (vn + 1);
        UNPACK_EACH(step, _mm_store_si128(dst, _mm_blendv_epi8(unpack_load(src, vn, vl, usn), _mm_load_si128(dst), km)));
        break;
    }
    default: {                                                                              /* V4-5 */
        UNPACK_EACH(2, {
            u16 h;
            memcpy(&h, src, 2);
            _mm_store_si128(dst, _mm_setr_epi32((h & 0x1F) << 3, ((h >> 5) & 0x1F) << 3, ((h >> 10) & 0x1F) << 3, (h >> 15) << 7));
        });
        break;
    }
    }
}

/* With MASK, MODE 0, CL >= WL (not V4-5): each lane from the data, ROW, COL or left alone, as
   STMASK says for the vector's place in the cycle. */
static void unpack_masked(u8 *mem, u32 qwords, u32 addr, u32 num, u32 cl, u32 wl, int vn, int vl, int usn,
                          const u8 *src, const VuUnpack *u) {
    __m128i dm[4], rm[4], cm[4], km[4], rowv = _mm_loadu_si128((const __m128i *)u->row), colv[4];
    for (int slot = 0; slot < 4; slot++) {
        int d[4], r[4], c[4], k[4];
        for (int l = 0; l < 4; l++) {
            int how = (u->mask >> (slot * 8 + l * 2)) & 3;
            if (how == 0 && vn != 0 && l > vn) how = 3;                                     /* component not in the data */
            d[l] = -(how == 0); r[l] = -(how == 1); c[l] = -(how == 2); k[l] = -(how == 3);
        }
        dm[slot] = _mm_setr_epi32(d[0], d[1], d[2], d[3]);
        rm[slot] = _mm_setr_epi32(r[0], r[1], r[2], r[3]);
        cm[slot] = _mm_setr_epi32(c[0], c[1], c[2], c[3]);
        km[slot] = _mm_setr_epi32(k[0], k[1], k[2], k[3]);
        colv[slot] = _mm_set1_epi32((int)u->col[slot]);
    }
    u32 step = (vl == 0 ? 4 : vl == 1 ? 2 : 1) * (vn + 1);
    for (u32 n = 0, cycle = 0; n < num; n++) {
        __m128i *dst = (__m128i *)(mem + (addr & (qwords - 1)) * 16);
        u32 slot = cycle < 4 ? cycle : 3;
        __m128i x = _mm_and_si128(unpack_load(src, vn, vl, usn), dm[slot]);
        x = _mm_or_si128(x, _mm_and_si128(rowv, rm[slot]));
        x = _mm_or_si128(x, _mm_and_si128(colv[slot], cm[slot]));
        x = _mm_or_si128(x, _mm_and_si128(_mm_load_si128(dst), km[slot]));
        _mm_store_si128(dst, x);
        src += step;
        addr++;
        if (++cycle == wl) { addr += cl - wl; cycle = 0; }
    }
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
    if (!masked && u->mode == 0 && cl >= wl) {
        unpack_fast(mem, qwords, addr, num, cl, wl, (int)vn, (int)vl, usn, (const u8 *)data);
        return;
    }
    if (masked && u->mode == 0 && cl >= wl && vl != 3) {
        unpack_masked(mem, qwords, addr, num, cl, wl, (int)vn, (int)vl, usn, (const u8 *)data, u);
        return;
    }
    u32 bitpos = 0, cycle = 0;
    u32 row[4];
    memcpy(row, u->row, 16);

    for (u32 n = 0; n < num;) {
        u32 *dst = (u32 *)(mem + (addr & (qwords - 1)) * 16);
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
