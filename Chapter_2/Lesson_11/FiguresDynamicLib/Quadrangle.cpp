#include "Quadrangle.h"

Quadrangle::Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D)
	: Figure("Четырехугольник"), _a(a), _b(b), _c(c), _d(d), _A(A), _B(B), _C(C), _D(D)
{
}

Quadrangle::Quadrangle(std::string fig_name, double a, double b, double c, double d, double A, double B, double C, double D)
	: Figure(fig_name), _a(a), _b(b), _c(c), _d(d), _A(A), _B(B), _C(C), _D(D)
{
}

void Quadrangle::print_sizes() const {
	std::cout << "Стороны: " << "a=" << _a << " b=" << _b << " c=" << _c << " d=" << _d << std::endl;
}

void Quadrangle::print_angles() const {
	std::cout << "Углы: " << "A=" << _A << " B=" << _B << " C=" << _C << " D=" << _D << std::endl;
}

void Quadrangle::printMe() const
{
	std::cout << _name << ": " << std::endl;
	print_sizes();
	print_angles();
	std::cout << std::endl;
}
