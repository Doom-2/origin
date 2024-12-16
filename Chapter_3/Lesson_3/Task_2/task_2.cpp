#include <iostream>

void print_arr(int* arr, int size) {
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int pivoting(int* arr, int left, int right) {
	int pivot = arr[right];
	std::cout << "Pivot: " << pivot << std::endl;

	while (true)
	{
		while (arr[left] < pivot)
			left++;
		while (arr[right] > pivot)
			right--;
		if (left >= right)
			return left;
		swap(&arr[left], &arr[right]);
		if (arr[left] == arr[right])
			left++;
	}
}

void q_sort(int* arr, int left, int right) {

	if (left - right == 1)
		return;

	int border = pivoting(arr, left, right);
	q_sort(arr, left, border - 1);
	q_sort(arr, border + 1, right);
}

void quick_sort(int* arr, int size) {
	int left = 0;
	int right = size - 1;
	q_sort(arr, left, right);
}


int main() {
	setlocale(LC_ALL, "russian");
	int arr_1[] = { 9, -3, 5, 2, 6, 8, -6, 1, 3 };
	int arr_1_size = sizeof(arr_1) / sizeof(*arr_1);
	int arr_2[] = { 88, 91, 87, 59, 53, 49, 29, 16, 4, 27, 28, 89, 2, 25, 74 };
	int arr_2_size = sizeof(arr_2) / sizeof(*arr_2);
	int arr_3[] = { 24, 66, 20, 79, 30, 16, 19, 62, 94, 59, 0, 7, 59, 90, 84, 60, 95, 62 };
	int arr_3_size = sizeof(arr_3) / sizeof(*arr_3);

	//Array 1
	std::cout << "Исходный массив: ";
	print_arr(arr_1, arr_1_size);
	quick_sort(arr_1, arr_1_size);
	std::cout << "Отсортированный массив: ";
	print_arr(arr_1, arr_1_size);
	std::cout << std::endl;
	//Array 2
	std::cout << "Исходный массив: ";
	print_arr(arr_2, arr_2_size);
	quick_sort(arr_2, arr_2_size);
	std::cout << "Отсортированный массив: ";
	print_arr(arr_2, arr_2_size);
	std::cout << std::endl;
	//Array 3
	std::cout << "Исходный массив: ";
	print_arr(arr_3, arr_3_size);
	quick_sort(arr_3, arr_3_size);
	std::cout << "Отсортированный массив: ";
	print_arr(arr_3, arr_3_size);
	std::cout << std::endl;
	return 0;
}
