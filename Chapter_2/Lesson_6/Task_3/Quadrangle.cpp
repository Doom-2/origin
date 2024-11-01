#include "Quadrangle.h"


Quadrangle::Quadrangle() : Triangle(10, 20, 30, 50, 60, 120), _d(40), _D(130) {
	_name = "Четырехугольник";
}

Quadrangle::Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D)
	: Triangle(a, b, c, A, B, C), _d(d), _D(D) {
	_name = "Четырехугольник";
}

void Quadrangle::print_sizes() const {
	cout << "Стороны: " << "a=" << _a << " b=" << _b << " c=" << _c << " d=" << _d << endl;
}

void Quadrangle::print_angles() const {
	cout << "Углы: " << "A=" << _A << " B=" << _B << " C=" << _C << " D=" << _D << endl;
}

void Quadrangle::printMe() const
{
	cout << _name << ": " << endl;
	print_sizes();
	print_angles();
	cout << endl;
}
