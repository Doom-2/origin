#include <iostream>

void print_dynamic_array(int* arr, int logical_size, int actual_size) {

	std::cout << "Динамический массив: ";
	for (int i = 0; i < actual_size; i++)
		if (i < logical_size)
			std::cout << arr[i] << " ";
		else
			std::cout << "_" << " ";
}

int main() {
	setlocale(LC_ALL, "russian");
	int l_size, a_size;
	std::cout << "Введите фактичеcкий размер массива: ";
	std::cin >> a_size;
	std::cout << "Введите логический размер массива: ";
	std::cin >> l_size;
	int* arr = new int[l_size];
	if (l_size > a_size)
	{
		std::cerr << "Ошибка! Логический размер массива не может превышать фактический!" << std::endl;
		return 0;
	}

	for (int i = 0; i < l_size; i++) {
		std::cout << "Введите arr[" << i << "]: ";
		std::cin >> arr[i];
	}
	print_dynamic_array(arr, l_size, a_size);
	delete[] arr;
}
