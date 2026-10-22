#include <iostream>
int main() {
    int number;
    std::cout <<"Введите число:";
    std::cin >> number;
    
    if (number%2 ==0){
        std::cout << "Число"<< number<<"- четное\n";

    }else{
        std::cout << "число" << "- нечетное\n";

    }
    return 0;
}