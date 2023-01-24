// A simple debt calculator for my lovely wife
// Also so I can practice OOP
// Creates a vector full of Debts that can then be manipulated by the user. 
// TODO:
    // figure out how to implement all this stuff in some form of GUI
    // Implement some sort of amortization schedule to show how much a user can save by making early payments
        // Monthly, yearly, one time, etc.
        // To do this we will need the original loan date
    // Determine interest paid over the life of the loan vs principal
    // Print this out on a nice looking chart
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "Debt.h"

int main() {

    std::cout<<std::fixed<<std::setprecision(2);
    // Create a vector of Debts to hold everything
    std::vector<Debt> debts;
    int debt_counter = 0;
    std::cout<<"Welcome to your personal debt calculator. Select an option from the choices below:"<<std::endl;

    // Main loop
    while (true) {
        std::string cmnd; 
        std::cout<<"--------------------"<<std::endl;
        std::cout<<"1: Add a debt"<<std::endl;
        std::cout<<"2: Make payment on a previous debt"<<std::endl;
        std::cout<<"9: Quit and exit"<<std::endl;
        std::cout<<"--------------------"<<std::endl;
        std::cout<<"Command: ";
        std::getline (std::cin, cmnd); 

        switch(stoi(cmnd)) {
            case 1: debts.push_back(Debt::create_debt());
            break;

            case 2: Debt::make_payment(debts); 
            break;

            case 9:
            std::cout<<"Thank you for using my super awesome program!"<<std::endl;
            return 0;

        }

    }
    

    return 0;
}