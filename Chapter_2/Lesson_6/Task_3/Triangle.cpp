#include "Triangle.h"


Triangle::Triangle() : Triangle(10, 20, 30, 50, 60, 70) {
	_name = "Треугольник";
}

Triangle::Triangle(double a, double b, double c, double A, double B, double C)
	: _a(a), _b(b), _c(c), _A(A), _B(B), _C(C) {
	_name = "Треугольник";
}

void Triangle::print_sizes() const
{
	std::cout << "Стороны: " << "a=" << _a << " b=" << _b << " c=" << _c << endl;
}

void Triangle::print_angles() const
{
	cout << "Углы: " << "A=" << _A << " B=" << _B << " C=" << _C << endl;
}

void Triangle::printMe() const
{
	cout << _name << ": " << endl;
	print_sizes();
	print_angles();
	cout << endl;
}
