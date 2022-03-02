cmake_minimum_required(VERSION 3.21)
project(MathLibrary)

set(CMAKE_CXX_STANDARD 14)

add_library(MathLibrary STATIC MathLibrary.cpp MathLibrary.h)
