#include<iostream>
#include<fstream>

int main(){
    std::ofstream inpFile("example.txt");
    if(!inpFile){
        std::cout<<"Error"<<std::endl;
        return 1;
    }
    inpFile<<"Hello, World!";
    inpFile<<"This is a sample file.";
    
    
}