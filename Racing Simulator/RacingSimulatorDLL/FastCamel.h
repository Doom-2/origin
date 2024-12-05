#pragma once

#include "GroundVehicle.h"

class FastCamel : public GroundVehicle
{
private:
	static unsigned int count;

public:
	FastCamel();

	static void resetCount();

	double calcRaceTime(int dist);

	void check_count();
};
