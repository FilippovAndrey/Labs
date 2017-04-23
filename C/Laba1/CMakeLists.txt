cmake_minimum_required(VERSION 3.6)
project(Laba1)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90 -pedantic")

set(SOURCE_FILES lab1.c)
add_executable(Laba1 ${SOURCE_FILES})

target_link_libraries(Laba1 m)