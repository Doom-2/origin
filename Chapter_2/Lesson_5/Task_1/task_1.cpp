#include <iostream>

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

public:
	void printMe() const
	{
		cout << _name << ": " << _size_num << endl;
	}
};


class Triangle :public Figure
{

public:
	Triangle() {
		set_name("Треугольник");
		set_size_num(3);
	}
};


class Quadrangle :public Figure
{

public:
	Quadrangle() {
		set_name("Четырехугольник");
		set_size_num(4);
	}
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