#include <iostream>
#include <cmath>

int main(){
    std::cout<< "Please enter the radius of the circle"<<std::endl;
    float radius;
    std::cin>>radius;
    std::cout<<"The diameter of the circle is:"<< radius << std::endl;
    std::cout<<"The area is : " << M_PI * pow(radius, 2) << std::endl;


}