# The release's setup: checks the player's disc image of Saint Seiya: The Hades (Europe, SLES-54162),
# copies it next to the game, downloads the font, and starts the game.
#     cmake -S tools/setup -B build/setup && cmake --build build/setup
cmake_minimum_required(VERSION 3.19)
project(SaintSeiyaDecomp-setup LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
find_package(Qt6 REQUIRED COMPONENTS Widgets Network)
add_executable(SaintSeiyaDecomp-setup WIN32 main.cpp)
find_package(Threads REQUIRED)
target_link_libraries(SaintSeiyaDecomp-setup PRIVATE Qt6::Widgets Qt6::Network Threads::Threads)
