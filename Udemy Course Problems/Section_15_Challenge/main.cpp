#include <iostream>
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Account_Util.h"
#include "Trust_Account.h"
#include <vector>


int main() {

    std::vector<Account> accounts;
    std::vector<Savings_Account> savingsAccounts;
    std::vector<Checking_Account> checkingAccounts;
    std::vector<Trust_Account> trustAccounts;

    Account myAccount {"Luke", 1000};
    Account moe {"Moe", 50};
    Account larry {"Larry", 100};

    Savings_Account mySavingsAccount {"401k", 92000, 5.0};
    Savings_Account moeSavingsAccount {"MoeSavings", 1000, 3.2};
    Savings_Account larrySavingsAccount {"LarrySavings", 2000, 4.5};

    Checking_Account myCheckingAccount {"Debit", 3000};
    Checking_Account moeCheckingAccount {"MoeChecking", 10};
    Checking_Account larryCheckingAccount {"LarryChecking", 35};

    Trust_Account myTrustAccount {"John", 50000, 20};
    Trust_Account moeTrustAccount {"MoeTrust", 20000, 50};
    Trust_Account larryTrustAccount {"LarryTrust", 10000, 0};
    
    accounts.push_back(myAccount);
    accounts.push_back(moe);
    accounts.push_back(larry);

    savingsAccounts.push_back(mySavingsAccount);
    savingsAccounts.push_back(moeSavingsAccount);
    savingsAccounts.push_back(larrySavingsAccount);

    checkingAccounts.push_back(myCheckingAccount);
    checkingAccounts.push_back(moeCheckingAccount);
    checkingAccounts.push_back(larryCheckingAccount);

    trustAccounts.push_back(myTrustAccount);
    trustAccounts.push_back(moeTrustAccount);
    trustAccounts.push_back(larryTrustAccount);

    // Display, withdraw, deposit, do things with accounts here, if you wish.



    return 0;
}