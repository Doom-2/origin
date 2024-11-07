#pragma once

#include "Parallelogram.h"


class Rectangle : public Parallelogram
{
public:
	Rectangle(double a, double b);

	Rectangle(double a, double b, double c, double d);

	Rectangle(const std::string& fig_name, double a, double b);
};
