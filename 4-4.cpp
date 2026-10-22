#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
    double a,b,c;

    std::cout<<"Введите первое число:\n";
    std::cin >> a;
    std::cout <<"Введите второе число:\n";
    std::cin >> b;
    std::cout<<"Введите третье число:\n";
    std::cin >> c;

    if (a==0){
        std::cout<<"Уравнение не квадротное";

    } else{
        double d = b*b -4*a*c;
        std::cout<<std::fixed<<std::setprecision(2);
        if (d>0){
            double x1=(-b+ std::sqrt(d))/2*a;
            double x2=(-b - std::sqrt(d))/2*a;
            std::cout <<"Два корня:x1="<< x1<<",x2 ="<< x2 <<"\n";
        } else if (d==0){
            double x=-b/(2*a);
            std::cout <<"Один корень:, x="<<x<<"\n";
        } else{
            std::cout <<"Корней нет\n";
        }


    }
    return 0;
}