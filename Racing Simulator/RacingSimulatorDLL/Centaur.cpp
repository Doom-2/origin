#include "Centaur.h"

unsigned int Centaur::count = 0;

Centaur::Centaur() : GroundVehicle("Кентавр", 15, 8) {
	check_count();
	_breakTime = 2;
};

void Centaur::resetCount() {
	count = 0;
}

double Centaur::calcRaceTime(int dist) {
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
		return static_cast<double>(dist / _speed) + _breakTime + _breakTime * (_breakNumber - 1);
		break;
	}
}

void Centaur::check_count() {
	if (++count > 1)
		throw std::overflow_error(_name + " уже зарегистрирован!");
}
