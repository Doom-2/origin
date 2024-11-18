#include "IsoscelesTriangle.h"


IsoscelesTriangle::IsoscelesTriangle(double a, double b, double A, double B)
	: Triangle("Равнобедренный треугольник", a, b, a, A, B, A) {}

IsoscelesTriangle::IsoscelesTriangle(const std::string& fig_name, double a, double b, double A, double B)
	: Triangle(fig_name, a, b, a, A, B, A) {}
