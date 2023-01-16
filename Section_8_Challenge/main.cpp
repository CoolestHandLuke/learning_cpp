#include <iostream>

using namespace std;

int main() {

    /* This program will prompt the user for a number of cents, then output the change they can 
    make in dollars, quarters, dimes, nickels, and pennies
    */

   int cents {0};
   int dollars {0};
   int quarters {0};
   int dimes {0};
   int nickels {0};
   int pennies {0};

   cout<<"Enter an amount of cents: ";
   cin>>cents;
   
   dollars = cents / 100;
   cents = cents % 100;

   quarters = cents / 25;
   cents = cents % 25;

   dimes = cents / 10;
   cents = cents % 10;

   nickels = cents / 5;
   cents = cents % 5;

   pennies = cents;

   // Print the output

   cout<<"dollars:\t"<<dollars<<endl;
   cout<<"quarters:\t"<<quarters<<endl;
   cout<<"dimes:\t\t"<<dimes<<endl;
   cout<<"nickels:\t"<<nickels<<endl;
   cout<<"pennies:\t"<<pennies<<endl;
}
