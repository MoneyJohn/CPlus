#include<iostream>

int main(){
    int arrLen;
    std::cout<<"Enter a size for the array:"<<std::endl;
    std::cin>>arrLen;
    int arr1[arrLen];
    std::cout<<"Enter "<< arrLen <<" numbers for the array"<<std::endl;
    for(int i = 0; i < arrLen; i++){
        std::cin>>arr1[i];
    }
    int arrMin = arr1[0];
    int arrMax = arr1[0];
    for(int i = 1; i < arrLen; i++){
        if (arr1[i] < arrMin){
            arrMin = arr1[i];
        }
        if(arr1[i] > arrMax){
            arrMax = arr1[i];
        }
    }
    std::cout<<"Minimum: "<< arrMin <<std::endl;
    std::cout<<"Maximum: "<< arrMax<<std::endl;

}