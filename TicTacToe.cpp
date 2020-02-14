/* Jennifer Riley & Michelle
    TicTacToe Game
*/
#include <iostream>
#include <string>

#include "TicTacToe.h"

using namespace std;

//CreateBoard
TicTacToe::TicTacToe(){
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            board[r][c] = '_';
        }
    }
}

void TicTacToe::DisplayBoard(){
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

void TicTacToe::GetPlayerChoice(int move){
    char player = 'X';

    cout <<"\n Enter your move: \n" << endl;
    cin >> move;

}

void TicTacToe::GetPlayerChoice(int move){
    char player = 'X';
    cout <<"\n Enter your move: \n" << endl;
    cin >> move;

    
    if( move == 1)
    {
        board[0][0] = player;
    }
    else if(move == 2)
    {
        board[0][1] = player;
    }
    else if(move == 3)
    {
        board[0][2] = player;
    }
    else if(move == 4)
    {
        board[1][0] = player;
    }
    else if(move == 5)
    {
        board[1][1] = player;
    }
    else if(move == 6)
    {
        board[1][2] = player;
    }
    else if(move == 7)
    {
        board[2][0] = player;
    }
    else if(move == 8)
    {
        board[2][1] = player;
    }
    else if(move == 9)
    {
        board[2][2] = player;
    }
}


void TicTacToe::PlayerSwitch(char player){
    if( player == 'X'){
        player = 'O';
    }
    else if (player == 'O'){
        player = 'X';
    }
}

int main(){
    while(game.IllegalPlay() == false)
    {
        game.DisplayBoard();
        game.GetPlayerChoice(player);
        game.PlayerSwitch(player);
    }
}

