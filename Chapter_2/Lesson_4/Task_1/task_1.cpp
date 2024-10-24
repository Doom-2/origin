#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class Addresses
{
private:
	string _city;
	string _street;
	int _house_number;
	int _appartment_number;

public:
	Addresses() : Addresses("", "", 0, 0) {};

	Addresses(const string& city, const string& street, int house_number, int appartment_number)
		: _city(city), _street(street), _house_number(house_number), _appartment_number(appartment_number)
	{

	}

	void set_city(const string& city)
	{
		_city = city;
	}

	void set_street(const string& street)
	{
		_street = street;
	}

	void set_house_number(int house_number)
	{
		if (house_number < 0) {
			cerr << "Номер дома не может быть отрицательным числом\n"
				"Будет использовано значение по умолчанию 0" << endl;
			return;
		}
		_house_number = house_number;
	}

	void set_appartment_number(int appartment_number)
	{
		if (appartment_number < 0) {
			cerr << "Номер квартиры не может быть отрицательным числом\n"
				"Будет использовано значение по умолчанию 0" << endl;
			return;
		}
		_appartment_number = appartment_number;
	}

	const string getAddress() const
	{
		return _city + ", " + _street + ", " + to_string(_house_number) + ", " + to_string(_appartment_number);
	}
};

// Checks if the string is not empty and is an integer
bool isNumber(const string& s) {
	return !s.empty() && (s.find_first_not_of("-0123456789") == s.npos);
}

int main() {
	setlocale(LC_ALL, "Russian");
	string s;
	int arr_size;
	ifstream fin("in.txt");
	ofstream fout("out.txt");
	if (fin.is_open()) {
		fin >> s;

		if (isNumber(s))
			arr_size = stoi(s);
		else {
			cerr << "Неправильное содержимое файла" << endl;
			return 1;
		}
		fout << arr_size << endl;
		Addresses* addresses = new Addresses[arr_size];

		//Set each field of each class instance, grouping the rows by 4
		for (int i = 0; i < arr_size; i++) {
			for (int j = 0; j < 4; j++) {
				fin >> s;
				switch (j)
				{
				case 0:
					addresses[i].set_city(s);
					break;
				case 1:
					addresses[i].set_street(s);
					break;
				case 2:
					if (isNumber(s))
						addresses[i].set_house_number(stoi(s));
					else {
						cerr << "Номер дома должен быть целым числом\n"
							"Проверьте строку " << (i + 1) * (j + 1) + i + 1 << endl;
						return 1;
					}
					break;
				case 3:
					if (isNumber(s))
						addresses[i].set_appartment_number(stoi(s));
					else {
						cerr << "Номер квартиры должен быть целым числом\n"
							"Проверьте строку " << (i + 1) * (j + 1) + 1 << endl;
						return 1;
					}
					break;
				default:
					break;
				}
				if (fin.eof() && (j + 1) * (i + 1) < arr_size * 4) {
					cerr << "Данных не хватает!" << endl;
					return 1;
				}
			}
		}

		for (int i = arr_size - 1; i >= 0; i--)
			if (i == arr_size - 1)
				fout << addresses[i].getAddress();
			else fout << endl << addresses[i].getAddress();
		delete[] addresses;
	}
	fout.close();
	fin.close();
	cout << "Выполнено!" << endl;
}
