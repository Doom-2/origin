#include "Parallelogram.h"


Parallelogram::Parallelogram() : Quadrangle(10, 20, 10, 20, 60, 120, 60, 120) {
	_name = "Параллелограмм";
}

Parallelogram::Parallelogram(double a, double b, double A, double B) : Quadrangle(a, b, a, b, A, B, A, B) {
	_name = "Параллелограмм";
}
