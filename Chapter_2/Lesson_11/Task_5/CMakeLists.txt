﻿cmake_minimum_required(VERSION 3.22.0)
project(Task_5)
set(LIBRARY_OUTPUT_PATH "${CMAKE_BINARY_DIR}")
set(EXECUTABLE_OUTPUT_PATH "${CMAKE_BINARY_DIR}")
add_subdirectory(FiguresDynamicLib)
add_executable(task_5 task_5.cpp)
target_link_libraries(task_5 FiguresDynamicLib)
