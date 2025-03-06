/* Challenge
 * Write a C++ program as follows:
 * Declare 2 empty vectors of integers named
 * vector1 and vector2, respectively.
 * 
 * Add 10 and 20 to the vector1 dynamically using push_back.
 * Display the elements in vector1 using the at() method as well as its size using the size method.

 * Add 100 and 200 to the vector2 dynamically using push_back.
 * Display the elements in vector2 using the at() method as well as its size using the size method.
 * 
 */

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> vector1;
    vector <int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "\nElements using vectory syntax:" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "\nThere are " << vector1.size() << " elements in vector1" << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "\nElements using vectory syntax:" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "\nThere are " << vector2.size() << " elements in vector2" << endl;

    // 2d vector
    vector <vector<int>> vector_2d;
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << "\nElements using vectory syntax:" << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;    
    cout << vector_2d.at(1).at(0) << endl;    
    cout << vector_2d.at(1).at(1) << endl; 

    vector1.at(0)=1000;
    cout << "\nElements of 2d vector: " << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;    
    cout << vector_2d.at(1).at(0) << endl;    
    cout << vector_2d.at(1).at(1) << endl; 
    
    cout << "\nElements of vector1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;

    
}