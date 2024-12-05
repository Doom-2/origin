//#include "Vehicle.h"
#include "Race.h"
#include "Camel.h"
#include "FastCamel.h"
#include "Centaur.h"
#include "SuperBoots.h"
#include "MagicCarpet.h"
#include "Eagle.h"
#include "Broom.h"

unsigned int Race::vehicle_count;

Race::Race(int rt, int dist) : _rt(static_cast<RaceType>(rt)), _dist(dist) 
{ 
	Camel::resetCount();
	FastCamel::resetCount();
	Centaur::resetCount();
	SuperBoots::resetCount();
	MagicCarpet::resetCount();
	Eagle::resetCount();
	Broom::resetCount();
	vehicle_count = 0;
}

void Race::registerVehicle(size_t vehicleNumber, std::string& vehicleName, double& vehicleTime) {
	_vm = static_cast<VehicleModel>(vehicleNumber);
	if (_vm < VehicleModel::CAMEL || _vm > VehicleModel::BROOM)
		throw std::domain_error("Ошибка ввода! Введите 1-7 или 0");
	else if (_rt == RaceType::GROUND && _vm > VehicleModel::SUPER_BOOTS ||
		_rt == RaceType::AIR && _vm < VehicleModel::MAGIC_CARPET)
		throw std::logic_error("Попытка зарегистрировать неправильный тип транспортного средства!");

	switch (_vm)
	{
	case Race::VehicleModel::CAMEL:
	{
		Camel camel;
		vehicleName = camel.getName();
		vehicleTime = camel.calcRaceTime(_dist);
	}
	break;
	case Race::VehicleModel::FAST_CAMEL:
	{
		FastCamel fast_camel;
		vehicleName = fast_camel.getName();
		vehicleTime = fast_camel.calcRaceTime(_dist);
	}
	break;
	case Race::VehicleModel::CENTAUR:
	{
		Centaur centaur;
		vehicleName = centaur.getName();
		vehicleTime = centaur.calcRaceTime(_dist);
	}
	break;
	case Race::VehicleModel::SUPER_BOOTS:
	{
		SuperBoots super_boots;
		vehicleName = super_boots.getName();
		vehicleTime = super_boots.calcRaceTime(_dist);
	}
	break;
	case Race::VehicleModel::MAGIC_CARPET:
	{
		MagicCarpet magic_carpet;
		vehicleName = magic_carpet.getName();
		vehicleTime = magic_carpet.calcRaceTime(_dist);
	}
	break;
	case Race::VehicleModel::EAGLE:
	{
		Eagle eagle;
		vehicleName = eagle.getName();
		vehicleTime = eagle.calcRaceTime(_dist);
	}
	break;
	case Race::VehicleModel::BROOM:
	{
		Broom broom;
		vehicleName = broom.getName();
		vehicleTime = broom.calcRaceTime(_dist);
	}
	break;
	default:
		break;
	}
	vehicle_count++;
}

int Race::getVehicleCount() {
	return vehicle_count;
}

int Race::getRaceDist() const {
	return _dist;
}

Race::RaceType Race::getRaceType() const {
	return _rt;
}
