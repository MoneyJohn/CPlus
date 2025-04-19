#include<iostream>
#include<string>

int main(){
    //question 1
    std::string str;
    std::cout<<"Enter a String: "<<std::endl;
    std::cin>>str;
    for(int i = str.length() -1; i >=0; i--){
        std::cout<< str[i]<<std::endl;
    }

    //question 2
    int a;
    int b;
    std::cout<<"Enter balance for Account 1:"<<std::endl;
    std::cin>>a;
    std::cout<<"Enter balance for Account 2:"<< std::endl;
    std::cin>>b;
    int* a1 = &a;
    int* b1 = &b;
    int changeb = *a1;
    *a1 = *b1;
    *b1 = changeb;
    std::cout<<"Account 1 = "<< a << ", Account 2 = "<< b<<std::endl;

    //question 3
    int size; 
    std::cout<<"Enter the number of products:"<<std::endl;
    std::cin>>size; 
   std::string products[size];
   std::cout<<"Enter the products: "<<std::endl;
   for(int i = 0; i<size; i++){
    std::cin>>products[i];
   }
   std::string search;
   std::cout<<"Search product: "<<std::endl;
   std::cin>>search;
   bool found = false;
   for(int i = 0; i<size; i++){
    if(products[i] == search){
        found = true;
        break;
    }
   }
   if(found){
    std::cout<<search<< " is available in the store"<<std::endl;
   }else{
    std::cout<<search<< " is not available in the store"<<std::endl;
   }

   //question 4
   std::cout<<"Enter the number of days: "<<std::endl;
   std::cin>>size;
   int temp[size];
   std::cout<<"Enter the temperatures: "<<std::endl;
   for(int i = 0; i<size; i++){
    std::cin>>temp[i];
   }
   int* hot = &temp[0];
   for(int i = 1; i<size; i++){
    if (*(temp + i ) > *hot){
        hot = temp + i;
    }
   }
   std::cout<<"Hottest day recorded: "<< *hot<<std::endl;
   }

