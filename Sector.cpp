#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    std::cout << "Введите слово:\n";
    std::string s{""};
    std::cin >> s;
    std::cout << "Вы ввели:\n";
    std::cout << s << "\n";
}


