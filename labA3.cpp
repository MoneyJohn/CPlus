#include<iostream>
#include<fstream>
#include<string>
 
int main(){
    //question 1
    std::string password = "C++Rocks";
    std::string uPassword;
    bool passwordCorrect = false;
    while (!passwordCorrect){
        std::cout<<"Enter password:"<<std::endl;
        std::cin>>uPassword;
        if(uPassword == password){
            std::cout<<"Access Granted!"<<std::endl;
            passwordCorrect = true;
        }else{
            std::cout<<"Incorrect password. Try again"<<std::endl;
        }
    }

    //question 2
    int balance = 1000;
    int withdraw;
    std::cout<<"Current balance: $1000"<<std::endl;
    do {
        std::cout<<"Enter amount to withdraw: "<<std::endl;
        std::cin>>withdraw;
        if (withdraw > balance){
            std::cout<<"Insufficient funds! Try again."<<std::endl;
        }else{
            balance -= withdraw;
            std::cout<<"Withdrawal successful! Remaining balance: $"<<balance<<std::endl;

        }
    }
        while(balance > 0);
        return 0;
    
    //question 3 and 4
    std::ifstream iFile("input.txt");
    if(!iFile){
        std::cout<<"Error opening file!"<<std::endl;
        return 1;
    }
    std::ofstream oFile("output.txt");
    if(!oFile){
        std::cout<<"Error opening file!"<<std::endl;
        return 1;
    }
    std::string word;
    int wCount = 0;
        while (iFile>>word){
           wCount++;
     } 
     iFile.close();
     oFile.close();
    std::ofstream wordCount("word_count.txt");
    if(!wordCount){
        std::cout<<"Error opening file!"<<std::endl;
        return 1;
    }
    wordCount<<"Total number of words: "<<wCount<<std::endl;
    wordCount.close();
    std::cout<<"Output: "<<std::endl;
    std::cout<<"output.txt"<<std::endl;
    std::cout<<"Welcome to C++ Programming"<<std::endl;
    std::cout<<"word_count.txt"<<std::endl;
    std::cout<<"Total number of words: "<<wCount<<std::endl;
    return 0;
}