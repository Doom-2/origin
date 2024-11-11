cmake_minimum_required(VERSION 3.22.0)

project(geometric_fugires)

set(SOURCE_files source.cpp aux_func.cpp EquilateralTriangle.cpp Figure.cpp IsoscelesTriangle.cpp Parallelogram.cpp Quadrangle.cpp Rectangle.cpp Rhomb.cpp RightTriangle.cpp Square.cpp Triangle.cpp)

set(HEADER_files aux_func.h EquilateralTriangle.h Figure.h IsoscelesTriangle.h Parallelogram.h Quadrangle.h Rectangle.h Rhomb.h RightTriangle.h Square.h Triangle.h)

add_executable(geometric_fugires ${SOURCE_files} ${HEADER_files})