#include "RightTriangle.h"


RightTriangle::RightTriangle() : Triangle(10, 20, 30, 30, 60, 90) {
	_name = "Прямоугольный треугольник";
}

RightTriangle::RightTriangle(double a, double b, double c, double A, double B) : Triangle(a, b, c, A, B, 90) {
	_name = "Прямоугольный треугольник";
}
