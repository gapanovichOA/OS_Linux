cmake_minimum_required(VERSION 3.21)
project(MatrixMultithreading_Linux)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

add_executable(MatrixMultithreading_Linux main.cpp Matrix.h)
