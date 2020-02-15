/* Jennifer Riley & Michelle
    TicTacToe Game
*/
#include <iostream>
#include <string>

#include "TicTacToe.h"

using namespace std;

//CreateBoard
//Constructor
TicTacToe::TicTacToe(){
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            board[r][c] = '_';
        }
    }
}

//Dispaly the board
//Doesn't return anything
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

//Will check user's input and place marker based on input
//Doesn't return anything
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

//Switch between players
//Not completely working
//Doesn't return anything
void TicTacToe::PlayerSwitch(char player){
    if( player == 'X'){
        player = 'O';
    }
    else if (player == 'O'){
        player = 'X';
    }
}

//Check to see if the user has input a space that has already been taken
//return true or false
bool TicTacToe::IllegalPlay(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (board[i][j] == 'X' && board[i][j] == 'O'){
                return true;
            }
            else { return false;}
        }
    }
}


//main function
int main(){
    while(game.IllegalPlay() == false)
    {
        game.DisplayBoard();
        game.GetPlayerChoice(player);
        game.PlayerSwitch(player);
    }
}

