cmake_minimum_required(VERSION 3.1)

project(caveman_plusplus_debug)

include_directories(caveman_plusplus_debug
    inc
)

add_executable(caveman_plusplus_debug
    src/debug.c
    liba.c
    libb.c
    main_project.c
)