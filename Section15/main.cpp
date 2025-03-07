#include <iostream>
#include <vector>
/*
* Inheritance challenge.
* You are provided with a simple account class hierarchy that contains
* Account - base class
* Savings account - derived class
* 
* An Account has a name and a balance.
* A Savings Account is an Account and addas an interest rate.
* 
* To do:
* - Add a checking accout class (name, balance, fee for every withdrawal transation)
* - Add a trust account class (name, balance, interest rate)
*/

#include "Savings_Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

using namespace std;

int main(){
    cout.precision(2);
    cout << fixed;
    

    //Checking_Account prova{"Ciao", 1000}; 
    //prova.withdraw(100);
    //cout << prova;
    
    // Checking Accounts
    /*
    vector<Checking_Account> check_accounts;
    check_accounts.push_back(Checking_Account{});
    check_accounts.push_back(Checking_Account{"Larry"});
    check_accounts.push_back(Checking_Account{"Moe", 2000});
    check_accounts.push_back(Checking_Account{"Curly", 5000});
    
    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000); */
    
    // Trust account
    Trust_Account prova1{"Ciao", 1000, 0};
    prova1.deposit(50000);
    cout << prova1 << endl;;
    prova1.withdraw(100);
    cout << prova1 << endl;
    prova1.withdraw(100);
    cout << prova1 << endl;
    prova1.withdraw(100);
    cout << prova1 << endl;
    prova1.withdraw(100);
    cout << prova1 << endl;
    cout << prova1.get_n_withdrawals();

    // Trust
    
    vector<Trust_Account> trust_accounts;
    trust_accounts.push_back(Trust_Account{});
    trust_accounts.push_back(Trust_Account{"Superman"});
    trust_accounts.push_back(Trust_Account{"Batman", 2000});
    trust_accounts.push_back(Trust_Account{"Wonderwoman", 5000, 5.0});
    
    display(trust_accounts);
    deposit(trust_accounts, 1000);
    withdraw(trust_accounts, 2000);   
    

    
    
    /*
    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Moe", 2000});
    accounts.push_back(Account{"Curly", 5000});
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
    
    // Savings
    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account{});
    sav_accounts.push_back(Savings_Account{"Superman"});
    sav_accounts.push_back(Savings_Account{"Batman", 2000});
    sav_accounts.push_back(Savings_Account{"Wonderwoman", 5000, 5.0});
    
    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);   
    */
    
    return 0;
    
}