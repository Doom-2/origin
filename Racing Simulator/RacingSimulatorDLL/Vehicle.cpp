#include "Vehicle.h"


Vehicle::Vehicle() : _name(), _speed() {}

Vehicle::Vehicle(const std::string& name, const int& speed)
	: _name(name), _speed(speed) {}

double Vehicle::calcRaceTime(int dist) const {
	return static_cast<double>(dist / _speed);
}

std::string Vehicle::getName() {
	return _name;
}
