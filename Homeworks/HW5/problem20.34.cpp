#include <iostream>
using namespace std;
const int boardSize = 8;
// Part 1: checking if a queen can be placed at a given row
bool queenIsSafe(int (*board)[boardSize], int row, int col){
    for(int i = 0; i < col; i++){
        if(board[row][i] == 1){
            return false;
        }
    }
    // Part 1.1: check the left upper diagonal
    for(int i = row, j = col; i >= 0 && j>= 0; i--, j--){    
        if(board[i][j] == 1){
           return false;
        }
    }
    //part 1.2: check the left lower diagonal
    for(int i = row, j = col; i < boardSize && j >= 0; i++, j--){
        if(board[i][j] == 1){
            return false;
        }
    }
    // Part 1.3: check the queen can be placed safely
    return true;
}
// Part 4: Recursive function to solve the problem
bool solve(int (*board)[boardSize], int col) {
    // Base case: all queens have been placed successfully
    if (col >= boardSize) {
        return true;
    }
    // part 4.1 :  check by placing the queen in each row of the current column
    for (int row = 0; row < boardSize; ++row) {
        // part 4.2: Checking if it's safe to place the queen in this row and column
        if (queenIsSafe(board, row, col)) {
            // Place the queen in this row and column
            board[row][col] = 1;

            // Recursively solve the problem for the next column
            if (solve(board, col + 1)) {
                return true;
            }

            // Backtrack and remove the queen from this row and column
            board[row][col] = 0;
        }
    }
    // part 4.2: If we've tried all rows and still couldn't place the queen, return false
    return false;
}
int main() {
    // part 5: Create the chess board as a 2D array of integers
    int board[boardSize][boardSize] = {{0}};

    //part 6: Calling the solve function to solve the problem
    if (solve(board, 0)) {
        // Print the solution if one was found
        for (int i = 0; i < boardSize; i++) {
            for (int j = 0; j < boardSize; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
