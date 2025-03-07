/*
* Write a C++ function named apply_all that expects two arrays of integers and their sizes and
* dynamically allocates a new array of integers whose size is the product of the 2 array sizes.
*/

#include <iostream>

using namespace std;

void print(int arr[], size_t size);
int *apply_all(int arr1[], size_t size1, size_t arr2[], size_t size2);

void print(int arr[], size_t size){
    cout << endl;
    for (size_t i{0}; i < size; i++){
        cout << *(arr++) << " "; // or *(arr+i) or //arr[i]
    }
    cout << endl;
    }

int *apply_all(int arr1[], size_t size1, int arr2[], size_t size2){
    int *result{nullptr}; //  array where each element is a pointer to an integer
    result =  new int[size1*size2];
    int position{0};
    for (size_t i{0}; i < size2; i++){
        for (size_t j{0}; j < size1; j++){
            //cout << *(arr1+i) << endl;
            //cout << *(arr2+j) << endl;
            //cout <<  *(arr2+i) * *(arr1+j)<< endl;
            result[position] = *(arr2+i) * *(arr1+j);
            position++;
        }
        cout << endl;
    } 
    return result;
}

int main(){
    const size_t array1_size{5};
    const size_t array2_size{3};
    
    int array1[]{1,2,3,4,5};
    int array2[]{10,20,30};
    
    cout << "Array 1: ";
    print(array1,array1_size);
    
    cout << "Array 2: ";
    print(array2,array2_size);
    
    
    int *result{};
    result = apply_all(array1, array1_size, array2, array2_size);
    
    constexpr size_t result_size{array1_size*array2_size};
    
    cout << "Result: ";
    print(result, result_size);
    delete[] result;
    
    cout << endl;
    return 0;
    
}