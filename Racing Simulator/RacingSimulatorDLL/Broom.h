#pragma once
#include "AirVehicle.h"

class Broom : public AirVehicle
{
private:
	static unsigned int count;

public:
	Broom();

	static void resetCount();

	double calcRaceTime(int dist) const;

	void check_count();
};
