#include <iostream>
#include <Windows.h>
#include "Counter.h"
#include "aux_func.h"

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string user_answer;
	char user_cmd{};
	int initial_val;
	cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";

	while (true) {
		cin >> user_answer;
		if (user_answer == "да" || user_answer == "нет") break;
		cout << "Допускается ввод только да или нет.\n"
			"Вы хотите указать начальное значение счётчика ? Введите да или нет : ";
	}
	Counter counter;
	if (user_answer == "да") {
		cout << "Введите начальное значение счетчика: ";
		initial_val = cin_int();
		counter.set_count(initial_val);
	}

	while (user_cmd != 'x') {
		cout << "Введите команду ('+', '-', '=' или 'x'): ";
		user_cmd = cin_correct_char();
		if (user_cmd == '+')
			counter.increment();
		else if (user_cmd == '-')
			counter.decrement();
		else if (user_cmd == '=')
			counter.show();
	}
	cout << "До свидания!";
}
