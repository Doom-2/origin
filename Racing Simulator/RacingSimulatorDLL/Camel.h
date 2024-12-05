#pragma once

#include "GroundVehicle.h"

class Camel : public GroundVehicle
{
private:
	static unsigned int count;

public:
	Camel();

	static void resetCount();

	double calcRaceTime(int dist);

	void check_count();
};
