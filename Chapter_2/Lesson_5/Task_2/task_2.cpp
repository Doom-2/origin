#include <iostream>

using namespace std;


class Figure
{
private:
	string _name{ "������" };

protected:

	void set_name(const string& name) {
		_name = name;
	}

	string get_name() const {
		return _name;
	}

public:
	virtual void printMe() const
	{
		cout << _name << endl;
	}
};



class Triangle : public Figure
{
private:
	string _name{ "�����������" };
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
		set_name(_name);
	}

	void get_sizes() const
	{
		cout << "�������: " << "a=" << _a << " b=" << _b << " c=" << _c << endl;
	}

	void get_angles() const
	{
		cout << "����: " << "A=" << _A << " B=" << _B << " C=" << _C << endl;
	}

protected:
	void printMe() const
	{
		cout << get_name() << ": " << endl;
		get_sizes();
		get_angles();
		cout << endl;
	}
};

class RightTriangle : public Triangle
{
private:
	string _name{ "�������������� �����������" };

public:
	RightTriangle() : RightTriangle(10, 20, 30, 30, 60) {}

	RightTriangle(double a, double b, double c, double A, double B) : Triangle(a, b, c, A, B, 90) {
		set_name(_name);
	}
};

class IsoscelesTriangle : public Triangle
{
private:
	string _name{ "�������������� �����������" };

public:
	IsoscelesTriangle() : IsoscelesTriangle(10, 20, 30, 60) {}

	IsoscelesTriangle(double a, double b, double A, double B) : Triangle(a, b, a, A, B, A) {
		set_name(_name);
	}
};

class EquilateralTriangle : public Triangle
{
private:
	string _name{ "�������������� �����������" };

public:
	EquilateralTriangle() : EquilateralTriangle(10) {}

	EquilateralTriangle(double a) : Triangle(a, a, a, 60, 60, 60) {
		set_name(_name);
	}
};

class Quadrangle : public Figure
{
private:
	string _name{ "���������������" };
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
	}

	void get_sizes() const
	{
		cout << "�������: " << "a=" << _a << " b=" << _b << " c=" << _c << " d=" << _d << endl;
	}

	void get_angles() const
	{
		cout << "����: " << "A=" << _A << " B=" << _B << " C=" << _C << " D=" << _D << endl;
	}

	void printMe() const
	{
		cout << get_name() << ": " << endl;
		get_sizes();
		get_angles();
		cout << endl;
	}
};

class Rectangle : public Quadrangle
{
private:
	string _name{ "�������������" };

public:
	Rectangle() : Rectangle(10, 20) {}

	Rectangle(double a, double b) : Quadrangle(a, b, a, b, 90, 90, 90, 90) {
		set_name(_name);
	}
};

class Square : public Quadrangle
{
private:
	string _name{ "�������" };

public:
	Square() : Square(10) {}

	Square(double a) : Quadrangle(a, a, a, a, 90, 90, 90, 90) {
		set_name(_name);
	}
};

class Parallelogram : public Quadrangle
{
private:
	string _name{ "��������������" };

public:
	Parallelogram() : Parallelogram(10, 20, 60, 120) {}

	Parallelogram(double a, double b, double A, double B) : Quadrangle(a, b, a, b, A, B, A, B) {
		set_name(_name);
	}
};

class Rhomb : public Quadrangle
{
private:
	string _name{ "����" };

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
	RightTriangle right_triangle(10, 20, 30, 50, 60);
	IsoscelesTriangle isosceles_triangle(10, 20, 50, 60);
	EquilateralTriangle equilateral_triangle(30);
	Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
	Rectangle rectangle(10, 20);
	Square square(20);
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