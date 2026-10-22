#include <iostream>

int main(){
    int temp;
    std::cout <<"Введите температуру:\n";
    std::cin >> temp;
    
    if (temp>=30){
        std::cout<<"На улице жара\n ";
    }else if (temp>=13 && temp<30){
        std::cout<<"На улице тепло\n ";
    }else if (temp<13 && temp> -5 ){
        std::cout<<"На улице прохладно\n ";
    }else{
        std::cout<<"На улице холодно\n ";
    }
    return 0;

}