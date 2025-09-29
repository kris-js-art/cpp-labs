cmake_minimum_required(VERSION 3.17)
project(labs2)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(labs2 src/main.cpp
        src/Object.cpp
        include/Object.h
        )