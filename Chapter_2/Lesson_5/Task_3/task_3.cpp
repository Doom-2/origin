// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
#include <iostream>
#include <limits>

using namespace std;


class Figure
{
private:
	int _size_num{};
	string _name{ "Фигура" };

protected:

	void set_size_num(int size_num) {
		_size_num = size_num;
	}

	void set_name(const string& name) {
		_name = name;
	}

	string get_name() const {
		return _name;
	}

	const int& get_size_num() const {
		return _size_num;
	}

	bool areSame(double a, double b) const
	{
		return fabs(a - b) < DBL_EPSILON;
	}

	void printCorrectness() const {
		if (get_size_num() == 0)
			cout << "Правильная" << endl;
		else
			cout << "Неправильная" << endl;
	}

public:
	virtual void printMe() const
	{
		cout << get_name() << ": " << endl;
		printCorrectness();
		cout << "Количество сторон: " << get_size_num();
		cout << endl << endl;
	}
};



class Triangle : public Figure
{
private:
	int _size_num = 3;
	string _name{ "Треугольник" };
	double _a{};
	double _b{};
	double _c{};
	double _A{};
	double _B{};
	double _C{};

public:
	Triangle() : Triangle(10, 20, 30, 50, 60, 70) {}

	Triangle(double a, double b, double c, double A, double B, double C)
		: _a(a), _b(b), _c(c), _A(A), _B(B), _C(C) {
		set_size_num(_size_num);
		set_name(_name);
	}

protected:
	void get_sizes() const
	{
		cout << "Стороны: " << "a=" << _a << " b=" << _b << " c=" << _c << endl;
	}

	void get_angles() const
	{
		cout << "Углы: " << "A=" << _A << " B=" << _B << " C=" << _C << endl;
	}

	void printCorrectness() const {
		if (get_size_num() == 3 && areSame(_A + _B + _C, 180))
			cout << "Правильная" << endl;
		else
			cout << "Неправильная" << endl;
	}

	void printMe() const
	{
		cout << get_name() << ": " << endl;
		printCorrectness();
		cout << "Количество сторон: " << get_size_num();
		cout << endl;
		get_sizes();
		get_angles();
		cout << endl;
	}
};

class RightTriangle : public Triangle
{
private:
	string _name{ "Прямоугольный треугольник" };

public:
	RightTriangle() : RightTriangle(10, 20, 30, 30, 60) {}

	RightTriangle(double a, double b, double c, double A, double B) : Triangle(a, b, c, A, B, 90) {
		set_name(_name);
	}
};

class IsoscelesTriangle : public Triangle
{
private:
	string _name{ "Равнобедренный треугольник" };

public:
	IsoscelesTriangle() : IsoscelesTriangle(10, 20, 30, 60) {}

	IsoscelesTriangle(double a, double b, double A, double B) : Triangle(a, b, a, A, B, A) {
		set_name(_name);
	}
};

class EquilateralTriangle : public Triangle
{
private:
	string _name{ "Равносторонний треугольник" };

public:
	EquilateralTriangle() : EquilateralTriangle(10) {}

	EquilateralTriangle(double a) : Triangle(a, a, a, 60, 60, 60) {
		set_name(_name);
	}
};

class Quadrangle : public Figure
{
private:
	int _size_num = 4;
	string _name{ "Четырехугольник" };
	double _a;
	double _b;
	double _c;
	double _d;
	double _A;
	double _B;
	double _C;
	double _D;

public:
	Quadrangle() : Quadrangle(10, 20, 30, 40, 50, 60, 120, 130) {}

	Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D)
		: _a(a), _b(b), _c(c), _d(d), _A(A), _B(B), _C(C), _D(D) {
		set_name(_name);
		set_size_num(_size_num);
	}

protected:
	void get_sizes() const
	{
		cout << "Стороны: " << "a=" << _a << " b=" << _b << " c=" << _c << " d=" << _d << endl;
	}

	void get_angles() const
	{
		cout << "Углы: " << "A=" << _A << " B=" << _B << " C=" << _C << " D=" << _D << endl;
	}

	void printCorrectness() const {
		if (get_size_num() == 4 && areSame(_A + _B + _C, 360))
			cout << "Правильная" << endl;
		else
			cout << "Неправильная" << endl;
	}

	void printMe() const
	{
		cout << get_name() << ": " << endl;
		printCorrectness();
		cout << "Количество сторон: " << get_size_num();
		cout << endl;
		get_sizes();
		get_angles();
		cout << endl;
	}
};

class Rectangle : public Quadrangle
{
private:
	string _name{ "Прямоугольник" };

public:
	Rectangle() : Rectangle(10, 20) {}

	Rectangle(double a, double b) : Quadrangle(a, b, a, b, 90, 90, 90, 90) {
		set_name(_name);
	}
};

class Square : public Quadrangle
{
private:
	string _name{ "Квадрат" };

public:
	Square() : Square(10) {}

	Square(double a) : Quadrangle(a, a, a, a, 90, 90, 90, 90) {
		set_name(_name);
	}
};

class Parallelogram : public Quadrangle
{
private:
	string _name{ "Параллелограмм" };

public:
	Parallelogram() : Parallelogram(10, 20, 60, 120) {}

	Parallelogram(double a, double b, double A, double B) : Quadrangle(a, b, a, b, A, B, A, B) {
		set_name(_name);
	}
};

class Rhomb : public Quadrangle
{
private:
	string _name{ "Ромб" };

public:
	Rhomb() : Rhomb(10, 40, 140) {}

	Rhomb(double a, double A, double B) : Quadrangle(a, a, a, a, A, B, A, B) {
		set_name(_name);
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