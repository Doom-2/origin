#include "RightTriangle.h"
#include "EquilateralTriangle.h"
#include "Square.h"
#include "Rhomb.h"
#include "CustomExceptions.h"
#include "aux_func.h"


int main() {
	setlocale(LC_ALL, "Russian");


	// Треугольник
	try {
		Triangle triangle(2, 3, 5, 10, 20, 30);
		print_info(&triangle);
	}
	catch (const FigureException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Something went wrong..." << std::endl;
	}

	// Прямоугольный треугольник
	try {
		RightTriangle right_triangle(10, 20, 30, 50, 40);
		print_info(&right_triangle);
	}
	catch (const FigureException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Something went wrong..." << std::endl;
	}

	// Равнобедренный треугольник
	try {
		IsoscelesTriangle isosceles_triangle(15, 50, 40, 101);
		print_info(&isosceles_triangle);
	}
	catch (const FigureException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Something went wrong..." << std::endl;
	}

	// Равносторонний треугольник
	try {
		EquilateralTriangle equilateral_triangle(10);
		print_info(&equilateral_triangle);
	}
	catch (const FigureException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Something went wrong..." << std::endl;
	}

	// Четырехугольник
	try {
		Quadrangle quadrangle(10, 20, 30, 40, 140, 60, 80, 80);
		print_info(&quadrangle);
	}
	catch (const FigureException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Something went wrong..." << std::endl;
	}

	// Прямоугольник
	try {
		Rectangle rectangle(20, 40);
		print_info(&rectangle);
	}
	catch (const FigureException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Something went wrong..." << std::endl;
	}

	// Прямоугольник "кривой"
	try {
		Rectangle rectangle(20, 40, 25, 50);
		print_info(&rectangle);
	}
	catch (const FigureException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Something went wrong..." << std::endl;
	}

	// Квадрат
	try {
		Square square(15.027);
		print_info(&square);
	}
	catch (const FigureException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Something went wrong..." << std::endl;
	}

	// Параллелограм
	try {
		Parallelogram parallelogram(20, 30, 151, 30);
		print_info(&parallelogram);
	}
	catch (const FigureException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Something went wrong..." << std::endl;
	}

	// Ромб
	try {
		Rhomb rhomb(0, 120, 60);
		print_info(&rhomb);
	}
	catch (const FigureException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Something went wrong..." << std::endl;
	}
}
