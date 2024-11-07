#pragma once

#include "Quadrangle.h"


class Parallelogram : public Quadrangle
{
public:
	Parallelogram(double a, double b, double A, double B);

	Parallelogram(const std::string& name, double a, double b, double A, double B);
};
