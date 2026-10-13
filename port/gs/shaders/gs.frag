#version 450
// Texture function, texture alpha, region clamp and alpha test of the GS.
layout(location = 0) in vec4 v_color;
layout(location = 1) in vec3 v_tex;
layout(location = 0) out vec4 out_color;

layout(set = 2, binding = 0) uniform sampler2D tex;

layout(set = 3, binding = 0) uniform Draw {
    ivec4 mode;        // x: textured, y: TFX (0 modulate, 1 decal, 2 highlight, 3 highlight2), z: TCC, w: FST
    ivec4 atest;       // x: enabled, y: method (0 never .. 7 notequal), z: reference 0..255, w: fail mode
    vec4 texsize;      // texture width, height, 1/width, 1/height
    vec4 region;       // region clamp in texels: min u, min v, max u, max v (all < 0: none)
};

void main() {
    // colours in 0..255 like the GS: alpha 0x80 is "1.0"
    vec4 vc = v_color * 255.0;
    vec4 c = vc;
    if (mode.x != 0) {
        vec2 uv = mode.w != 0 ? v_tex.xy : v_tex.xy / v_tex.z * texsize.xy;     // texels
        if (region.x >= 0.0) uv = clamp(uv, region.xy, region.zw + 0.999);
        vec4 tc = texture(tex, uv * texsize.zw) * 255.0;
        vec3 rgb;
        if (mode.y == 0) rgb = tc.rgb * vc.rgb / 128.0;
        else if (mode.y == 1) rgb = tc.rgb;
        else rgb = tc.rgb * vc.rgb / 128.0 + vc.a;
        float a;
        if (mode.z == 0) a = vc.a;
        else if (mode.y == 0) a = tc.a * vc.a / 128.0;
        else if (mode.y == 2) a = tc.a + vc.a;
        else a = tc.a;
        c = vec4(min(rgb, vec3(255.0)), min(a, 255.0));
    }
    if (atest.x != 0) {
        float a = floor(c.a + 0.5), r = float(atest.z);
        bool pass;
        switch (atest.y) {
        case 0: pass = false; break;
        case 1: pass = true; break;
        case 2: pass = a < r; break;
        case 3: pass = a <= r; break;
        case 4: pass = a == r; break;
        case 5: pass = a >= r; break;
        case 6: pass = a > r; break;
        default: pass = a != r; break;
        }
        // fail modes: 0 KEEP (nothing), 1 FB_ONLY (colour, set up as no depth write), 2 ZB_ONLY
        // (depth only: approximated as nothing unless the test always fails, see gpu_vk.c), 3 RGB_ONLY
        if (!pass && (atest.w == 0 || atest.w == 2)) discard;
    }
    // the target stores alpha so that 0x80 is 1.0 (blend factors use it as-is)
    out_color = vec4(c.rgb / 255.0, c.a / 128.0);
}
