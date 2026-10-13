#version 450
// A full-screen triangle that samples the displayed part of a render target.
layout(location = 0) out vec2 v_uv;
layout(set = 1, binding = 0) uniform Src { vec4 rect; };   // u0, v0, u1, v1 in the target (0..1)
void main() {
    vec2 p = vec2((gl_VertexIndex << 1) & 2, gl_VertexIndex & 2);
    gl_Position = vec4(p * 2.0 - 1.0, 0.0, 1.0);
    // SDL_GPU's NDC has y up: the top of the screen (p.y = 1) shows the top of the rectangle
    v_uv = vec2(mix(rect.x, rect.z, p.x), mix(rect.w, rect.y, p.y));
}
