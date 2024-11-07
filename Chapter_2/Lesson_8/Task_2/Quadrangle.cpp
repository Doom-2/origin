#include "Quadrangle.h"
#include "aux_func.h"
#include "CustomExceptions.h"
#include <sstream>


Quadrangle::Quadrangle(double a, double b, double c, double d, double A, double B, double C, double D)
	: Figure("Четырехугольник"), _a(a), _b(b), _c(c), _d(d), _A(A), _B(B), _C(C), _D(D)
{
	checkCorrectness();
}

Quadrangle::Quadrangle(std::string fig_name, double a, double b, double c, double d, double A, double B, double C, double D)
	: Figure(fig_name), _a(a), _b(b), _c(c), _d(d), _A(A), _B(B), _C(C), _D(D)
{
	checkCorrectness();
}

void Quadrangle::printMe() const
{
	std::cout << _name
		<< " (стороны: " << _a << ", " << _b << ", " << _c << ", " << _d
		<< "; углы " << _A << ", " << _B << ", " << _C << ", " << _D
		<< ") создан" << std::endl;
	std::cout << std::endl;
}
	
void Quadrangle::checkCorrectness() const
{
	std::stringstream message;
	if (!areSame(_A + _B + _C + _D, 360))
	{
		message.str(std::string());
		message << "Ошибка создания фигуры " + _name + ". ";
		message << "Причина: ";
		message << "сумма углов четырехугольника не равна 360" << std::endl;
		throw FigureException(message.str());
	}
	else if (_a <= 0 || _b <= 0 || _c <= 0 || _d <= 0)
	{
		message.str(std::string());
		message << "Ошибка создания фигуры " + _name + ". ";
		message << "Причина: ";
		message << "все длины сторон должны быть положительным числом" << std::endl;
		throw FigureException(message.str());
	}
	if (_name == "Параллелограмм" || _name == "Прямоугольник" || _name == "Квадрат" || _name == "Ромб")
	{
		if (!areSame(_a, _c) || !areSame(_b, _d))
		{
			message << "Ошибка создания фигуры " + _name + ". ";
			message << "Причина: ";
			message << "стороны попарно не равны" << std::endl;
			throw FigureException(message.str());
		}
		else if (!areSame(_A, _C) || !areSame(_B, _D))
		{
			message << "Ошибка создания фигуры " + _name + ". ";
			message << "Причина: ";
			message << "углы попарно не равны" << std::endl;
			throw FigureException(message.str());
		}
	}
	
}
