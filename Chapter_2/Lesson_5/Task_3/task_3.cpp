// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include <iostream>

using namespace std;


class Figure
{
protected:
	int _size_num{ 0 };
	string _name{ "Фигура" };

	bool areSame(double a, double b) const
	{
		return fabs(a - b) < numeric_limits<double>::epsilon();
	}

	void printCorrectness() const {
		if (_size_num == 0)
			cout << "Правильная" << endl;
		else
			cout << "Неправильная" << endl;
	}

public:
	virtual void printMe() const
	{
		cout << _name << ": " << endl;
		printCorrectness();
		cout << "Количество сторон: " << _size_num << endl << endl;
	}
};


class Triangle : public Figure
{
private:
	double _a{};
	double _b{};
	double _c{};
	double _A{};
	double _B{};
	double _C{};

public:
	Triangle() : Triangle(10, 20, 30, 50, 60, 70) {
		_name = "Треугольник";
		_size_num = 3;
	}

	Triangle(double a, double b, double c, double A, double B, double C)
		: _a(a), _b(b), _c(c), _A(A), _B(B), _C(C) {
		_name = "Треугольник";
		_size_num = 3;
	}

protected:
	void print_sizes() const
	{
		cout << "Стороны: " << "a=" << _a << " b=" << _b << " c=" << _c << endl;
	}

	void print_angles() const
	{
		cout << "Углы: " << "A=" << _A << " B=" << _B << " C=" << _C << endl;
	}

	void printCorrectness() const {
		if (_size_num == 3 && areSame(_A + _B + _C, 180))
			cout << "Правильная" << endl;
		else
			cout << "Неправильная" << endl;
	}

	void printMe() const
	{
		cout << _name << ": " << endl;
		printCorrectness();
		cout << "Количество сторон: " << _size_num << endl;
		print_sizes();
		print_angles();
		cout << endl;
	}
};

class RightTriangle : public Triangle
{
public:
	RightTriangle() : Triangle(10, 20, 30, 30, 60, 90) {
		_name = "Прямоугольный треугольник";
	}

	RightTriangle(double a, double b, double c, double A, double B) : Triangle(a, b, c, A, B, 90) {
		_name = "Прямоугольный треугольник";
	}
};

class IsoscelesTriangle : public Triangle
{
public:
	IsoscelesTriangle() : Triangle(10, 20, 10, 70, 40, 70) {
		_name = "Равнобедренный треугольник";
	}

	IsoscelesTriangle(double a, double b, double A, double B) : Triangle(a, b, a, A, B, A) {
		_name = "Равнобедренный треугольник";
	}
};

class EquilateralTriangle : public Triangle
{
public:
	EquilateralTriangle() :Triangle(10, 10, 10, 60, 60, 60) {
		_name = "Равносторонний треугольник";
	}

	EquilateralTriangle(double a) : Triangle(a, a, a, 60, 60, 60) {
		_name = "Равносторонний треугольник";
	}
};

class Quadrangle : public Figure
{
private:
	double _a{};
	double _b{};
	double _c{};
	double _d{};
	double _A{};
	double _B{};
	double _C{};
	double _D{};

public:
	Quadrangle() : Quadrangle(10, 20, 30, 40, 50, 60, 120, 130) {
		_name = "Четырехугольник";
		_size_num = 4;
	}
	Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D)
		: _a(a), _b(b), _c(c), _d(d), _A(A), _B(B), _C(C), _D(D) {
		_name = "Четырехугольник";
		_size_num = 4;
	}

protected:
	void print_sizes() const
	{
		cout << "Стороны: " << "a=" << _a << " b=" << _b << " c=" << _c << " d=" << _d << endl;
	}

	void print_angles() const
	{
		cout << "Углы: " << "A=" << _A << " B=" << _B << " C=" << _C << " D=" << _D << endl;
	}

	void printCorrectness() const {
		if (_size_num == 4 && areSame(_A + _B + _C + _D, 360))
			cout << "Правильная" << endl;
		else
			cout << "Неправильная" << endl;
	}

	void printMe() const
	{
		cout << _name << ": " << endl;
		printCorrectness();
		cout << "Количество сторон: " << _size_num << endl;
		print_sizes();
		print_angles();
		cout << endl;
	}
};

class Rectangle : public Quadrangle
{
public:
	Rectangle() : Quadrangle(10, 20, 10, 20, 90, 90, 90, 90) {
		_name = "Прямоугольник";
	}

	Rectangle(double a, double b) : Quadrangle(a, b, a, b, 90, 90, 90, 90) {
		_name = "Прямоугольник";
	}
};

class Square : public Quadrangle
{
public:
	Square() : Quadrangle(10, 10, 10, 10, 90, 90, 90, 90) {
		_name = "Квадрат";
	}

	Square(double a) : Quadrangle(a, a, a, a, 90, 90, 90, 90) {
		_name = "Квадрат";
	}
};

class Parallelogram : public Quadrangle
{
public:
	Parallelogram() : Quadrangle(10, 20, 10, 20, 60, 120, 60, 120) {
		_name = "Параллелограмм";
	}

	Parallelogram(double a, double b, double A, double B) : Quadrangle(a, b, a, b, A, B, A, B) {
		_name = "Параллелограмм";
	}
};

class Rhomb : public Quadrangle
{
public:
	Rhomb() : Quadrangle(10, 10, 10, 10, 40, 140, 40, 140) {
		_name = "Ромб";
	}

	Rhomb(double a, double A, double B) : Quadrangle(a, a, a, a, A, B, A, B) {
		_name = "Ромб";
	}
};

void print_info(Figure* f) {
	f->printMe();
}

int main() {
	setlocale(LC_ALL, "Russian");

	Figure figure;
	Triangle triangle;
	RightTriangle right_triangle_1(10, 20, 30, 50, 60);
	RightTriangle right_triangle_2(10, 20, 30, 50, 40);
	IsoscelesTriangle isosceles_triangle(10, 20, 50, 60);
	EquilateralTriangle equilateral_triangle(30);
	Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
	Rectangle rectangle(10, 20);
	Square square(20);
	Parallelogram parallelogram(20, 30, 30, 40);
	Rhomb rhomb(30, 30, 40);

	print_info(&figure);
	print_info(&triangle);
	print_info(&right_triangle_1);
	print_info(&right_triangle_2);
	print_info(&isosceles_triangle);
	print_info(&equilateral_triangle);
	print_info(&quadrangle);
	print_info(&rectangle);
	print_info(&square);
	print_info(&parallelogram);
	print_info(&rhomb);
}