#pragma once

#include "Triangle.h"


class IsoscelesTriangle : public Triangle
{
public:
	IsoscelesTriangle(const std::string& name, double a, double b, double A, double B);

	IsoscelesTriangle(double a, double b, double A, double B);
};
