#include <iostream>

int main() {

    int rows;
    int seatsPerRow;
    int totalIncome;

    std::cout << "Enter the number of rows: " << std::endl;
    std::cin >> rows;
    std::cout << "Enter the number of seats in each row: " << std::endl;
    std::cin >> seatsPerRow;

    if (rows * seatsPerRow <= 60) {
        totalIncome = 10 * rows * seatsPerRow;
    } else {    
        totalIncome = 10 * (rows / 2) * seatsPerRow + 8 * (rows - rows / 2) * seatsPerRow;
    }
    std::cout << "Total income: " << std::endl;
    std::cout << "$" << totalIncome << std::endl;



/*
    std::cout<<"Cinema:"<<std::endl;

    char seats[8][9] = {
        {' ', '1', '2', '3', '4', '5', '6', '7', '8'},
        {'1', 'S', 'S', 'S', 'S', 'S', 'S', 'S', 'S'},
        {'2', 'S', 'S', 'S', 'S', 'S', 'S', 'S', 'S'},
        {'3', 'S', 'S', 'S', 'S', 'S', 'S', 'S', 'S'},
        {'4', 'S', 'S', 'S', 'S', 'S', 'S', 'S', 'S'},
        {'5', 'S', 'S', 'S', 'S', 'S', 'S', 'S', 'S'},
        {'6', 'S', 'S', 'S', 'S', 'S', 'S', 'S', 'S'},
        {'7', 'S', 'S', 'S', 'S', 'S', 'S', 'S', 'S'},
    };

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 9; j++) {
            std::cout << seats[i][j] << " ";
        }
        std::cout << std::endl;
    }
*/
    return 0;
}