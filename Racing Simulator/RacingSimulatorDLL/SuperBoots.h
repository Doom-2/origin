#pragma once

#include "GroundVehicle.h"

class SuperBoots : public GroundVehicle
{
private:
	static unsigned int count;

public:
	SuperBoots();

	static void resetCount();

	double calcRaceTime(int dist);

	void check_count();
};
