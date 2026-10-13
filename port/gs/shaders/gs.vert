#version 450
// GS vertices in GS pixel space (x, y), depth already scaled to 0..1, colour 0..255, and the
// texture coordinate: (s, t, q) for perspective (STQ) or (u, v, 1) in texels (UV, FST = 1).
layout(location = 0) in vec4 in_pos;     // x, y, depth, unused
layout(location = 1) in vec4 in_color;   // 0..255
layout(location = 2) in vec4 in_tex;     // s, t, q, unused

layout(location = 0) out vec4 v_color;
layout(location = 1) out vec3 v_tex;

layout(set = 1, binding = 0) uniform Target {
    vec4 size;          // target width, height (GS pixels), 1/width, 1/height
};

void main() {
    // NDC as SDL_GPU defines it on every backend: -1 .. 1 left to right, and bottom to top (y up)
    vec2 p = in_pos.xy * size.zw * 2.0 - 1.0;
    p.y = -p.y;
    gl_Position = vec4(p, in_pos.z, 1.0);
    v_color = in_color / 255.0;
    v_tex = in_tex.xyz;
}
