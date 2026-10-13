/*
 * Graphics Synthesizer. Placeholder: records the display mode until the renderer (based on
 * Tenkaichi3Decomp's port/src/gs) is brought in.
 */
#include "r5900.h"
#include "runtime.h"
#include "kernel.h"

static u32 crt_interlace, crt_mode, crt_field;

void gs_set_crt(u32 interlace, u32 mode, u32 field) {
    crt_interlace = interlace;
    crt_mode = mode;
    crt_field = field;
}
