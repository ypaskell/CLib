cmake_minimum_required(VERSION 3.9.1)
project(CLib
  LANGUAGE C
  DESCRIPTION "CLib for coding interview"
)

add_executable(ypaskell_C_library src/main.c)

add_subdirectory(src)
