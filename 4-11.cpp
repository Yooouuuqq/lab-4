#include <iostream>

int main() {
    double x, y;
    std::cout << "Введите координату x: ";
    std::cin >> x;
    std::cout << "Введите координату y: ";
    std::cin >> y;

    if (x == 0 && y == 0) {
        std::cout << "Точка в начале координат\n";
    } else if (x == 0) {
        std::cout << "Точка лежит на оси Y\n";
    } else if (y == 0) {
        std::cout << "Точка лежит на оси X\n";
    } else if (x > 0 && y > 0) {
        std::cout << "1-я четверть\n";
    } else if (x < 0 && y > 0) {
        std::cout << "2-я четверть\n";
    } else if (x < 0 && y < 0) {
        std::cout << "3-я четверть\n";
    } else {
        std::cout << "4-я четверть\n";
    }

    return 0;
}