// Auxiliary Functions

#include "AuxFunc.h"

// Sorts an array of vehicleData struct instances by vehicleTime in ascending order
void bubbleSort(vehicleData* vData, int size) {
	bool swapped;

	// access each array element
	for (int i = 0; i < size - 1; i++) {
		swapped = false;
		//compare two adjacent array elements and swap them if necessary
		for (int j = 0; j < size - i - 1; j++) {
			if (vData[j].vehicleTime > vData[j + 1].vehicleTime) {
				vehicleData temp = vData[j];
				vData[j] = vData[j + 1];
				vData[j + 1] = temp;
				swapped = true;
			}
		}

		// If no two elements were swapped, then break
		if (!swapped)
			break;
	}
}


// Checks for positive integers, throws an error othewise.
// Returns correct integer.
// Takes a single argument indicating max allowed value
int cinInt(int maxNum)
{
	int val;
	do {
		try {
			if (!(std::cin >> val)) throw 1;
			if (std::cin.good() && val <= 0 && std::cin.peek() == '\n') throw 2;
			if (std::cin.peek() != '\n') throw 3;
			if (maxNum && std::cin.good() && val > maxNum && std::cin.peek() == '\n') throw 4;
		}
		catch (int i) {
			switch (i)
			{
			case 1:
			case 3:
				if (maxNum == 1)
					std::cerr << "Ошибка ввода! Введите " << maxNum << "\n>";
				else if (maxNum)
					std::cerr << "Ошибка ввода! Введите 1-" << maxNum << "\n>";
				else
					std::cerr << "Некорректный ввод. Допускается только целое число.\n" << ">";
				std::cin.clear();
				break;
			case 2:
				if (maxNum == 1)
					std::cerr << "Ошибка ввода! Введите " << maxNum << "\n>";
				else if (maxNum)
					std::cerr << "Ошибка ввода! Введите 1-" << maxNum << "\n>";
				else
					std::cerr << "Некорректный ввод. Целое число должно быть положительным.\n" << ">";
				std::cin.clear();
				break;
			case 4:
				if (maxNum == 1)
					std::cerr << "Ошибка ввода! Введите " << maxNum << "\n>";
				else
					std::cerr << "Ошибка ввода! Введите 1-" << maxNum << "\n>";
				std::cin.clear();
				break;
			default:
				break;
			}
			while (std::cin.get() != '\n');
			continue;
		}
		break;
	} while (true);
	while (std::cin.get() != '\n');
	return val;
}