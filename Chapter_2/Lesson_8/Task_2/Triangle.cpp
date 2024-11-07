#include "Triangle.h"
#include "aux_func.h"
#include "CustomExceptions.h"
#include <sstream>


Triangle::Triangle(double a, double b, double c, double A, double B, double C)
	: Figure("Треугольник"), _a(a), _b(b), _c(c), _A(A), _B(B), _C(C)
{
	checkCorrectness();
}

Triangle::Triangle(const std::string& fig_name, double a, double b, double c, double A, double B, double C)
	: Figure(fig_name), _a(a), _b(b), _c(c), _A(A), _B(B), _C(C)
{
	checkCorrectness();
}

void Triangle::printMe() const
{
	std::cout << _name
		<< " (стороны: " << _a << ", " << _b << ", " << _c
		<< "; углы " << _A << ", " << _B << ", " << _C
		<< ") создан" << std::endl;
	std::cout << std::endl;
}

void Triangle::checkCorrectness() const
{
	std::stringstream message;
	if (!areSame(_A + _B + _C, 180))
	{
		message.str(std::string());
		message << "Ошибка создания фигуры " + _name + ". ";
		message << "Причина: ";
		message << "сумма углов треугольника не равна 180" << std::endl;
		throw FigureException(message.str());
	}
	else if (_a <= 0 || _b <= 0 || _c <= 0)
	{
		message.str(std::string());
		message << "Ошибка создания фигуры " + _name + ". ";
		message << "Причина: ";
		message << "все длины сторон должны быть положительным числом" << std::endl;
		throw FigureException(message.str());
	}
}
