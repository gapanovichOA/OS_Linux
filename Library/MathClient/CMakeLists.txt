cmake_minimum_required(VERSION 3.21)
project(MathClient)

set(CMAKE_CXX_STANDARD 14)

add_executable(MathClient main.cpp)
target_link_libraries(MathClient PUBLIC Vector MathLibrary)