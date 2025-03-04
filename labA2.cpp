#include<iostream>
int main(){

    //question 1
    int amount;
    std::cout<<"Please enter the amount"<<std::endl;
    std::cin>>amount;
    if(amount > 100){
        std::cout<<"Congratulations! You are eligible for a discount!"<<std::endl;
    }

    //question 2
    int grade;
    std::cout<<"Please enter your grade"<<std::endl;
    std::cin>>grade;
    if(grade>=50){
        std::cout<<"Pass"<<std::endl;
    }else{
        std::cout<<"Fail"<<std::endl;
    }
    //question 3
    int numBooks;
    std::cout<<"Enter the number of books purchased this month: "<<std::endl;
    std::cin>>numBooks;
    if(numBooks > 0){
        if(numBooks == 1){
            std::cout<<"You have earned 5 points"<<std::endl;
        }else if (numBooks == 2)
        {
            std::cout<<"You have earned 15 points"<<std::endl;
        }else if (numBooks == 3)
        {
            std::cout<<"You have earned 30 points"<<std::endl;
        }else if (numBooks >= 4)
        {
            std::cout<<"You have earned 60 points"<<std::endl;
        }
    }
    else{std::cout<<"You have not purchased any books this month!"<<std::endl;
    }

    //question 4
    int numSelect;
    double radius, length, width, base, height;
    std::cout<<"Geometry Calculator"<<std::endl;
    std::cout<<"1. Calculate the Area of a Circle"<<std::endl;
    std::cout<<"2. Calculate the Area of a Rectangle"<<std::endl;
    std::cout<<"3. Calculate the Area of a Triangle"<<std::endl;
    std::cout<<"4. Quit"<<std::endl;
    std::cout<<"Enter your choice (1-4)"<<std::endl;
    std::cin>>numSelect;
    for(int i = 1; i <=10; i++){
        if(numSelect == 1){
            std::cout<<"Enter the radius of the circle"<<std::endl;
            std::cin>>radius;
            std::cout<<"The area of the circle is "<< 3.14156 * radius * radius<<std::endl;
            break;

        }
        else if(numSelect == 2){
            std::cout<<"Enter the length of the rectangle"<<std::endl;
            std::cin>>length;
            std::cout<<"Enter the width of the rectangle"<<std::endl;
            std::cin>>width;
            std::cout<<"The area of the rectangle is "<< length * width <<std::endl;
            break;

        }
        else if(numSelect == 3){
            std::cout<<"Enter the base of the triangle"<<std::endl;
            std::cin>>base;
            std::cout<<"Enter the height of the triangle"<<std::endl;
            std::cin>>height;
            std::cout<<"The area of the triangle is "<< 0.5 * base * height << std::endl;
            break;

        }
        else if(numSelect == 4){
            std::cout<<"Exiting Program. Goodbye!"<<std::endl;
            break;
        }
        else{
            std::cout<<"Invalid choice! Please enter a number between 1 and 4"<<std::endl;
            break;
        }
    }
    
    //question 5
    int num;
    int sum = 0;
    std::cout<<"Enter a positive integer"<<std::endl;
    std::cin>>num;
    for(int i = 1; i <= num; i++){
        sum+= i;
    }
    std::cout<<"The sum of numbers from 1 to "<< num << " is: "<< sum <<std::endl;
    
}