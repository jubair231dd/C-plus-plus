#include<iostream>
#include<string>
/*
Tic-Tac-Toe game
*/
using namespace std;
//Part 1: Declare the variables
const int ROWS = 3;
const int COLUMNS = 3;
char gameBoard[ROWS][COLUMNS] = {{' ', ' ', ' '},
{' ',' ',' '},
{' ',' ',' '}};

char player = 'X';
bool gameOver = false;
//Part 2: function for displaying the game board
void boardDisplay() {
  cout << "  1 2 3" << endl;
  cout << "1 " << gameBoard[0][0] << "|" << gameBoard[0][1] << "|" << gameBoard[0][2] << endl;
  cout << "  -----" << endl;
  cout << "2 " << gameBoard[1][0] << "|" << gameBoard[1][1] << "|" << gameBoard[1][2] << endl;
  cout << "  -----" << endl;
  cout << "3 " << gameBoard[2][0] << "|" << gameBoard[2][1] << "|" << gameBoard[2][2] << endl;
}
//part 3: function for updating the board after each palyers input
void boardUpdate(int row, int col){
    gameBoard[row][col] = player;
    if(player == 'X'){
        player = 'O';
    }
    else{
        player = 'X';
    }
}
// part 4: function for checking win situations
bool checkWin(){
    //part 4.1 : check for win in the rows
    for(int i = 0; i < ROWS; i++){
        if(gameBoard[i][0] == player && gameBoard[i][1] == player && gameBoard[i][2] == player){
            return true;
        }
    }
    //part 4.2: check for win in the columns
    for(int j = 0; j < COLUMNS; j++){
        if(gameBoard[0][j] == player && gameBoard[1][j] == player && gameBoard[2][j] == player){
            return true;
        }
    }
    //part 4.3: check for win in the diagonals
    if(gameBoard[0][0] == player && gameBoard[1][1] == player && gameBoard[2][2] == player){
        return true;
    }
    if(gameBoard[0][2] == player && gameBoard[1][1] == player && gameBoard[2][0] == player){
        return true;
    }
    return false;
}
// part 5: function for checking a draw
bool checkDraw(){
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLUMNS; j++){
            if(gameBoard[i][j] == ' '){
                return false;
            }
        }
    }
    return true;
}
int main(){
    while(!gameOver){
        boardDisplay();
        cout << "Player " << player << " enter your move (row and col): ";
        int row, col;
        cin >> row >> col;
        boardUpdate(row - 1, col - 1);
        if(checkWin()){
            cout << "Player " << player << " won" << endl;
            gameOver = true;
        }
        else if(checkDraw()){
            cout << "Draw!" << endl;
            gameOver = true;
        }
    }
    return 0;
}