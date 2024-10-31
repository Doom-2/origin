#include "math_func.h"

Exception::Exception() : 
	runtime_error("Math error: Attempted to divide by Zero\n") {}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mult(int a, int b) {
	return a * b;
}

float divide(int a, int b) {
	return b ? float(a) / b : throw Exception();
}

float power(int a, int b) {
	if (b < 0)
		return 1.0 / power(a, -b);
	return b ? a * power(a, b - 1) : 1;
}
