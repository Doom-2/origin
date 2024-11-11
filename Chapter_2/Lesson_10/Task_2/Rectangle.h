#pragma once

#include "Parallelogram.h"


class Rectangle : public Parallelogram
{
public:
	Rectangle(double a, double b);

	Rectangle(const std::string& fig_name, double a, double b);
};
