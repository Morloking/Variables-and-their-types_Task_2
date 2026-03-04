#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    cout << "Введите слово:\n";
    string s{""};
    cin >> s;
    cout << "Вы ввели:\n";
    cout << s << "\n";
}

