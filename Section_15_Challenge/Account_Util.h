#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include <vector>
#include "Account.h"
#include "Savings_Account.h"

void display(const std::vector<Account> &accounts);
void withdraw(std::vector<Account> &accounts, double amount);
void deposit(std::vector<Account> &acounts, double amount);

void display(const std::vector<Savings_Account> &accounts);
void withdraw(std::vector<Savings_Account> &accounts, double amount);
void deposit(std::vector<Savings_Account> &acounts, double amount);

#endif 