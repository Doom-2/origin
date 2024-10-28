#include <iostream>

using namespace std;


class Figure
{
private:
	const int _size_num;
	const string _name;

public:
	//Base constructor
	Figure() : _size_num(0), _name("Фигура") {}

	void printMe() const
	{
		cout << _name << ": " << _size_num << endl;
	}

protected:
	//Constructor for derived classes
	Figure(int size_num, string name) : _size_num(size_num), _name(name) {}
};


class Triangle :public Figure
{

public:
	Triangle(): Figure(3, "Треугольник") {}
};


class Quadrangle :public Figure
{

public:
	Quadrangle() : Figure(4, "Четырехугольник") {}
};

int main() {
	setlocale(LC_ALL, "Russian");
	Figure figure;
	Triangle triangle;
	Quadrangle quadrangle;
	cout << "Количество сторон:" << endl;
	figure.printMe();
	triangle.printMe();
	quadrangle.printMe();
}