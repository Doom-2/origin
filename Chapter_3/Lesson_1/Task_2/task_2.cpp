#include <iostream>

int calcGreaterThanX(int* numbers, int arr_size, int x) {
	int left = 0;
	int right = arr_size - 1;
	int i = arr_size; //index of the element larger than the starting point
	while (left <= right) {
		int middle = (left + right) / 2;
		//looking on the left
		if (numbers[middle] > x) {
			i = middle;
			right = middle - 1;
		}
		// looking on the right
		else
			left = middle + 1;
	}
	return arr_size - i;
}

int main() {
	setlocale(LC_ALL, "russian");
	int start_point;
	int numbers[] = { 14, 16, 19, 32, 32, 32, 56, 69, 72 };
	int arr_size = sizeof(numbers) / sizeof(*numbers);

	std::cout << "Введите точку отсчета: ";
	std::cin >> start_point;
	std::cout << "Количество элементов в массиве больших, чем " << start_point << ": "
		<< calcGreaterThanX(numbers, arr_size, start_point) << std::endl;
	return 0;
}