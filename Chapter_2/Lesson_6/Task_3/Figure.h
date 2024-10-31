#pragma once

#include <iostream>

using namespace std;


class Figure
{
protected:
	std::string _name{"Фигура"};

public:
	virtual void printMe() const;
};
