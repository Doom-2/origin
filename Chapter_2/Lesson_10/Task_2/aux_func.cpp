#include <iostream>
#include "aux_func.h"


bool areSame(double a, double b)
{
	return fabs(a - b) < std::numeric_limits<double>::epsilon();
}


void print_info(Figure* f) {
	f->printMe();
}
