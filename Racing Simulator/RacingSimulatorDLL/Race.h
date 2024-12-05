#pragma once

#include <iostream>

class Race
{
private:
	static unsigned int vehicle_count;

public:
	enum class RaceType
	{
		GROUND = 1,
		AIR,
		MIXED
	};

	enum class VehicleModel
	{
		CAMEL = 1,
		FAST_CAMEL,
		CENTAUR,
		SUPER_BOOTS,
		MAGIC_CARPET,
		EAGLE,
		BROOM
	};

	Race(int rt, int dist);

	void registerVehicle(size_t vehicleNumber, std::string& vehicleName, double& vehicleTime);

	int getVehicleCount();

	int getRaceDist() const;

	RaceType getRaceType() const;

protected:
	RaceType _rt{RaceType::GROUND};
	VehicleModel _vm{ VehicleModel::CAMEL };
	int _dist{};
};
