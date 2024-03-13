cmake_minimum_required(VERSION 3.1)

project(x-macro)

include_directories(x-macro
    inc/
)

add_executable(x-macro
    src/x-macro.c
    src/test.c
)