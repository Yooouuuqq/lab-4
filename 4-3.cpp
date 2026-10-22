#include <iostream>


int main() {
    

    int age;
    std::cout << "Введите возраст: ";
    std::cin >> age;

    if (age < 0) {
        std::cout << "Некорректный возраст\n";
    } else if (age <= 12) {
        std::cout << "Ребёнок\n";
    } else if (age <= 17) {
        std::cout << "подросток\n";
    } else if (age <= 64) {
        std::cout << "Взрослый\n";
    } else {
        std::cout << "Пожилой\n";
    }

    return 0;
}