#include <iostream>
#include "aux_func.h"

using namespace std;

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