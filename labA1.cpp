#include <iostream>

//Lab assignment 1

int main(){
//question 1
int n1 = 50;
int n2 = 100;
int total = n1 + n2;
std::cout<<"question 1: "<< total<<std::endl;

//question 2
int n3 = 28;
int n4 = 32;
int n5 = 73;
int n6 = 54;
int n7 = 105;
int sum = n3+n4+n5+n6+n7;
int avg = sum / 2;
std::cout<<"question 2: The average of the numbers is: "<< avg <<std::endl;

//question 3
int gallon = 15;
int tAvmpg = 20;
int hAvmpg = 25;
int distT = gallon * tAvmpg;
int distH = gallon * hAvmpg;
std::cout<<"question 3: The distance when the car drives in town = "<<distT<< ". When the car drives on the highway, the distance = "<< distH<<std::endl;

//question 4
std::cout<<"Char: " <<sizeof(char)<<" bytes"<<std::endl;
std::cout<<"int: " <<sizeof(int)<<" bytes"<<std::endl;
std::cout<<"float: " <<sizeof(float)<<" bytes"<<std::endl;
std::cout<<"double: " <<sizeof(double)<<" bytes"<<std::endl;

//question 5
int tempF;
std::cout<<"Please enter the temperature in Farenheit"<<std::endl;
std::cin>>tempF;
int tempC1 = tempF - 32;
int tempC2 = tempC1 * 5/9;
std::cout<<"The temperature in Celcius is "<< tempC2<<std::endl;
}

