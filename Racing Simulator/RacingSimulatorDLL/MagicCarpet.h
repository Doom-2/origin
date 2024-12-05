#pragma once
#include "AirVehicle.h"

class MagicCarpet : public AirVehicle
{
private:
	static unsigned int count;

public:
	MagicCarpet();

	static void resetCount();

	double calcRaceTime(int dist) const;

	void check_count();
};
