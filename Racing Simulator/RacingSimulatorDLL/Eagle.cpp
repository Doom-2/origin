#include "Eagle.h"

unsigned int Eagle::count = 0;

Eagle::Eagle() : AirVehicle("Орёл", 8) {
	check_count();
	_distReductionFactor = 6;
}

void Eagle::resetCount() {
	count = 0;
}

void Eagle::check_count() {
	if (++count > 1)
		throw std::overflow_error(_name + " уже зарегистрирован!");
}
