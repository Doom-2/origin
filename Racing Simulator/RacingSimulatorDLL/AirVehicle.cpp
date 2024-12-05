#include "AirVehicle.h"

AirVehicle::AirVehicle(const std::string& name, const int& speed)
	: Vehicle(name, speed) {}

double AirVehicle::calcRaceTime(int dist) const {
	return (dist * (1-_distReductionFactor / 100.0)) / _speed;
}
