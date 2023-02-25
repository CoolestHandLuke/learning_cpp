#include <iostream>
#include <string>

int main() {

    int rows;
    int seatsPerRow;
    int totalIncome;

    // Get user input
    std::cout << "Enter the number of rows: " << std::endl;
    std::cin >> rows;
    std::cout << "Enter the number of seats in each row: " << std::endl;
    std::cin >> seatsPerRow;
    // Create the 2d array
    // Need to add 1 to each index element to account for the row and column id's
    std::string seats[rows + 1][seatsPerRow + 1];

    for (int i = 0; i < rows + 1; i++) {
        for (int j = 0; j < seatsPerRow + 1; j++) {
            if (i == 0 && j == 0) {
                seats[i][j] = ' ';
            } else if (i == 0) {
                seats[i][j] = std::to_string(j);
            } else if (j == 0) {
                seats[i][j] = std::to_string(i);
            } else {
                seats[i][j] = "S";
            }
        }
        
    }
    // Print out the seats
    std::cout<<"Cinema:"<<std::endl;
    for (int i = 0; i < rows + 1; i++) {
        for (int j = 0; j < seatsPerRow + 1; j++) {
            std::cout << seats[i][j] << " ";
        }
        std::cout << std::endl;
    }
    // Ask the user for a seat to purchase
    int userRow;
    int userSeatInRow;
    int ticketPrice;

    std::cout << "Enter a row number:" << std::endl;
    std::cin >> userRow;
    std::cout << "Enter a seat number in that row:" << std::endl;
    std::cin >> userSeatInRow;

    if (rows * seatsPerRow <= 60 || userRow <= rows / 2) {
        ticketPrice = 10;
    } else {    
        ticketPrice = 8;
    }
    // Set the bought seat to "B" and print out the seats again
    seats[userRow][userSeatInRow] = "B";

    std::cout << "\nTicket Price: $" << ticketPrice << std::endl;
    std::cout<<"\nCinema:"<<std::endl;
    for (int i = 0; i < rows + 1; i++) {
        for (int j = 0; j < seatsPerRow + 1; j++) {
            std::cout << seats[i][j] << " ";
        }
        std::cout << std::endl;
    }


    

    
    return 0;
}