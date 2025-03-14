#include<iostream>

//question 1
int addVal(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

//question 2
int maxVal(int arr[], int size){
    int max = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

//question 3
void reverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start < end){
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

//question 4
int counOccur(int arr[], int size, int num){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == num){
            count++;
        }
    }
    return count;
}

//question 5
int secondLarge(int arr[], int size){
    int first = arr[0];
    int second = -1;
    for(int i = 0; i < size; i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }else{
            second = arr[i];
        }
    }
    return second;
}


int main(){
    //question 1
    int size; 
    std::cout<<"Enter a size for the array: "<<std::endl;
    std::cin>>size;
    int arr[size];
    std::cout<<"Array with "<< size<< " elements: "<<std::endl;
    for(int i = 0; i < size; i++){
        std::cin>>arr[i];
    }
    int sumVal = addVal(arr, size);
    std::cout<<"Sum: "<<sumVal<< std::endl;

    //question 2
    int arrLen;
    std::cout<<"Enter a size for the array:"<<std::endl;
    std::cin>>arrLen;
    int arr1[arrLen];
    std::cout<<"Enter "<< arrLen <<" numbers for the array"<<std::endl;
    for(int i = 0; i < arrLen; i++){
        std::cin>>arr1[i];
    }
    int maxNum = maxVal(arr1, arrLen);
    std::cout<< "Maximum Element: "<<maxNum<<std::endl;

   //question 3
    std::cout << "Enter a size for the array: ";
    std::cin >> size;
    int arr2[size];
    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr2[i];
    }
    reverseArray(arr2, size);
    std::cout << "Reversed Array: "<< std::endl;
    for(int i = 0; i < size; i++){
        std::cout<<arr2[i]<<" ";
    }
    std::cout<<std::endl;

    //question 4
    int num;
    std::cout<<"Enter a size for the array: "<<std::endl;
    std::cin>>size;
    std::cout << "Enter " << size << " elements: ";
    int arr3[size];
    for(int i = 0; i < size; i ++){
        std::cin >> arr3[i];
    }
    std::cout<<"Target: "<< std::endl;
    std::cin>> num;
    std::cout<<"Occurrences of "<< num<< ": "<< counOccur(arr3, size, num)<<std::endl;

    //question 5
    std::cout<<"Enter a size for the array: "<<std::endl;
    std::cin>>size;
    int arr4[size];
    std::cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++){
        std::cin>>arr4[i];
    }
    int num1 = secondLarge(arr4, size);
    std::cout<<"Second Largest Element: "<< num1<<std::endl;



}
