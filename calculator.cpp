#include<iostream>

int main()
{
    int a;
    std::cout << "Enter the first number" <<std::endl;
    std::cin >> a;
    int b;
    std::cout << "Enter the second number" <<std::endl;
    std::cin >> b;
    char c;
    std::cout << "Enter a for addition, m for multiplication, and d for division:" << std::endl;
    std::cin >> c;
    if(c == 'a'){
        std::cout << "The sum of " << a << " and " << b << " is " << a + b << std::endl;

    } else if (c == 'm'){
        std::cout << "The product of " << a << " and " << b << " is " << a * b << std::endl;

    }else if (c == 'd'){
        std::cout << "The quotient of " << a << " divided by " << b << " is " << a / b << std::endl;

    }else{
        std::cout<< "Please enter a valid response" << std::endl;
    }

}./
