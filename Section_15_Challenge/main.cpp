#include <iostream>
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Account_Util.h"
#include "Trust_Account.h"
#include <vector>


int main() {

    std::vector<Account> accounts;

    Account myAccount {"Luke", 1000};
    Savings_Account mySavingsAccount {"401k", 92000, 5.0};
    Checking_Account myCheckingAccount {"Debit", 3000};
    Trust_Account myTrustAccount {"John", 500000, 20};
    
    accounts.push_back(myAccount);
    accounts.push_back(mySavingsAccount);
    accounts.push_back(myCheckingAccount);
    accounts.push_back(myTrustAccount);

    display(accounts);
    withdraw(accounts, 10000);
    deposit(accounts, 10000);
    display(accounts);


    return 0;
}