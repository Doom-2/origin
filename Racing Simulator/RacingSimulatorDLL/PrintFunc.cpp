// Printing functions for user interaction
#include "PrintFunc.h"
#include "AuxFunc.h"
#include "Race.h"


void printRaceStatistics(vehicleData* vData, int size) {
	bubbleSort(vData, size);
	std::cout << "Результаты гонки:" << std::endl;
	for (int i = 0; i < size; i++)
		std::cout << i + 1 << ". " << vData[i].vehicleName << ". Время: " << vData[i].vehicleTime << std::endl;
}

void printRaceTypeList() {
	std::cout << "1. Гонка для наземного транспорта" << std::endl;
	std::cout << "2. Гонка для воздушного транспорта" << std::endl;
	std::cout << "3. Гонка для наземного и воздушного транспорта" << std::endl;
	std::cout << "Выберите тип гонки: ";
}

void printRaceTitle(Race& r) {
	switch (r.getRaceType())
	{
	case Race::RaceType::GROUND:
		std::cout << "Гонка для наземного транспорта. ";
		break;
	case Race::RaceType::AIR:
		std::cout << "Гонка для воздушного транспорта. ";
		break;
	case Race::RaceType::MIXED:
		std::cout << "Гонка для наземного и воздушного транспорта. ";
		break;
	default:
		break;
	}
	std::cout << "Расстояние " << r.getRaceDist() << std::endl << std::endl;
}

void printMode1Menu() {
	std::cout << "1. Зарегистрировать транспорт" << std::endl;
	std::cout << "Выберите действие: ";
}

void printMode2Menu() {
	std::cout << "1. Зарегистрировать транспорт" << std::endl;
	std::cout << "2. Начать гонку" << std::endl;
	std::cout << "Выберите действие: ";
}

void printRetryOrFinish() {
	std::cout << "1. Провести еще одну гонку" << std::endl;
	std::cout << "2. Выйти" << std::endl;
	std::cout << "Выберите действие: ";
}

void printVehicleList() {
	std::cout << "1. Верблюд" << std::endl;
	std::cout << "2. Верблюд быстроход" << std::endl;
	std::cout << "3. Кентавр" << std::endl;
	std::cout << "4. Ботинки-вездеходы" << std::endl;
	std::cout << "5. Ковер-самолёт" << std::endl;
	std::cout << "6. Орел" << std::endl;
	std::cout << "7. Метла" << std::endl;
	std::cout << "0. Закончить регистрацию" << std::endl;
	std::cout << "Выберите транспорт или 0 для окончания процесса регистрации: ";
}

void printvehicleDataList(Race& r, vehicleData* vDataArray) {
	std::cout << "Зарегистрированные транспортные средства: ";
	for (int i = 0; i < r.getVehicleCount(); i++)
		if (i == r.getVehicleCount() - 1)
			std::cout << vDataArray[i].vehicleName;
		else
			std::cout << vDataArray[i].vehicleName << ", ";
	std::cout << std::endl;
}
