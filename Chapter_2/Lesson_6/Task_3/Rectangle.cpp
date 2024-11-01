#include "Rectangle.h"


Rectangle::Rectangle() : Parallelogram(10, 20, 90, 90) {
	_name = "Прямоугольник";
}

Rectangle::Rectangle(double a, double b) : Parallelogram(a, b, 90, 90) {
	_name = "Прямоугольник";
}
