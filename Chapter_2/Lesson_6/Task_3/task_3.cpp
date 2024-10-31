#include "RightTriangle.h"
#include "EquilateralTriangle.h"
#include "Square.h"
#include "Rhomb.h"

void print_info(Figure* f) {
	f->printMe();
}

int main() {
	setlocale(LC_ALL, "Russian");

	Triangle triangle;
	RightTriangle right_triangle(10, 20, 30, 50, 40);
	IsoscelesTriangle isosceles_triangle;
	EquilateralTriangle equilateral_triangle(30);
	Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
	Rectangle rectangle(10, 20);
	Square square;
	Parallelogram parallelogram(20, 30, 30, 40);
	Rhomb rhomb(30, 30, 40);

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