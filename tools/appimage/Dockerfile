# The AppImage's build system: Debian 13 (glibc 2.41), so the AppImage runs on the distributions of
# 2025 on (Ubuntu 25.04+, Fedora 42+, Debian 13, Arch...). tools/release.sh linux uses it.
FROM debian:trixie
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
        gcc g++ ninja-build pkg-config python3 cmake file patchelf squashfs-tools ca-certificates \
        libsdl3-dev libavformat-dev libavcodec-dev libswscale-dev libswresample-dev libfreetype-dev \
        qt6-base-dev qt6-wayland libgl-dev libvulkan-dev \
    && rm -rf /var/lib/apt/lists/*
