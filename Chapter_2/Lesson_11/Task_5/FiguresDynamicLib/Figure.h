#pragma once
#include <iostream>


class Figure
{
protected:
	std::string _name{ "Фигура" };

public:
	Figure();

	Figure(const std::string& fig_name);

	virtual void printMe() const;
};
