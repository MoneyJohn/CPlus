#include<iostream>
#include<fstream>
#include<string>
int main(){

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
       oFile << word;
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