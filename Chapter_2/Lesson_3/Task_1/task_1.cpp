
#include <iostream>

using namespace std;


class Calculator
{
public:
	double num1, num2;

	double add()
	{
		return num1 + num2;
	}

	double multiply()
	{
		return num1 * num2;
	}

	double subtract_1_2()
	{
		return num1 - num2;
	}

	double subtract_2_1()
	{
		return num2 - num1;
	}

	double divide_1_2()
	{
		return num1 / num2;
	}

	double divide_2_1()
	{
		return num2 / num1;
	}

	bool set_num1(double num1)
	{
		return num1 ? true : false;
	}

	bool set_num2(double num2)
	{
		return num2 ? true : false;
	}

};


int main()
{
	setlocale(LC_ALL, "RU");
	Calculator calc;
	while (true) {
		while (true) {
			cout << "Введите num1: ";
			cin >> calc.num1;
			if (calc.set_num1(calc.num1)) break;
			cout << "Неверный ввод!" << endl;
		}
		while (true) {
			cout << "Введите num2: ";
			cin >> calc.num2;
			if (calc.set_num2(calc.num2)) break;
			cout << "Неверный ввод!" << endl;
		}
		cout << "num1 + num2 = " << calc.add() << endl;
		cout << "num1 - num2 = " << calc.subtract_1_2() << endl;
		cout << "num2 - num1 = " << calc.subtract_2_1() << endl;
		cout << "num1 * num2 = " << calc.multiply() << endl;
		cout << "num1 / num2 = " << calc.divide_1_2() << endl;
		cout << "num2 / num1 = " << calc.divide_2_1() << endl;
	}
}
