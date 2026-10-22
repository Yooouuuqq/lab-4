#include <iostream>

int main(){
    int year;
    std::cout <<"Введите год";
    std::cin >> year;

    if ((year % 4 ==0 && year%100!=0)||(year % 400 ==0)){
        std::cout << year <<" - Год високосный\n";
        
    }else{
        std::cout<< year <<" - 20Год не высокосный\n";

    }
    return 0;
}