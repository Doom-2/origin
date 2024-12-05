#include "SuperBoots.h"

unsigned int SuperBoots::count = 0;

SuperBoots::SuperBoots() : GroundVehicle("Ботинки-вездеходы", 6, 60) {
	check_count();
	_breakTime = 10;
};

void SuperBoots::resetCount() {
	count = 0;
}

double SuperBoots::calcRaceTime(int dist) {
	calcBrakeNumber(dist);
	switch (_breakNumber)
	{
	case 0:
		return static_cast<double>(dist / _speed);
		break;
	case 1:
		return static_cast<double>(dist / _speed) + _breakTime;
		break;
	default: //number of breakes > 2
		return static_cast<double>(dist / _speed) + _breakTime + (_breakTime - 5) * (_breakNumber - 1);
		break;
	}
}

void SuperBoots::check_count() {
	if (++count > 1)
		throw std::overflow_error(_name + " уже зарегистрированы!");
}
