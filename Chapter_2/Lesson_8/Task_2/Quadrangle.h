#pragma once

#include "Figure.h"


class Quadrangle : public Figure
{
protected:
	double _a{};
	double _b{};
	double _c{};
	double _d{};
	double _A{};
	double _B{};
	double _C{};
	double _D{};

public:
	Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D);

	Quadrangle(std::string fig_name, double a, double b, double c, double d, double A, double B, double C, double D);

protected:
	void printMe() const;

	void checkCorrectness() const;
};
