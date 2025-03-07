#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include "Savings_Account.h"

class Trust_Account: public Savings_Account
{
    friend std::ostream &operator << (std::ostream &os, const Trust_Account &account);

private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    int n_withdrawals = 0;
    
public:
    Trust_Account(std::string name=def_name, double balance=def_balance, double int_rate= def_int_rate);
    bool deposit(double amount);
    bool withdraw(double amount);
    int get_n_withdrawals() const;


    //~Trust_Account();

};

#endif // TRUST_ACCOUNT_H
