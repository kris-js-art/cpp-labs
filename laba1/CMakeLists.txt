cmake_minimum_required(VERSION 3.28)
project(labs2)

set(CMAKE_CXX_STANDARD 17)

add_executable(labs2 src/main.cpp
        src/Object.cpp
        include/Object.h
)
