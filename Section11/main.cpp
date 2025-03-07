#include <iostream>
#include <vector>
using namespace std;

/* This challenge is about using a collection (list) of integers and allowing the user to selection options from a menu 
to perform operations on the list. Unlike Section09, here functions are used.
*/

// prototypes
void display_menu();
char read_input_return_uppercase();
void print_numbers(const vector <int> &numbers);
//vector<int> add_number(vector<int> &numbers);
void add_number(vector<int> &numbers);
void compute_mean(const vector <int> &numbers);
void smallest_number(const vector <int> &numbers);
void largest_number(const vector <int> &numbers);
void print_goodbye();
void unknown_selection();
void display_list(const vector<int> &numbers);
double calc_mean(const vector<int> &numbers);
int get_smallest(const vector <int> &numbers);
int get_largest(const vector <int> &numbers);
void handle_find(const vector <int> &numbers);
bool find(const vector<int> &numbers, int target);

// define functions
void display_menu(){
    cout << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "F - Find a number" << endl;
    cout << "Q - Quit" << endl;
    cout << endl;
    }

char read_input_return_uppercase(){
    char selection{};
    cout << "Enter your choice : ";
    cin >> selection;
    selection = toupper(selection);
    return selection;
};

void print_numbers(const vector <int> &numbers){
    if (numbers.empty()){
        cout << "[] - the list is empty" << endl;
    }
    else { // I could make another function for this
        display_list(numbers);
    }     
}

void add_number(vector<int> &numbers){
    cout << "Enter an integer to add to the list: ";
    int num_to_add;
    cin >> num_to_add;
    numbers.push_back(num_to_add);
    cout << num_to_add << " added"<< endl;
    //return numbers;
};

void compute_mean(const vector <int> &numbers){
    if (numbers.empty()){
        cout << "Unable to calculate the mean - no data" << endl;
    }
    else {
        double mean{0};
        mean = calc_mean(numbers);
        cout << "The mean is: " << mean << endl;
    }
};

void smallest_number(const vector <int> &numbers){
    if (numbers.empty()){
        cout << "Unable to determine the smallest number - list is empty" << endl;
    }
    else {
        int min_num{};
        min_num=get_smallest(numbers);
        cout << "The smallest number is: " << min_num << endl;
    }
}

void largest_number(const vector <int> &numbers){
    if (numbers.empty()){
        cout << "Unable to determine the largest number - list is empty" << endl;
    }
    else {
        int max_num{};
        max_num = get_largest(numbers);
        cout << "The largest number is: " << max_num << endl;
    }
}

void print_goodbye(){
    cout << "Goodbye...";
}

void unknown_selection(){
    cout << "Unknown selection, please try again" << endl;
};

void display_list(const vector<int> &numbers){
    cout << "[ ";
    for (auto num:numbers){
        cout << num << " ";
    }
    cout << "]" << endl;
}

double calc_mean(const vector<int> &numbers){
    int sum{0};
    double mean{0};
    for (auto num:numbers){
        sum = sum + num;
    }
    mean = static_cast<double>(sum)/numbers.size();
    return mean;
}

int get_smallest(const vector <int> &numbers){
    int min_num{numbers.at(0)};
    for (auto num:numbers){
        if (num < min_num)
            min_num = num;
    }
    return min_num;
};

int get_largest(const vector <int> &numbers){
    int max_num{numbers.at(0)};
    for (auto num:numbers){
        if (num > max_num)
            max_num = num;
    }
    return max_num;
};

void handle_find(const vector<int> &v){
    int target{};
    cout << "Enter the number to find: ";
    cin >> target;
    if (find(v, target))
        cout << target << " was found";
    else
        cout << target << " was not found";
    
}

bool find(const vector<int> &v, int target){
    for (auto num:v)
        if (num==target)
            return true;
    return false;
}


// main
int main(){
    vector <int> numbers{};
    char selection{};
    
    do {
    display_menu();
    selection = read_input_return_uppercase();
    //cout << selection << endl;
    
    
    if (selection=='P'){
        print_numbers(numbers);
    } 
    
    else if (selection=='A'){
        // is it better to return a char or void?
        add_number(numbers);
    }
    
    else if (selection == 'M'){
        compute_mean(numbers);
    }
    
    else if (selection == 'S'){
        smallest_number(numbers);
    }
    
    else if (selection == 'L'){
        largest_number(numbers);
    }
    
    else if (selection == 'F'){
        handle_find(numbers);
    }
    
    else if (selection == 'Q'){
        print_goodbye();
    }
    
    else 
        unknown_selection();
    } while (selection != 'Q');
    
    cout << endl;
    return 0;
}

