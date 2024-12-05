#include "RacingSimulatorDLL/AuxFunc.h"
#include "RacingSimulatorDLL/PrintFunc.h"
#include "RacingSimulatorDLL/Vehicles.h"


int main()
{
	setlocale(LC_ALL, "russian");
	int raceType, dist, vehicleModel{}, mode{};
	double vehicleTime;

	while (true)
	{
		vehicleData* vehicleDataArray = new vehicleData[7];
		std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
		printRaceTypeList();
		raceType = cinInt(3);
		system("cls");
		std::cout << "Укажите длину дистанции (должна быть положительна): ";
		dist = cinInt();
		Race race(raceType, dist);
		system("cls");
		printRaceTitle(race);
		std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства" << std::endl;
		printMode1Menu();
		mode = cinInt(1);

		// main logic
		while (true)
		{
			system("cls");
			printRaceTitle(race);
			if (race.getVehicleCount())
				printvehicleDataList(race, vehicleDataArray);
			printVehicleList();
			while (true) {
				std::cin >> vehicleModel;

				// if zero is entered and there are no registered vehicles
				if (vehicleModel == 0 && !race.getVehicleCount()) {
					system("cls");
					printRaceTitle(race);
					std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства" << std::endl;
					printVehicleList();
					continue;
				}
				// if zero is entered and the number of registered vehicles is not enough to start the race
				else if (vehicleModel == 0 && race.getVehicleCount() < 2) {
					system("cls");
					printRaceTitle(race);
					std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства" << std::endl;
					printvehicleDataList(race, vehicleDataArray);
					printVehicleList();
					continue;
				}
				// if zero is entered and the number of registered vehicles is enough to start the race
				else if (vehicleModel == 0 && race.getVehicleCount() >= 2)
					break;

				// if non-zero is entered, try to register the vehicle
				if (vehicleModel) {
					std::string vehicleName{};
					try {
						race.registerVehicle(vehicleModel, vehicleName, vehicleTime);
						system("cls");
						std::cout << vehicleName << " успешно зарегистрирован!" << std::endl;
						vehicleDataArray[race.getVehicleCount() - 1].vehicleName = vehicleName;
						vehicleDataArray[race.getVehicleCount() - 1].vehicleTime = vehicleTime;
					}
					catch (std::exception& e) {
						system("cls");
						std::cout << e.what() << std::endl;
					}
					printRaceTitle(race);
					if (race.getVehicleCount())
						printvehicleDataList(race, vehicleDataArray);
					printVehicleList();
					continue;
				}

			}
			system("cls");
			printRaceTitle(race);
			printMode2Menu();
			mode = cinInt(2);
			if (mode == 1)
				continue;
			if (mode == 2)
				break;
		}
		system("cls");
		printRaceStatistics(vehicleDataArray, race.getVehicleCount());
		std::cout << std::endl;
		printRetryOrFinish();
		mode = cinInt(2);
		if (mode == 1) {
			delete[] vehicleDataArray;
			system("cls");
			continue;
		}
		if (mode == 2) {
			delete[] vehicleDataArray;
			break;
		}
	}
}
