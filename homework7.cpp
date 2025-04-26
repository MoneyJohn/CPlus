#include<iostream>
#include<string>

int main(){
    std::string sentence;
    std::cout<<"Enter a sentence to convert to Pig Latin"<<std::endl;
    while (std::cin >> sentence) {  
        if (sentence.length() == 1) {
            std::cout << sentence << "AY ";
        } else if (sentence.length() > 1) {
            for (int i = 1; i < sentence.length(); i++) {
                std::cout << sentence[i];
            }
            std::cout << sentence[0] << "AY ";
        }
    }
}