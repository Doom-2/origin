#include <iostream>

using namespace std;


struct address
{
	string city;
	string street;
	int building;
	int apartment_num;
	int postcode;
};

void print_address(address& a) {
	cout << "Город: " << a.city << endl;
	cout << "Улица: " << a.street << endl;
	cout << "Номер дома: " << a.building << endl;
	cout << "Номер квартиры: " << a.apartment_num << endl;
	cout << "Индекс: " << a.postcode << endl;
}


int main() {

	setlocale(LC_ALL, "RU");

	address* address_array = new address[10];

	address_array[0] = { "Москва", "Арбат", 12, 8, 123456 };
	address_array[1].city = "Ижевск";
	address_array[1].street = "Пушкина";
	address_array[1].building = 59;
	address_array[1].apartment_num = 143;
	address_array[1].postcode = 953769;

	print_address(address_array[0]);
	cout << endl;
	print_address(address_array[1]);
}
