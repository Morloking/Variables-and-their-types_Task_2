#include <cstdlib>

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main() {
    system("chcp 1251 > nul");
    cout << "Введите слово:\n";
    string s{""};
    cin >> s;
    cout << "Вы ввели:\n";
    cout << s << "\n";
}