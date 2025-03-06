#include <iostream>

/*
* Us dollars and cents 
* Write a program that asks the user to enter the following:
* an integer representing the number of cents
* Assumption: number of cents >= 0
* The program will display how to provide that change to the user.
* In the US:
* 1 dollar is 100 cents
* 1 quarter is 25 cents
* 1 dime is 10 cents
* 1 nickel is 5 cents
* 1 penny is 1 cent
* 
*/
using namespace std;

int main(){
    const int dollars_cents {100};
    const int quarters_cents {25};
    const int dimes_cents {10};
    const int nickels_cents {5};
    const int penny_cents {1};
    
    cout << "Enter an amount in cents: ";
    int amount{};
    cin >> amount;
    
    int n_dollars{}, n_quarters{}, n_dimes{}, n_nickles{}, n_penny{};
    
    // with module
    //n_dollars = static_cast<double> (amount) % dollars_cents
    n_dollars = amount / dollars_cents;
    amount = amount % dollars_cents;
    n_quarters = amount / quarters_cents;
    amount = amount % quarters_cents;
    n_dimes = amount / dimes_cents;
    amount = amount % dimes_cents;
    n_nickles = amount / nickels_cents;
    amount = amount % nickels_cents;
    n_penny = amount / penny_cents;
    
    cout << "Your rest is: " << endl;
    cout << "Dollars: " << n_dollars << endl;
    cout << "Quarters: " << n_quarters << endl;
    cout << "Dimes: " << n_dimes << endl;
    cout << "Nickels: " << n_nickles << endl;
    cout << "Pennies: " << n_penny << endl;
    
    cout << endl;
    return 0;
}

    
    // without module
    //n_dollars = amount / dollars_cents;
    //amount = amount-n_dollars*dollars_cents;
    //n_quarters = (amount)/quarters_cents;
    //amount = amount-n_quarters*quarters_cents;
    //n_dimes = (amount)/dimes_cents;
    //amount = amount-n_dimes*dimes_cents;
    //n_nickles = (amount)/nickels_cents;
    //amount = amount-n_nickles*nickels_cents;
    //n_penny = amount;
    // 
    