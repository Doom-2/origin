#pragma once

#include "Triangle.h"


class Quadrangle : public Triangle
{
protected:
	double _d;
	double _D;

public:
	Quadrangle();

	Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D);

protected:
	void print_sizes() const;

	void print_angles() const;

	void printMe() const;
};
