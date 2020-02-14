/* Jennifer Riley & Michelle
    TicTacToe Game
*/
#include <iostream>
#include <string>

#include "TicTacToe.h"

using namespace std;

TicTacToe::TicTacToe(){
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            board[r][c] = '_';
        }
    }
}

void TicTacToe::CreateBoard(){
    system("cls");
    cout<< "********** Let's Play Tic Tac Toe **********"<< endl;
    
    for (int row = 0; row < 3; row++){
        cout << row + 1 ;
        for (int col = 0; col < 3; col++){
            cout << "  " << board[row][col];
            cout << "  ";
        }
        cout << endl;
    }
    cout << endl;
}



int main(){
    TicTacToe game;
    char player = 'X';
    game.CreateBoard();
  
