cmake_minimum_required(VERSION 3.21)
project(Vector)

set(CMAKE_CXX_STANDARD 14)

add_library(Vector SHARED Vector.cpp Vector.h)
target_link_directories(Vector PUBLIC MathLibrary)