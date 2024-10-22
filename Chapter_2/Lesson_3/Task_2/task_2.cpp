#include <iostream>
#include <Windows.h>

using namespace std;

class Counter
{
private:
	int count{ 1 };

public:

	Counter() : Counter(1) {};

	Counter(const int& count)

	{
		this->count = count;
	}

	void increment()
	{
		count++;
	}

	void decrement()
	{
		count--;
	}

	void show()
	{
		cout << count << endl;
	}

	void set_count(int value) { count = value; }

};

// Checks for input only integers, throws an error othewise.
// Returns correct integer.
int cin_int()
{
	int val;
	do {
		try {
			if (!(cin >> val) || cin.peek() != '\n') throw 1;
		}
		catch (int i) {
			switch (i)
			{
			case 1:
				cerr << "Некорректный ввод. Допускается только целое число.\n";
				cin.clear();
				break;
			default:
				break;
			}
			while (cin.get() != '\n');
			continue;
		}
		break;
	} while (true);
	while (cin.get() != '\n');
	return val;
}

// Checks for input correct char
// Returns correct char
char cin_correct_char() {
	char ch;

	do {
		try {
			if (!(cin >> ch) || cin.peek() != '\n') throw 1;
			if (ch == '+' || ch == '-' || ch == '=' || ch == 'x') break;
			else
				throw 1;
		}
		catch (int i) {
			switch (i)
			{
			case 1:
				cerr << "Не корректнная комманда!\n";
				cin.clear();
				break;
			default:
				break;
			}
			while (cin.get() != '\n');
			continue;
		}
		break;
	} while (true);
	while (cin.get() != '\n');
	return ch;
}

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
