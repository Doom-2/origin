#include "EquilateralTriangle.h"


EquilateralTriangle::EquilateralTriangle() : IsoscelesTriangle(10, 10, 60, 60) {
	_name = "�������������� �����������";
}

EquilateralTriangle::EquilateralTriangle(double a) : IsoscelesTriangle(a, a, 60, 60) {
	_name = "�������������� �����������";
}
