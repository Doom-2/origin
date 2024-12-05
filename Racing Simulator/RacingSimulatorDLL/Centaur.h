#pragma once

#include "GroundVehicle.h"

class Centaur : public GroundVehicle
{
private:
	static unsigned int count;

public:
	Centaur();

	static void resetCount();

	double calcRaceTime(int dist);

	void check_count();
};
