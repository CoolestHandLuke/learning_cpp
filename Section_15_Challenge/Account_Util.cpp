#include "Account_Util.h"

void display(const std::vector<Account> &accounts) {
    std::cout<<"\nAccounts==================================================" << std::endl;
    for (const auto &acc: accounts) {
        std::cout << acc << std::endl;
    }
}
void deposit(std::vector<Account> &accounts, double amount) {
    std::cout<<"\nDepositing to Accounts==================================================" << std::endl;
    for (auto &acc: accounts) {
        if (acc.deposit(amount)) {
            std::cout << "Deposited "<< amount << " to " << acc << std::endl;
        } else {
            std::cout << "Failed to deposit " << amount << "to " << acc << std::endl;
        }
    }

}
void withdraw(std::vector<Account> &accounts, double amount) {
    std::cout<<"\nWithdrawing from Accounts==================================================" << std::endl;
    for (auto &acc : accounts) {
        if(acc.withdraw(amount)) {
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        } else {
            std::cout << "Failed to withdraw " << amount << "from " << acc << std::endl;
        }
    }

}

void display(const std::vector<Savings_Account> &accounts) {
    std::cout<<"\nSavings Accounts==================================================" << std::endl;
    for (const auto &acc: accounts) {
        std::cout << acc << std::endl;
    }

}
void deposit(std::vector<Savings_Account> &accounts, double amount) {
    std::cout<<"\nWithdrawing from Savings Accounts==================================================" << std::endl;
    for (auto &acc: accounts) {
        if (acc.deposit(amount)) {
            std::cout << "Deposited "<< amount << " to " << acc << std::endl;
        } else {
            std::cout << "Failed to deposit " << amount << "to " << acc << std::endl;
        }
    }
}
void withdraw(std::vector<Savings_Account> &accounts, double amount) {
    std::cout<<"\nDepositing to Savings Accounts==================================================" << std::endl;
    for (auto &acc : accounts) {
        if(acc.withdraw(amount)) {
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        } else {
            std::cout << "Failed to withdraw " << amount << "from " << acc << std::endl;
        }
    }
}