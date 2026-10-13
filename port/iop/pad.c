/*
 * Controllers: the IOP's pad module (PADMAN), reimplemented.
 *
 * The EE's libpad opens a port with RPC function 1, command 0x01 { port +4, slot +8, buffer +0x10 }.
 * The module then writes, every vertical blank, the controller's state into that EE buffer: two
 * 128-byte records used alternately (the one with the higher frame count is current), laid out as
 * in ps2sdk's libpad for this module:
 *   0x00 data[32] (0: 0 = ok, 1: mode 0x73 analog, 2-3: buttons active low, 4-7: sticks RX RY LX LY)
 *   0x58 frame, 0x60 length of data, 0x64 modeConfig, 0x65 modeCurId, 0x66 model, 0x67 button data
 *   ready, 0x68 number of modes, 0x69 current mode index, 0x6A actuators, 0x50 mode table,
 *   0x70 state (6 = stable), 0x71 request state (0 = complete), 0x72 current task (1: scePadInfoMode
 *   answers only then).
 * Buttons (bit of the 16-bit word, active low): SELECT 0, L3 1, R3 2, START 3, UP 4, RIGHT 5,
 * DOWN 6, LEFT 7, L2 8, R2 9, L1 10, R1 11, TRIANGLE 12, CIRCLE 13, CROSS 14, SQUARE 15.
 * Only port 1 has a controller unless SSTHEH_PAD2=1: with both, game modes become 1P vs 2P. An
 * empty port reports state 0 (PAD_STATE_DISCONN).
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"
#include "iop.h"
#include "pad.h"

static u32 area[2];               /* EE buffer per port, 0 = not open */
static u32 frame;
volatile u16 pad_buttons[2];      /* pressed buttons per port, set by the window (1 = pressed) */
volatile u8 pad_sticks[2][4] = {{0x80, 0x80, 0x80, 0x80}, {0x80, 0x80, 0x80, 0x80}};

void pad_open(u32 port, u32 slot, u32 ee_area) {
    if (port < 2 && slot == 0) {
        area[port] = ee_area;
        rt_log("pad", "port %u opened, buffer %08X", port, ee_area);
    }
}

static void put(Ctx *c, u32 a, const u8 *p, u32 n) {
    for (u32 i = 0; i < n; i++) wr8(c, a + i, p[i]);
}

/* Called at every vertical blank with interrupts' context. */
void pad_vblank(Ctx *c) {
    frame++;
    for (int port = 0; port < 2; port++) {
        if (!area[port]) continue;
        u8 r[128] = {0};
        static int pad2 = -1;
        if (pad2 < 0) pad2 = getenv("SSTHEH_PAD2") && atoi(getenv("SSTHEH_PAD2"));
        if (port == 1 && !pad2) {
            r[0x00] = 0xFF;
            memcpy(r + 0x58, &frame, 4);
            r[0x70] = 0;                     /* PAD_STATE_DISCONN */
            put(c, area[port] + (frame & 1) * 128, r, 128);
            continue;
        }
        u16 btn = (u16)~pad_buttons[port];
        r[0x00] = 0x00;
        r[0x01] = 0x73;                      /* DualShock, analog: 3 words of data */
        r[0x02] = btn & 0xFF;
        r[0x03] = btn >> 8;
        memcpy(r + 0x04, (const void *)pad_sticks[port], 4);
        u16 modes[4] = {0x41, 0x73, 0, 0};
        memcpy(r + 0x50, modes, 8);
        memcpy(r + 0x58, &frame, 4);
        u32 len = 8;
        memcpy(r + 0x60, &len, 4);
        r[0x64] = 1;                         /* modeConfig */
        r[0x65] = 0x73;                      /* modeCurId */
        r[0x66] = 3;                         /* model: DualShock 2 */
        r[0x67] = 1;
        r[0x68] = 2;                         /* modes */
        r[0x69] = 1;                         /* current: analog */
        r[0x6A] = 2;                         /* actuators */
        r[0x70] = 6;                         /* PAD_STATE_STABLE */
        r[0x71] = 0;                         /* request complete */
        r[0x72] = 1;                         /* current task: 1 = information up to date (scePadInfoMode) */
        put(c, area[port] + (frame & 1) * 128, r, 128);
    }
}
