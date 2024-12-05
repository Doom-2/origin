#include "GroundVehicle.h"

GroundVehicle::GroundVehicle(const std::string& name, const int& speed, const int& moveTime)
	: Vehicle(name, speed), _moveTime(moveTime) {
}

void GroundVehicle::calcBrakeNumber(int dist) {
	if ((dist / _speed) < _moveTime)
		_breakNumber = 0;
	else
		if ((dist / _speed) % _moveTime == 0)
			_breakNumber = (dist / _speed) / _moveTime - 1;
		else
			_breakNumber = (dist / _speed) / _moveTime;
}
