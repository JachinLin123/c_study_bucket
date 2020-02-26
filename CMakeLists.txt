cmake_minimum_required(VERSION 3.14)
project(code)

#include_directories(src/include)
#aux_source_directory(scr/main dir_srcs)

set(CMAKE_CXX_STANDARD 14)
#set(WORK ${dir_srcs})

add_executable(code lanqiao/sort/selectSort.cpp)
#add_executable(code go_over/${files})

