#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    //question 1
    int matrix[2][2];
    std::cout<<"Enter the numbers for 2X2 matrix:"<<std::endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            std::cin >> matrix[i][j];
        }
    }
    std::cout<<"Transposed Matrix:"<<std::endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j< 2; j++){
            std::cout<<matrix[j][i]<<std::endl;
        }
    }

    //question 2
    int matrix1[3][3];
    std::cout<<"Enter elements for the 3X3 matrix"<<std::endl;
    for(int i = 0; i< 3; i++){
        for (int j = 0; j<3; j++){
            std::cin>>matrix1[i][j];
        }
    }

    int maxNum = matrix1[0][0];
    for(int i = 0; i <3; i++){
        for( int j = 0; j < 3; j++){
            if(matrix1[i][j] > maxNum){
                maxNum = matrix1[i][j];
            }
        }
    }
    std::cout<<"Maximum element: "<<maxNum<<std::endl;

    //question 3
    int n;
    std::cout<<"Enter the number of elements:"<<std::endl;
    std::cin>>n;
    std::vector<int>vec(n);
    std::cout<<"Enter the elements: "<<std::endl;
    for(int i = 0; i < n; i++){
        std::cin>>vec[i];
    }
    std::cout<<"Reversed vector: "<<std::endl;
    for(int i = n-1; i >=0; i--){
        std::cout<<vec[i]<<std::endl;
    }

    //question 4
    std::cout<<"Enter the number of elements:"<<std::endl;
    std::cin>>n;
    std::vector<int>vec2(n);
    std::cout<<"Enter the elements: "<<std::endl;
    for(int i = 0; i < n; i++){
        std::cin>>vec2[i];
    }
    std::vector<int>uEle;
    for (int i = 0; i <n; i++){
        bool duplicate = false;
        for(int j = 0; j<uEle.size(); j++){
            if(vec2[i]== uEle[j]){
                duplicate = true;
                break;
            }
        }
        if(!duplicate){
            uEle.push_back(vec2[i]);
        }
    }
    std::cout<<"Vector after removing duplicates: "<<std::endl;
    for(int i = 0; i < uEle.size(); i++){
        std::cout<<uEle[i]<<std::endl;
    }





}
