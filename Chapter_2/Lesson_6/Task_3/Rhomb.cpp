#include "Rhomb.h"


Rhomb::Rhomb() : Parallelogram(10, 10, 40, 140) {
	_name = "Ромб";
}

Rhomb::Rhomb(double a, double A, double B) : Parallelogram(a, a, A, B) {
	_name = "Ромб";
}
