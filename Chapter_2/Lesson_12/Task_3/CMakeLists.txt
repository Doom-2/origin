cmake_minimum_required(VERSION 3.22.0)
project(Task_3)

add_executable(Task3 main.cpp extended_array.h)

add_subdirectory(../Catch2 Catch2-build)
add_executable(Task3Tests tests.cpp)
target_link_libraries(Task3Tests PRIVATE Catch2::Catch2WithMain)