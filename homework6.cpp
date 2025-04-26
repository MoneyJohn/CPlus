#include<iostream>
#include<fstream>
#include<string>

int main(){
    std::ofstream inpFile("example.txt");
    inpFile<<"Hello, World!\n";
    inpFile<<"This is a sample file.";
    inpFile.close();
    std::ifstream inFile("example.txt");
    std::ofstream outFile("example_2.txt");
    std::string line;
    
    while(getline(inFile, line)){
        outFile<<line<<"\n";
        std::cout<<line<<std::endl;
    }
    
    inFile.close();
    outFile.close();
    

    
    
}