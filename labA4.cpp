#include<iostream>
#include<string>
#include<cctype>

//question 1
int reverseNumber(int n){
    int reverseNum = 0;
    while(n != 0){
        int num = n % 10;
        reverseNum = reverseNum * 10 + num;
        n /= 10;
    }
    return reverseNum;
}

//question 2
void decimalToBinary(int m){
    std::string binary = "";
    while(m > 0){
        binary = char((m %2)+ '0')+ binary;
        m /= 2;
    }
    std::cout << binary;
}
void countVowelsConsonants(std::string str, int &vowels, int &consonants);

//question 3
void countVowelsConsonants(std::string str, int &vowels, int &consonants){
    vowels = 0;
    consonants = 0;
    for (int i = 0; i < str.length(); i++){
        char c = str[i];
        if (std::isalpha(c)){
            c = std::tolower(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                vowels++;
            }else{
                consonants++;
            }
        }
        
    }
}

//question 4
int sumOfDigits(int b){
    int sum = 0;
    while(b != 0){
        sum += b % 10;
        b /= 10;
    }
    return sum;
}

int main(){
    //question 1
    int n; 
    std::cout<<"Enter the numbers to be reversed"<<std::endl;
    std::cin >> n;
    std::cout<<reverseNumber(n)<<std::endl;

    //question 2
    int m;
    std::cout<<"Enter a number"<<std::endl;
    std::cin>> m;
    decimalToBinary(m);
    std::cout<<""<<std::endl;

    //question 3
    std::string s;
    std::cout<<"Enter a string"<<std::endl;
    std::cin.ignore();
    std::getline(std::cin, s);
    int vowels = 0;
    int consonants = 0;
    countVowelsConsonants(s, vowels, consonants);
    std::cout<<"Vowels: " << vowels << " Consonants: "<< consonants<<std::endl;

    //question 4
    int b;
    std::cout<<"Enter numbers"<<std::endl;
    std::cin>>b;
    std::cout<<"Sum of digits: "<< sumOfDigits(b)<<std::endl;

}
