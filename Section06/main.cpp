/*
 * Franck's carpet clearning servies
 * charges $25 per small room
 * charges $35 per big room
 * Sales tax rate is 6%
 * Estimates are valid for 30 days
 * 
 * Prompt the user for the number of small and large rooms they would like cleaned
 * and provided an estimate such as:
 * 
 * Estimate for carpet cleaning service:
 * number of small rooms: 3
 * number of big rooms: 1
 * price per small room: $25
 * price per big room: $35
 * cost: $110
 * tax: $6.6
 * ========================
 * total estimate: $116.6
 * This estimate is valid for 30 days
 * 
 * Pseudocode:
 * Prompt the user to enter the number of small rooms
 * Prompt the user to enter the number of big rooms
 * Display number of small rooms
 * Display number of big rooms
 * Display price per small room
 * Display price per big room
 * 
 * Display cost: (number of small rooms * price per small room) + (number of big rooms * price per big room)
 * Display tax: (number of small rooms * price per small room) + (number of big rooms * price per big room) * tax rate
 * Display total estimate: (number of small rooms * price per small room) + (number of big rooms * price per big room) + (number of small rooms * price per small room) + (number of big rooms * price per big room) * tax rate
 * Display estimate expiration time
 */

#include <iostream>

using namespace std;

int main(){
    cout << "Hello, welcome to Frank's Carpet Clearning Service" << endl;
    cout << "\nHow many small rooms would you like cleaned? ";
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;
    cout << "\nHow many big rooms would you like cleaned? ";
    int number_of_big_rooms {0};
    cin >> number_of_big_rooms;
    
    const double price_per_small_room(25.0);
    const double price_per_big_room(35.0);
    const double sales_tax {0.06};
    const int estimate_expiry {30}; // days
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl; 
    cout << "Number of big rooms: " << number_of_big_rooms << endl; 
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per big room: $" << price_per_big_room << endl;
    cout << "Cost: $" << (price_per_small_room * number_of_small_rooms) + 
    (price_per_big_room * number_of_big_rooms) << endl;
    cout << "Tax: $" << ((price_per_small_room * number_of_small_rooms) + (price_per_big_room * number_of_big_rooms))* sales_tax << endl;
    cout << "=================" << endl;
    cout << "Total estimate: $" << (price_per_small_room * number_of_small_rooms) + (price_per_big_room * number_of_big_rooms) + ((price_per_small_room * number_of_small_rooms) + (price_per_big_room * number_of_big_rooms))* sales_tax  << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    
    cout << endl;
    return 0;
}