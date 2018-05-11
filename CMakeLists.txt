cmake_minimum_required(VERSION 3.9)
project(FIS)

set(CMAKE_CXX_STANDARD 11)

set(MyMatrix src/core/MyMatrix.cc src/core/MyMatrix.hh)
set(MMio lib/mmio.h lib/mmio.c)

add_executable(FIS src/main.cpp ${MyMatrix} ${MMio})