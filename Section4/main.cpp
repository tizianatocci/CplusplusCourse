#include <iostream>

/*
* Create a C++ program that asks the user for their favourite number between 1 and 100
* then read this number from the console.
*/
int main(){
    int favorite_number;
    std::cout << "Enter your favourite number between 1 and 100: ";
    std::cin >> favorite_number;
    /* or you divide into two lines */
    std:: cout << "Amazing!! That's my favourite number too!\nNo really!!, " <<  favorite_number << " is my favourite number!" <<std::endl;
    return 0;
}