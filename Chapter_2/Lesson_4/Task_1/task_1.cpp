#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class Addresses
{
private:
	string city{};
	string street{};
	int house_number{};
	int appartment_number{};

public:
	Addresses() : Addresses("", "", 0, 0) {};

	Addresses(const char* _city, const char* _street, const int& _house_number, const int& _appartment_number)
	{
		this->city = _city;
		this->street = _street;
		this->house_number = _house_number;
		this->appartment_number = _appartment_number;
	}

	void set_city(const string &city)
	{
		this->city = city;
	}

	void set_street(const string &street)
	{
		this->street = street;
	}

	void set_house_number(const int &house_number)
	{
		this->house_number = house_number;
	}

	void set_appartment_number(const int &appartment_number)
	{
		this->appartment_number = appartment_number;
	}

	const string GetAddress() const
	{
		return city + ", " + street + ", " + to_string(house_number) + ", " + to_string(appartment_number);
	}
};

// Checks if the string is not empty and is an integer
bool isNumber(const string& s) {
	return !s.empty() && (s.find_first_not_of("0123456789") == s.npos);
}

int main() {
	setlocale(LC_ALL, "Russian");
	string s;
	int arr_size, i = 0;
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
				fout << addresses[i].GetAddress();
			else fout << endl << addresses[i].GetAddress();
		delete[] addresses;
	}
	fout.close();
	fin.close();
	cout << "Выполнено!" << endl;
}
