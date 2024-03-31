cmake_minimum_required(VERSION 3.1)

project(caveman_debug)

include_directories(caveman_debug
    inc/
    test/
)

add_executable(caveman_debug
    src/debug_manager.c
    test/test_main.c
    test/liba.c
    test/libb.c
    test/libc.c
)