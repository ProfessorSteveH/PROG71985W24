cmake_minimum_required(VERSION 3.27)
project(maxof C)

set(CMAKE_C_STANDARD 99)

add_executable(maxof main.c
        library.h
        library.c)
