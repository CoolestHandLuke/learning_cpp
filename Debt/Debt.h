// Header file for constructing Debt objects. Each one will represent their own debt/loan with 
// interest rates, outstanding principles, time left on the loan(in months)
// TODO:
    // Implement a copy constructor and a destructor because the compiler doesn't seem to like them right now
    // Figure out why in the hell the std::cin statements are causing bugs from continuous input? or something like that
#ifndef _DEBT_H_
#define _DEBT_H_
#include <vector>

class Debt {

    private:
        std::string name;
        double principal;
        double interest_rate;
        int time_left;

    public:
        // Constructor, expects all needed values for the loan
        Debt(std::string name, double principal, double interest_rate, int time_left);

        // Getters and setters
        void set_name(std::string name) {this->name = name;}
        std::string get_name() {return name;}

        void set_principal(double principal) {this->principal = principal;}
        double get_principal() {return principal;}

        void set_interest_rate(double interest_rate) {this->interest_rate = interest_rate;}
        double get_interest_rate() {return interest_rate;}

        void set_time_left(int time_left) {this->time_left = time_left;}
        int get_time_left() {return time_left;}

        // Simple function to display a Debt given its name
        void display(std::string name);
        
        // Make a payment on a loan. Requires loan name and amount to pay, returns true if successful 
        static bool make_payment(std::vector<Debt>);

        // Provide a create_debt function to allow the users to dynamically create new debts. Returns the debt object so it can be stored
        static Debt create_debt();

};

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
#endif