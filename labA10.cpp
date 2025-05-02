#include <iostream>


//question 1
class Student{
    public:
    std::string name;
    int rollNumber;

    void setVal(std::string n, int r){
        name = n;
        rollNumber = r; 
    }
    void display(){
        std::cout<<"Student Name: "<< name<<std::endl;
        std::cout<<"Roll Number: "<< rollNumber<<std::endl;
    }
};

//question 2
class Rectangle{
    public:
    float length;
    float width;
    
    void setVal1(float l, float w){
        length = l;
        width = w;
    }
    float area(){
        return length * width;
    }

};

//question 3
class Book{
    public:
    std::string title;
    float price;

    void setVal2(std::string t, float p){
        title = t;
        price =p;
    }
    void display1(){
        std::cout<<"Book: "<<title<<" , Price: "<<price<<std::endl;
    }
};

//question 4
class Circle{
    public:
    float radius;
    Circle(float r){
        radius = r;
    }
    float circumference(){
        return 2* 3.14*radius;
    }
};

int main(){

    //question 1
    Student s;
    std::string name;
    int roll;
    std::cout<<"Name: "<<std::endl;
    std::cin>>name;
    std::cout<<"roll number: "<<std::endl;
    std::cin>>roll;
    s.setVal(name, roll);
    s.display();

    //question 2
    Rectangle r; 
    float l;
    float w;
    std::cout<<"Length: "<<std::endl;
    std::cin>> l;
    std::cout<<"Width: "<<std::endl;
    std::cin>> w;
    r.setVal1(l, w);
    std::cout<<"Area of Rectangle: "<< r.area()<<std::endl;

    //question 3
    Book b1;
    Book b2;
    std::string t1;
    std::string t2;
    float p1; 
    float p2;
    std::cout<<"Book 1 Title: "<<std::endl;
    std::cin>>t1;
    std::cout<<"Book 1 price"<<std::endl;
    std::cin>>p1;
    std::cout<<"Book 2 Title: "<<std::endl;
    std::cin>>t2;
    std::cout<<"Book 2 price"<<std::endl;
    std::cin>>p2;
    b1.setVal2(t1, p1);
    b2.setVal2(t2, p2);
    b1.display1();
    b2.display1();

    //question 4
    float rad; 
    std::cout<<"Radius: "<<std::endl;
    std::cin>>rad;
    Circle circ(rad);
    std::cout<<"Circumference of Circle:"<< circ.circumference()<<std::endl;
}

