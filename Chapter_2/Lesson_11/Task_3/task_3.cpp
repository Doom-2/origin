#include "Leaver.h"
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Leaver::Leaver l1;
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << l1.leave(name) << std::endl;
    system("pause");
}
