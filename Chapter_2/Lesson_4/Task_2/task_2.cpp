#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class Addresses
{
private:
	int house_number{};
	int appartment_number{};

public:
	string city{};
	string street{};

public:
	Addresses() : Addresses("", "", 0, 0) {};

	Addresses(const char* _city, const char* _street, const int& _house_number, const int& _appartment_number)
	{
		this->city = _city;
		this->street = _street;
		this->house_number = _house_number;
		this->appartment_number = _appartment_number;
	}

	void set_city(const string& city)
	{
		this->city = city;
	}

	void set_street(const string& street)
	{
		this->street = street;
	}

	void set_house_number(const int& house_number)
	{
		if (house_number < 0) {
			cerr << "Номер дома не может быть отрицательным числом\n"
				"Будет использовано значение по умолчанию 0" << endl;
			return;
		}
		this->house_number = house_number;
	}

	void set_appartment_number(const int& appartment_number)
	{
		if (appartment_number < 0) {
			cerr << "Номер квартиры не может быть отрицательным числом\n"
				"Будет использовано значение по умолчанию 0" << endl;
			return;
		}
		this->appartment_number = appartment_number;
	}

	const string& get_city() const
	{
		return city;
	}

	const string GetAddress() const
	{
		return city + ", " + street + ", " + to_string(house_number) + ", " + to_string(appartment_number);
	}
};

// Checks if the string is not empty and is an integer
bool isNumber(const string& s) {
	return !s.empty() && (s.find_first_not_of("-0123456789") == s.npos);
}

// Sorts an array of Addresses class instances by city alphabetically
void bubbleSort(Addresses* addresses, int size) {
	bool swapped;

	// access each array element
	for (int i = 0; i < size - 1; i++) {
		swapped = false;
		//compare two adjacent array elements and swap them if necessary
		for (int j = 0; j < size - i - 1; j++) {
			if (addresses[j].get_city() > addresses[j + 1].get_city()) {
				Addresses temp = addresses[j];
				addresses[j] = addresses[j + 1];
				addresses[j + 1] = temp;
				swapped = true;
			}
		}

		// If no two elements were swapped, then break
		if (!swapped)
			break;
	}
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
					addresses[i].city = s;
					break;
				case 1:
					addresses[i].street = s;
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

		bubbleSort(addresses, arr_size);
		for (int i = 0; i < arr_size; i++) {
			if (i == 0)
				fout << addresses[i].GetAddress();
			else fout << endl << addresses[i].GetAddress();
		}

		delete[] addresses;
	}
	fout.close();
	fin.close();
	cout << "Выполнено!" << endl;
}
