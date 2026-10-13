#pragma once
#include "r5900.h"

enum {
    PAD_SELECT = 1 << 0, PAD_L3 = 1 << 1, PAD_R3 = 1 << 2, PAD_START = 1 << 3, PAD_UP = 1 << 4,
    PAD_RIGHT = 1 << 5, PAD_DOWN = 1 << 6, PAD_LEFT = 1 << 7, PAD_L2 = 1 << 8, PAD_R2 = 1 << 9,
    PAD_L1 = 1 << 10, PAD_R1 = 1 << 11, PAD_TRIANGLE = 1 << 12, PAD_CIRCLE = 1 << 13,
    PAD_CROSS = 1 << 14, PAD_SQUARE = 1 << 15,
};

extern volatile u16 pad_buttons[2];
extern volatile u8 pad_sticks[2][4];
void pad_open(u32 port, u32 slot, u32 ee_area);
void pad_vblank(Ctx *c);
