#version 450
// The displayed picture scaled to the window. When the picture is larger than the window
// (rendered at a higher resolution), each window pixel averages taps x taps samples spread over
// the area it covers: supersampling.
layout(location = 0) in vec2 v_uv;
layout(location = 0) out vec4 out_color;
layout(set = 2, binding = 0) uniform sampler2D src;
layout(set = 3, binding = 0) uniform Down { vec4 down; };   // xy: a window pixel in uv; z: taps per axis
void main() {
    int n = int(down.z);
    if (n <= 1) { out_color = vec4(texture(src, v_uv).rgb, 1.0); return; }
    vec3 sum = vec3(0.0);
    for (int j = 0; j < n; j++)
        for (int i = 0; i < n; i++) {
            vec2 off = (vec2(i, j) + 0.5) / float(n) - 0.5;
            sum += texture(src, v_uv + off * down.xy).rgb;
        }
    out_color = vec4(sum / float(n * n), 1.0);
}
