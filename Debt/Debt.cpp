#include "Debt.h"
#include <string>
#include <iostream>


Debt::Debt(std::string name, double principal, double interest_rate, int time_left) {
    this->name = name;
    this->principal = principal;
    this->interest_rate = interest_rate;
    this->time_left = time_left;
}

bool Debt::make_payment(std::vector<Debt> debts) {
    // Make sure argument vector is not empty
    if (debts.size() == 0) {
        std::cout<<"ERROR: You do not have any debts to make a payment on!"<<std::endl;
        return false;
    }
    // Figure out which debt they want to pay on and how much to pay, store in temp variables
    std::string debt_name;
    std::string payment_string;
    std::cout<<"Which loan would you like to make a payment on? ";
    std::getline (std::cin, debt_name);
    std::cout<<"How much would you like to pay on this debt? ";
    std::getline (std::cin, payment_string);
    double payment = stod(payment_string);

    // Find the debt and decrement the payment. If the debt cannot be found, return false
    for (Debt debt: debts) {
        if ((debt.name).compare(debt_name) == 0) {
    
            // Check to make sure the payment is not more than the remaining principal
            if (payment > debt.principal) {
                std::string ans;
                std::cout<<"Your payment exceeds the remaining principal balance of $"<<(debt.principal)<<", do you wish to pay this amount instead?"<<std::endl;
                std::cout<<"Y/N: ";
                std::getline (std::cin, ans);
                // Make this a Regex
                if (ans.compare("y") == 0) {
                    std::cout<<"A payment of $"<<(debt.principal)<<" was applied and the outstanding principal has been reduced to $0"<<std::endl;
                    debt.principal = 0;
                    return true;
                } else {
                    std::cout<<"No payment processed at this time, outstanding principal is still $"<<debt.principal<<std::endl;
                    return false;
                }
            } else {
                // Decrement the payment
            debt.principal -= payment;
            std::cout<<"Your payment of $"<<payment<<" was succesfully processed, your new principal balance is $"<<debt.principal<<std::endl;
            return true;
            }
        }
    }
    return false;
    
}

Debt Debt::create_debt() {
    // Create temp variables to store user input
    std::string name;
    std::string principal;
    std::string interest_rate;
    std::string time_left;

    // Ask user for inputs
    std::cout<<"What is the name of this debt? ";
    std::getline (std::cin, name);
    std::cout<<"How much remaining principal do you owe? ";
    std::getline (std::cin, principal);
    std::cout<<"What is the interest rate? ";
    std::getline (std::cin, interest_rate);
    std::cout<<"How many months do you have remaining on this debt? ";
    std::getline (std::cin, time_left);

    Debt new_debt {name, stod(principal), stod(interest_rate), stoi(time_left)};
    return new_debt;
}