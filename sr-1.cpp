#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    srand(time(0));
    int a=1+rand()%100;
    int s=0;
    while(s==0){
        int n;
        std::cout<<"Введите число: ";
        std::cin>>n;
        if (n!=a){
            if (n>a){
                std::cout <<"Ваше число больше\n";
            }else{
                std::cout<<"Ваше число меньше\n";
            }
        }else{
            std::cout<<"Вы угадали\n";
            s+=1;
        }

    }
    return 0;
}
