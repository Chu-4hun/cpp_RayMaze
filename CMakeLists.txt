cmake_minimum_required(VERSION 3.21)
project(RayMaze)

set(CMAKE_CXX_STANDARD 20)

link_libraries(user32 gdi32 opengl32 gdiplus Shlwapi dwmapi stdc++fs)
add_executable(RayMaze Cpp/main.cpp lib/olcPixelGameEngine.h Cpp/GameView.cpp Headers/GameView.h)
