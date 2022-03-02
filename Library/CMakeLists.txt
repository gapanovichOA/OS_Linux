project(Library)
cmake_minimum_required(VERSION 3.21.1)

set(CMAKE_CXX_STANDARD 14)


include_directories(MathLibrary)
include_directories(Vector)
include_directories(MathClient)

add_subdirectory(MathLibrary)
add_subdirectory(Vector)
add_subdirectory(MathClient)