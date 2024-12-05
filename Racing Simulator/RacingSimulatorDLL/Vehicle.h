#pragma once

#include <iostream>
#include "Race.h"

class Vehicle
{
protected:
	std::string _name;
	int _speed;

public:
	Vehicle();

	Vehicle(const std::string& name, const int& speed);

	std::string getName();

	double calcRaceTime(int dist) const;
};

