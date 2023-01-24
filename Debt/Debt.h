// Header file for constructing Debt objects. Each one will represent their own debt/loan with 
// interest rates, outstanding principles, time left on the loan(in months)
// TODO:
    // Implement a copy constructor and a destructor because the compiler doesn't seem to like them right now
    // Figure out why in the hell the std::cin statements are causing bugs from continuous input? or something like that
#ifndef _DEBT_H_
#define _DEBT_H_
#include <vector>
#include <string>

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

#endif