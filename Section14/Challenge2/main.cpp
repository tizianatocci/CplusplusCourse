/*
Challenge to gain experience overloading operators.
First way of facing the challenge: overload the operators using member functions
Second way: overload the operators using non-member functions
This is challenge TWO.
*/

#include <iostream>
#include "Mystring.h"

using namespace std;

int main(){
    
    cout << boolalpha << endl;
    
    Mystring s1{"FRANK"};
    s1 = -s1;
    cout << s1 << endl; // frank
    
    Mystring a{"frank"};
    Mystring b{"frank"};
    
    cout << (a==b) << endl; // true
    cout << (a!=b) << endl; // false
    cout << endl;
    
    b="george";
    cout << (a==b) << endl; // false
    cout << (a!=b) << endl; // true
    cout << (a<b) << endl; // true
    cout << (a>b) << endl; // false
    cout << endl;
    
    s1 = s1 + "*****";
    cout << s1 << endl; // frank*****
    s1 += "-----";
    cout << s1 << endl; // frank*****-----
    cout << endl;
    
    Mystring s2{"12345"};

    s2 = s2*3;
    cout << s2 << endl; //123451234512345
    
    Mystring s3{"abcdef"};
    s3 *= 5;
    cout << s3 << endl; //abcdefabcdefabcdefabcdefabcdef
    
        
   

    Mystring s="Frank";
    ++s;
    cout << s << endl; //FRANK
    
    // you can try --
    
    s= -s;
    cout << s << endl; // fank
    
    Mystring result;
    result = ++s;
    cout << s << endl; // FRANK
    cout << result << endl; // FRANK
    
    s= "Franck";
    s++;
    cout << s << endl;
    
    s=-s;
    cout << s << endl; // frank
    result = s++;
    cout << s << endl; // frank
    cout << result << endl; 
    
    return 0;
    
}