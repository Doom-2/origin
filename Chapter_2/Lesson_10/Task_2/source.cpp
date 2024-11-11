#include "RightTriangle.h"
#include "EquilateralTriangle.h"
#include "Square.h"
#include "Rhomb.h"
#include "aux_func.h"

int main() {
	setlocale(LC_ALL, "Russian");

	Triangle triangle(2, 3, 5, 10, 20, 30);
	RightTriangle right_triangle(10, 20, 30, 50, 40);
	IsoscelesTriangle isosceles_triangle(15, 50, 40, 101);
	EquilateralTriangle equilateral_triangle(10);
	Quadrangle quadrangle(10, 20, 30, 40, 140, 60, 80, 80);
	Rectangle rectangle(20, 40);
	Square square(15.027);
	Parallelogram parallelogram(20, 30, 151, 30);
	Rhomb rhomb(0, 120, 60);

	print_info(&triangle);
	print_info(&right_triangle);
	print_info(&isosceles_triangle);
	print_info(&equilateral_triangle);
	print_info(&quadrangle);
	print_info(&rectangle);
	print_info(&square);
	print_info(&parallelogram);
	print_info(&rhomb);
}