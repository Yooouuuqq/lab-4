#include <iostream>
int main() {
    int a, b, c;
    std::cout << "Введите первую сторону:\n";
    std::cin >> a;
    std::cout << "Введите вторую сторону:\n";
    std::cin >> b;
    std::cout << "Введите третью сторону:\n";
    std::cin >> c;

    if ((a + b) > c || (a + c) > b || (b + c) > a) {
        std::cout << "Треугольник со сторонами: - " << a << "," <<b<<","<< c << " существует\n";
        if (a == b && b == c) {
            std::cout << "Треугольник равностороний\n";

        } else if ((a == b && b != c) || (a == c && c != b) || (b == c && b != c)) {
            std::cout << "Треугольник равнобедренный\n";

        } else {
            std::cout << "Треугольник разносторонний\n";
        }
    }else{
        std::cout << "Треугольник не существует\n";
    }
    return 0;
}
