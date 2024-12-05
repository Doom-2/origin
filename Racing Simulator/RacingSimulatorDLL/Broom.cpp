#include "Broom.h"

unsigned int Broom::count = 0;

Broom::Broom() : AirVehicle("Метла", 20) {
	check_count();
}

void Broom::resetCount() {
	count = 0;
}

double Broom::calcRaceTime(int dist) const {
	return dist * (1 - (dist / 1000) / 100.0) / _speed;
}

void Broom::check_count() {
	if (++count > 1)
		throw std::overflow_error(_name + " уже зарегистрирована!");
}
