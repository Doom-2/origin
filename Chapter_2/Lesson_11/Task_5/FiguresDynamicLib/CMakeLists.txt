cmake_minimum_required(VERSION 3.22.0)

set(SOURCE_LIB
"EquilateralTriangle.cpp"
"Figure.cpp"
"IsoscelesTriangle.cpp"
"Parallelogram.cpp"
"Quadrangle.cpp"
"Rectangle.cpp"
"Rhomb.cpp"
"RightTriangle.cpp"
"Square.cpp"
"Triangle.cpp"
)
set(SOURCE_HD 
"Figures.h"
"EquilateralTriangle.h"
"Figure.h"
"IsoscelesTriangle.h"
"Parallelogram.h"
"Quadrangle.h"
"Rectangle.h"
"Rhomb.h"
"RightTriangle.h"
"Square.h"
"Triangle.h"
)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(FiguresDynamicLib SHARED ${SOURCE_LIB} ${SOURCE_HD})
