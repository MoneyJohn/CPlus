#include <iostream>
#include <cmath>
#include "trig.h"
using namespace std;
double pi = 4 * atan(1.0);
int main(){
    double theta = 0.0;

    do{
        std::cout<<"Enter angle in degree"<<std::endl;
        std::cin>>theta;
        theta = fmod(theta, 360);
        double thetar = theta * pi/180;
        std::cout<<"Sin: "<<trig::sin(thetar)<<std::endl;
        std::cout<<"Cos: "<<trig::cos(thetar)<<std::endl;
        std::cout<<"Exp: "<<trig::exp(theta)<<std::endl;
        }while (theta!=0);
        return 0;

    }

