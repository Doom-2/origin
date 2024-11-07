#include "RightTriangle.h"
#include "aux_func.h"
#include "CustomExceptions.h"


RightTriangle::RightTriangle(double a, double b, double c, double A, double B)
	: Triangle("Прямоугольный треугольник", a, b, c, A, B, 90) {}
