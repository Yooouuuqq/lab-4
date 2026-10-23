#include <iostream>
#include <bitset>

int main() {
    int n;
    std::cout << "Введите целое число: ";

    // Проверка корректности ввода
    if (!(std::cin >> n)) {
        std::cout << "Ошибка: введено не число!\n";
    } else {
        std::cout << "Двоичная:         " << std::bitset<16>(n) << "\n";
        std::cout << "Восьмеричная:     " << std::oct << n << "\n";
        std::cout << "Шестнадцатеричная: " << std::hex << n << "\n";
    }

    return 0;
}