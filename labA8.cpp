#include<iostream>
#include<string>

int main(){
    //question 1
    int n ;
    std::cout<<"Number of students: "<<std::endl;
    std::cin>>n;
    float* gpa = new float[n];
    float sum = 0;
    std::cout<<"Enter the GPAs for "<< n <<" students"<<std::endl;
    for(int i =0; i <n; i++){
        std::cin>> gpa[i];
        sum += gpa[i];
    }
    float hGpa = gpa[0];
    float lGpa = gpa[0];

    for (int i =1; i< n;i++) {
        if (gpa[i]>hGpa) {
            hGpa = gpa[i];
        }
        if (gpa[i]< lGpa) {
            lGpa = gpa[i];
        }
    }
    std::cout<<"Average GPA: "<< sum/n<<std::endl;
    std::cout<<"Highest GPA: "<< hGpa<<std::endl;
    std::cout<<"Lowest GPA: "<< lGpa<<std::endl;
    
    //question 2
    std::cout<<"Number of rooms: "<<std::endl;
    std::cin>>n;
    float* temp = new float[n];
    std::cout<<"Enter " << n <<" rooms temperatures"<<std::endl;
    for(int i = 0; i<n; i++){
        std::cin>>temp[i];
    }
    float maxT = temp[0];
    float minT = temp[0];

    for(int i = 1; i<n; i++){
        if (temp[i]>maxT){
            maxT = temp[i];
        }
        if(temp[i]<minT){
            minT = temp[i]; 
     }
    }
    float adjust;
    std::cout<<"Enter value for adjustment"<<std::endl;
    std::cin>>adjust;

    std::cout<<"Hottest room temperature: "<<maxT<<std::endl;
    std::cout<<"Hottest room temperature: "<<minT<<std::endl;
    std::cout<<"Updated temperatures: "<<std::endl;
    for(int i =0 ;i<n; i++){
        temp[i] += adjust;
        std::cout<< temp[i]<<std::endl;
    }

    //question 3
    std::cout<<"Enter the number of books: "<<std::endl;
    std::cin>>n;
    std::string* books = new std::string[n];
    std::cout<<"Enter names of "<< n<< " books"<<std::endl;
    for(int i =0; i<n; i++){
        std::cin>>books[i];
    }
    std::string sBook;
    std::cout<<"Enter the book to search: "<< std::endl;
    std::cin>>sBook;
    bool avail = false;
    for(int i = 0; i<n;i++){
        if(books[i] == sBook){
            avail= true;
            break;
        }
    }
    if(avail){
        std::cout<<"Book found"<<std::endl;
    }else{
        std::cout<<"Book not found"<<std::endl;
    }

    //question 4
    std::cout<<"Enter the number of products"<<std::endl;
    std::cin>>n;
    float* prices = new float[n];
    std::cout<<"Enter the price for "<< n<<" products"<<std::endl;
    for(int i=0; i< n; i++){
        std::cin>> prices[i];
    }
    int p;
    float new_price;
    std::cout<<"Enter the index of the product to change: "<<std::endl;
    std::cin>>p;
    std::cout<<"Enter the price change"<<std::endl;
    std::cin>>new_price;
    prices[p] = new_price;
    float sum1 =0;
    std::cout<<"Updated product prices: ";
    for(int i=0; i<n; i++){
        std::cout<<prices[i]<<std::endl;
        sum1 += prices[i];
    }
    std::cout<<"Total inventory cost: " << sum1<<std::endl;
}