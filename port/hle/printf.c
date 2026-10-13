/*
 * printf-style output of guest code: CRI's debug messages and the SDK's printf.
 * Arguments are read from the guest registers as the EE ABI passes them: integers in a0-a3 and
 * t0-t3 (after the format), floats in f12-f19.
 */
#include <stdio.h>
#include <string.h>

#include "r5900.h"
#include "runtime.h"

static void guest_format(Ctx *c, u32 fmt, int first_int, char *out, size_t cap) {
    static const int int_regs[] = {4, 5, 6, 7, 8, 9, 10, 11};
    int ni = first_int, nf = 12;
    size_t k = 0;
    for (u32 p = fmt;; p++) {
        char ch = rd8(c, p);
        if (!ch || k + 64 >= cap) break;
        if (ch != '%') { out[k++] = ch; continue; }
        char spec[32] = "%";
        int n = 1;
        for (;;) {
            ch = rd8(c, ++p);
            if (n < 30) spec[n++] = ch;
            if (strchr("diouxXcspfgeEG%", ch) || !ch) break;
        }
        spec[n] = 0;
        if (!ch) break;
        if (ch == '%') { out[k++] = '%'; continue; }
        /* drop length modifiers: guest ints are 32-bit here */
        char clean[32];
        int m = 0;
        for (int i = 0; spec[i]; i++) if (spec[i] != 'l' && spec[i] != 'h') clean[m++] = spec[i];
        clean[m] = 0;
        if (strchr("fgeEG", ch)) {
            double v = nf < 20 ? c->f[nf++].f : 0;
            k += snprintf(out + k, cap - k, clean, v);
        } else {
            u32 v = ni < 8 ? RW(int_regs[ni++]) : 0;
            if (ch == 's') {
                char s[256];
                u32 i = 0;
                for (; i < sizeof s - 1 && v; i++) if (!(s[i] = rd8(c, v + i))) break;
                s[i] = 0;
                k += snprintf(out + k, cap - k, clean, v ? s : "(null)");
            } else {
                k += snprintf(out + k, cap - k, clean, v);
            }
        }
    }
    out[k] = 0;
}

/* CRI: void cri_print(const char *fmt, ...) (prints only at debug level 2 in the original) */
void hle_cri_print(Ctx *c) {
    char buf[1024];
    guest_format(c, RW(4), 1, buf, sizeof buf);
    fprintf(stderr, "[cri   ] %s%s", buf, buf[0] && buf[strlen(buf) - 1] == '\n' ? "" : "\n");
}
