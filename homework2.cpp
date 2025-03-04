#include<iostream>
int main(){
    int weight;
    int height;
    std::cout<<"Please enter your weight"<<std::endl;
    std::cin>>weight;
    std::cout<<"please enter your height in inches"<<std::endl;
    std::cin>>height;
    int bWei = weight * 703;
    int bHei = height * height;
    double bmi = bWei / bHei;
    if(bmi < 18.5){
        std::cout<<"You are under weight"<<std::endl;
    }else if(bmi >= 18 && bmi <= 25){
        std::cout<<"You weight is optimal for your height"<<std::endl;
    }
    else{
        std::cout<<"You are over weight"<<std::endl;
    }
}