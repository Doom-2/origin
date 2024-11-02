#include <iostream>

using namespace std;

#define MODE 1

#ifndef MODE
#error MODE identifier is required
#endif // !MODE

#if MODE == 1
int add(int a, int b) {
	return a + b;
}
#endif // MODE == 1

int main() {
	setlocale(LC_ALL, "Russian");

#if !MODE
	cout << "Работаю в режиме тренировки" << endl;
#elif MODE == 1
	int a, b;
	cout << "Работаю в боевом режиме" << endl;
	cout << "Введите число 1: " << endl;
	if (!(cin >> a)) {
		cerr << "Введено не целое число" << endl;
		return 1;
	}
	cout << "Введите число 2: " << endl;
	if (!(cin >> b)) {
		cerr << "Введено не целое число" << endl;
		return 1;
	}
	cout << "Результат сложения: " << add(a, b) << endl;
#else
	cout << "Неизвестный режим. Завершение работы." << endl;
#endif // MODE
}
