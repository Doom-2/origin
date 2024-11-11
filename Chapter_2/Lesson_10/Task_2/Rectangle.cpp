#include "Rectangle.h"


Rectangle::Rectangle(double a, double b)
	: Parallelogram("Прямоугольник", a, b, 90, 90) {}

Rectangle::Rectangle(const std::string& fig_name, double a, double b)
	: Parallelogram(fig_name, a, b, 90, 90) {}
