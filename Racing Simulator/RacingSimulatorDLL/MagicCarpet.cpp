#include "MagicCarpet.h"

unsigned int MagicCarpet::count = 0;

MagicCarpet::MagicCarpet() : AirVehicle("Ковер-самолёт", 10) {
	check_count();
}

void MagicCarpet::resetCount() {
	count = 0;
}

double MagicCarpet::calcRaceTime(int dist) const {
	if (dist < 1000)
		return dist / _speed;
	else if (dist < 5000)
		return dist * (1 - (_distReductionFactor + 3)/ 100.0) / _speed;
	else if (dist < 10000)
		return dist * (1 - (_distReductionFactor + 10) / 100.0) / _speed;
	else
		return dist * (1 - (_distReductionFactor + 5) / 100.0) / _speed;
}

void MagicCarpet::check_count() {
	if (++count > 1)
		throw std::overflow_error(_name + " уже зарегистрирован!");
}
