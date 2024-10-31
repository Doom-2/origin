#include <iostream>
#include "math_func.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, user_sel;
	cout << "Введите первое целое число: ";
	if (!(cin >> a)) {
		cerr << "Введено не целое число" << endl;
		return 1;
	}
	cout << "Введите второе целое число: ";
	if (!(cin >> b)) {
		cerr << "Введено не целое число" << endl;
		return 1;
	}
	cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	cin >> user_sel;
	switch (user_sel)
	{
	case 1:
		cout << a << " + " << b << " = " << add(a, b);
		break;
	case 2:
		cout << a << " - " << b << " = " << sub(a, b);
		break;
	case 3:
		cout << a << " * " << b << " = " << mult(a, b);
		break;
	case 4:
		try {
			cout << a << " / " << b << " = " << divide(a, b);
		}
		catch (Exception& e) {
			cout << endl << "Exception occurred" << endl
				<< e.what();
		}
		break;
	case 5:
		cout << a << " в степени " << b << " = " << power(a, b);
		break;
	default:
		cerr << "Выбрана несуществующая операция" << endl;
		break;
	}
}