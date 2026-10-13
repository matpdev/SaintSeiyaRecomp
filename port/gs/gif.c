/*
 * GIF and VIF: placeholders that count what arrives until the GS renderer and VU1 are in.
 */
#include <stdio.h>

#include "r5900.h"
#include "runtime.h"
#include "gs.h"

static u64 gif_qw, vif1_qw, vif0_qw;

static void report(const char *what, u64 *counter, u32 qwc) {
    u64 before = *counter;
    *counter += qwc;
    if (before == 0 || before >> 16 != *counter >> 16)
        rt_log("gs", "%s: %llu quadwords so far", what, (unsigned long long)*counter);
}

void gif_dma(const u8 *data, u32 qwc) { (void)data; report("GIF", &gif_qw, qwc); }
void vif1_dma(const u8 *data, u32 qwc) { (void)data; report("VIF1", &vif1_qw, qwc); }
void vif0_dma(const u8 *data, u32 qwc) { (void)data; report("VIF0", &vif0_qw, qwc); }
void vif_tag(int vif, const u8 *two_codes) { (void)vif; (void)two_codes; }
