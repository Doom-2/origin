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
	int month_num;

	do {
		cout << "Введите номер месяца: ";
		cin >> month_num;

		switch (month_num)
		{	
		case static_cast<int>(months::goodbye):
			cout << "До свидания" << endl;
			break;
		case static_cast<int>(months::январь):
				cout << "Январь" << endl;
				break;
		case static_cast<int>(months::февраль):
			cout << "Февраль" << endl;
			break;
		case static_cast<int>(months::март):
			cout << "Март" << endl;
			break;
		case static_cast<int>(months::апрель):
			cout << "Апрель" << endl;
			break;
		case static_cast<int>(months::май):
			cout << "Май" << endl;
			break;
		case static_cast<int>(months::июнь):
			cout << "Июнь" << endl;
			break;
		case static_cast<int>(months::июль):
			cout << "Июль" << endl;
			break;
		case static_cast<int>(months::август):
			cout << "Август" << endl;
			break;
		case static_cast<int>(months::сентябрь):
			cout << "Сентябрь" << endl;
		case static_cast<int>(months::октябрь):
			cout << "Октябрь" << endl;
			break;
		case static_cast<int>(months::ноябрь):
			cout << "Ноябрь" << endl;
			break;
		case static_cast<int>(months::декабрь):
			cout << "Декабрь" << endl;
			break;
		default:
			cout << "Неправильный номер!" << endl;
			break;
		}
	} while (month_num);
}
