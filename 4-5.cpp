#include <iostream>
#include <iomanip>
int main(){
    double a,b;
char operation;

std::cout <<"Введите первое число\n";
std::cin >> a;
std::cout <<"Введите второе число\n";
std::cin >> b;
std::cout <<"Введите операцию(*, /, -, +):";
std::cin >> operation;

std::cout <<std::fixed << std::setprecision(2);

    switch (operation){
        case '+':
            std::cout <<"Результат:"<< a+b <<"\n";
            break;
        case '-':
            std::cout <<"Результат:"<< a-b<<"\n";
            break;
        case '*':
            std::cout <<"Результат:"<< a*b<<"\n";
            break;
        case '/':
            if (b==0){
                std::cout <<"Делить на ноль нельзя/n";
            }else{
            std::cout <<"Результат:"<<a/b<<"\n";
            }
            break;
        default:
            std::cout <<"Неизвестная операция\n";
    }
    return 0;




}

