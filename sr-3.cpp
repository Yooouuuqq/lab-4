#include <iostream>
#include <iomanip>

int main(){
    double m;
    std::cout<<"Введите свой вес в кг:\n";
    std::cin >> m;

    double r;
    std::cout <<"Введите свой рост в метрах:\n";
    std::cin >> r;

    std::cout << std::fixed <<std::setprecision(2);
    double imt=m/(r*r);
    if (imt<=18.4){
        std::cout<<"У вас недостаточная масса - " << imt <<"\n";
    }else if (imt<=24.9){
        std::cout<<"У вас нормальный вес "<< imt <<"\n";
    }else{
        std::cout<<"У вас избыточный вес "<< imt <<"\n";
    }
    return 0;
}   