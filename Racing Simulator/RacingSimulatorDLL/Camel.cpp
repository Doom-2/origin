#include "Camel.h"

unsigned int Camel::count = 0;

Camel::Camel() : GroundVehicle("Верблюд", 10, 30) {
	check_count();
	_breakTime = 5;
};

void Camel::resetCount() {
	count = 0;
}

double Camel::calcRaceTime(int dist) {
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
		return static_cast<double>(dist / _speed) + _breakTime + (_breakTime + 3) * (_breakNumber - 1);
		break;
	}
}

void Camel::check_count() {
	if (++count > 1)
		throw std::overflow_error(_name + " уже зарегистрирован!");
}
