#pragma once

#include "Vehicle.h"

class GroundVehicle : public Vehicle
{
protected:
	int _moveTime{};
	int _breakTime{};
	int _breakNumber{};

public:

	GroundVehicle(const std::string& name, const int& speed, const int& moveTime);

	void calcBrakeNumber(int dist);
};
