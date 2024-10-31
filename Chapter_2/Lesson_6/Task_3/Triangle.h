#pragma once

#include "Figure.h"


class Triangle : public Figure
{
protected:
	double _a{};
	double _b{};
	double _c{};
	double _A{};
	double _B{};
	double _C{};

public:
	Triangle();

	Triangle(double a, double b, double c, double A, double B, double C);


	void print_sizes() const;

	void print_angles() const;
	
protected:
	void printMe() const;
};
