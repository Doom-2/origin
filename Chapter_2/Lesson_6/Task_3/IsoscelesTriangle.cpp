#include "IsoscelesTriangle.h"


IsoscelesTriangle::IsoscelesTriangle() : Triangle(10, 20, 10, 70, 40, 70) {
	_name = "�������������� �����������";
}

IsoscelesTriangle::IsoscelesTriangle(double a, double b, double A, double B) : Triangle(a, b, a, A, B, A) {
	_name = "�������������� �����������";
}
