#include <Greeter.h>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Greater::Greeter g1;
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << g1.greeter(name) << std::endl;
}
