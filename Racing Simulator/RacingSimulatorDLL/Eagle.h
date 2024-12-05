#pragma once
#include "AirVehicle.h"

class Eagle : public AirVehicle
{
private:
	static unsigned int count;

public:
	Eagle();

	static void resetCount();

	void check_count();
};
