#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account {name, balance, int_rate} {
        num_withdrawls = 0;
    }
bool Trust_Account::deposit(double amount) {
    if (amount >= 5000) {
        amount += 50;
    }
    return Savings_Account::deposit(amount);
    
}
bool Trust_Account::withdraw(double amount) {
    if (num_withdrawls == 3 || amount >= (balance * .20)) {
        return false;
    } else {
        num_withdrawls++;
        return Account::withdraw(amount);
    }
}
std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust Account: " << account.name << ": $" << account.balance << ", " << account.int_rate << "%]";
    return os;
}