cmake_minimum_required(VERSION 3.5)
project(CLib)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build)

add_executable(CLib src/main.c)
