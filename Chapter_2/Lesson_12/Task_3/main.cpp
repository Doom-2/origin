#include "extended_array.h"

int main() {
	ExtArray<int> v1{ 0, 1, 1, 1, 0, 0, 1 };
	ExtArray<bool> v2{ true, 0, false, 1, true };
	ExtArray<double> v3{ 0, 1.5, 1 };
	ExtArray<char> v4{ 0, 'a', 15 };
	ExtArray<int> v5{ 4, 2, 7, 3, -5, 0, -3, 1 };
	try {
		std::cout << v1.checkSum() << std::endl;
		std::cout << v2.checkSum() << std::endl;
		std::cout << v3.checkSum() << std::endl;
	}
	catch (std::bad_typeid& e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << v4.checkSum() << std::endl;
	}
	catch (std::bad_typeid& e)
	{
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << v5.checkSum() << std::endl;
	}
	catch (std::logic_error& e)
	{
		std::cout << e.what() << std::endl;
	}
}