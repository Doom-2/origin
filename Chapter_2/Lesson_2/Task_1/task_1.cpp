#include <iostream>

using namespace std;


enum class months
{
	goodbye,
	январь,
	февраль,
	март,
	апрель,
	май,
	июнь,
	июль,
	август,
	сентябрь,
	октябрь,
	ноябрь,
	декабрь
};


int main() {

	setlocale(LC_ALL, "RU");
	months month;
	int month_num;

	do {
		cout << "Введите номер месяца: ";
		cin >> month_num;
		month = static_cast<months>(month_num);
		switch (month)
		{
		case months::goodbye:
			cout << "До свидания" << endl;
			break;
		case months::январь:
			cout << "Январь" << endl;
			break;
		case months::февраль:
			cout << "Февраль" << endl;
			break;
		case months::март:
			cout << "Март" << endl;
			break;
		case months::апрель:
			cout << "Апрель" << endl;
			break;
		case months::май:
			cout << "Май" << endl;
			break;
		case months::июнь:
			cout << "Июнь" << endl;
			break;
		case months::июль:
			cout << "Июль" << endl;
			break;
		case months::август:
			cout << "Август" << endl;
			break;
		case months::сентябрь:
			cout << "Сентябрь" << endl;
			break;
		case months::октябрь:
			cout << "Октябрь" << endl;
			break;
		case months::ноябрь:
			cout << "Ноябрь" << endl;
			break;
		case months::декабрь:
			cout << "Декабрь" << endl;
			break;
		default:
			cout << "Неправильный номер!" << endl;
			break;
		}
	} while (month_num);
}
