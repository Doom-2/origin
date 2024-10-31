#include "EquilateralTriangle.h"


EquilateralTriangle::EquilateralTriangle() : IsoscelesTriangle(10, 10, 60, 60) {
	_name = "Равносторонний треугольник";
}

EquilateralTriangle::EquilateralTriangle(double a) : IsoscelesTriangle(a, a, 60, 60) {
	_name = "Равносторонний треугольник";
}
