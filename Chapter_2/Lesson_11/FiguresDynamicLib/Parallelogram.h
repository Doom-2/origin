#pragma once
#include "Quadrangle.h"


class FIGURESDYNAMICLIB_API Parallelogram : public Quadrangle
{
public:
	Parallelogram(double a, double b, double A, double B);

	Parallelogram(const std::string& name, double a, double b, double A, double B);
};
