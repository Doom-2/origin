#include "Parallelogram.h"

Parallelogram::Parallelogram(double a, double b, double A, double B)
	: Quadrangle("Параллелограмм", a, b, a, b, A, B, A, B) {}

Parallelogram::Parallelogram(const std::string& fig_name, double a, double b, double A, double B)
	: Quadrangle(fig_name, a, b, a, b, A, B, A, B) {}
