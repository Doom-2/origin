#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;


struct BankAccount
{
	int account_num{};
	string owner_name{};
	double balance{};
};

void change_ballace(BankAccount& ba, double new_balance) {
	ba.balance = new_balance;
}


int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	BankAccount* ba_array = new BankAccount[10];
	cout << "Введите номер счета: ";
	cin >> ba_array[0].account_num;
	cout << endl << "Введите имя владельца: ";
	cin >> ba_array[0].owner_name;
	cout << endl << "Введите баланс: ";
	cin >> ba_array[0].balance;
	cout << endl << "Введите новый баланс: ";
	double new_balance{};
	cin >> new_balance;
	change_ballace(ba_array[0], new_balance);
	cout << endl << fixed << setprecision(3) << "Ваш счет: " << ba_array[0].owner_name << ", " << ba_array[0].account_num << ", " << ba_array[0].balance << endl;
}
