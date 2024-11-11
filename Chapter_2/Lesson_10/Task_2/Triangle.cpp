#include "Triangle.h"


Triangle::Triangle(double a, double b, double c, double A, double B, double C)
	: Figure("Треугольник"), _a(a), _b(b), _c(c), _A(A), _B(B), _C(C)
{
}

Triangle::Triangle(const std::string& fig_name, double a, double b, double c, double A, double B, double C)
	: Figure(fig_name), _a(a), _b(b), _c(c), _A(A), _B(B), _C(C)
{
}

void Triangle::print_sizes() const
{
	std::cout << "Стороны: " << "a=" << _a << " b=" << _b << " c=" << _c << std::endl;
}

void Triangle::print_angles() const
{
	std::cout << "Углы: " << "A=" << _A << " B=" << _B << " C=" << _C << std::endl;
}

void Triangle::printMe() const
{
	std::cout << _name << ": " << std::endl;
	print_sizes();
	print_angles();
	std::cout << std::endl;
}