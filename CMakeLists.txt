cmake_minimum_required(VERSION 3.23)
project(iRay C)

set(CMAKE_C_STANDARD 99)

add_executable(iRay main.c helper.h helper.c)

find_package(raylib CONFIG REQUIRED)
target_link_libraries(iRay PRIVATE raylib)