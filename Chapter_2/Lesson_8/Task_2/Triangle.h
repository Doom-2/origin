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

	Triangle(double a, double b, double c, double A, double B, double C);

	Triangle(const std::string &fig_name, double a, double b, double c, double A, double B, double C);

		
protected:

	void printMe() const;

	void checkCorrectness() const;
};
