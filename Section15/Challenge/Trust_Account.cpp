#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account {name, balance, int_rate}
{
}


bool Trust_Account::deposit(double amount){
    if (amount >= 5000)
        amount += 50;
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount){
    //std::cout << amount << std::endl;
    //std::cout << 0.2*balance << std::endl;
    if ((n_withdrawals < 3) && (amount < 0.2*balance)){
        n_withdrawals += 1;
        return Account::withdraw(amount);
    } else
        return false;
}


std::ostream &operator << (std::ostream&os, const Trust_Account &account){
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]";
    return os;
}

int Trust_Account::get_n_withdrawals() const{
    return n_withdrawals;
}