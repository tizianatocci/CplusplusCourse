/* This challenge is about using a collection (list) of integers and allowing the user to selection options from a menu 
to perform operations on the list.
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    char selection{};
    vector <int> numbers{};
    
    do {
    cout << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
    cout << endl;
    cout << "Enter your choice : ";
    cin >> selection;
    
    if (selection=='P' || selection == 'p'){
        if (numbers.empty()){
            cout << "[] - the list is empty" << endl;
        }
        else {
            cout << "[ ";
            for (auto num:numbers){
                cout << num << " ";
            }
            cout << "]" << endl;
        } 
    } 
    
    else if (selection=='A' || selection == 'a'){
        cout << "Enter an integer to add to the list: ";
        int num_to_add;
        cin >> num_to_add;
        numbers.push_back(num_to_add);
        cout << num_to_add << " added"<< endl;
    }
    
    else if (selection == 'M' || selection == 'm'){
        if (numbers.empty()){
            cout << "Unable to calculate the mean - no data" << endl;
        }
        else {
            int sum{0};
            double mean{0};
            for (auto num:numbers){
                sum = sum + num;
                }
            mean = static_cast<double>(sum)/numbers.size();
            cout << "The mean is: " << mean << endl;
        }
    }
    
    else if (selection == 'S' || selection == 's'){
        if (numbers.empty()){
            cout << "Unable to determine the smallest number - list is empty" << endl;
        }
        else {
            int min_num{numbers.at(0)};
            for (auto num:numbers){
                if (num < min_num)
                    min_num = num;
            }
        cout << "The smallest number is: " << min_num << endl;
        }
        }
    
    else if (selection == 'L' || selection == 'l'){
        if (numbers.empty()){
            cout << "Unable to determine the largest number - list is empty" << endl;
        }
        else {
            int max_num{numbers.at(0)};
            for (auto num:numbers){
                if (num > max_num)
                    max_num = num;
            }
        cout << "The largest number is: " << max_num << endl;
        }
    }
        
    
    else if (selection == 'Q' || selection == 'q'){
        cout << "Goodbye...";
    }
    
    else 
        cout << "Unknown selection, please try again" << endl;
        
    } while (selection != 'q' && selection != 'Q');
    
    cout << endl;
    return 0;
}