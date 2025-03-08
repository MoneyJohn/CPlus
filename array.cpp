#include<iostream>
#include<string>

int main(){
    int arrInt[3] = {5, 10, 15};
    std::string arrStr[2]{"John", "Money"};

    for(int i = 0; i < 3; i++){
        std::cout<<arrInt[i]<<std::endl;
    }
    for(int n : arrInt){
        std::cout<< n << std::endl;
    }
    return 0;

}