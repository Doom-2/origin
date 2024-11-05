#include <iostream>
#include <Windows.h>

using namespace std;

class bad_lenght : public exception
{
public:
    const char* what() const override { return "Вы ввели слово запретной длины! До свидания"; }
};


int function(string str, int forbidden_length) {
    if (str.size() != forbidden_length)
        return str.size();
    else
        throw bad_lenght();
}

int main() {
    SetConsoleCP(1251); // set the win-cp 1251 code page in the input stream
    SetConsoleOutputCP(1251); // set the win-cp 1251 code page in the output stream
    int forbidden_len;
    string word;
    cout << "Введите запретную длину: ";
    cin >> forbidden_len;
    while (true) {
        cout << "Введите слово: ";
        cin >> word;
        try
        {
            cout << "Длина слова " << word << " равна " << function(word, forbidden_len) << endl;
        }
        catch (const bad_lenght& e)
        {
            cout << e.what();
            break;
        }
    }
}
