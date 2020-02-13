/* Jennifer Riley & Michelle
    TicTacToe Game
*/
#include <iostream>

using namespace std;

void DisplayBoard(char array[][3], int size);

char board[3][3] = { { '_','_', '_'}, {'_','_', '_'}, {'_','_', '_'} };
int size = 3;


int main(){
    DisplayBoard(board, 3);
}

void DisplayBoard(char array[][3], int size){
    cout<< "********** Let's Play Tic Tac Toe **********"<< endl;
    cout<< "   A    B    C                         "<< endl;
    for (int row = 0; row < size; row++){
        cout << row + 1 ;
        for (int col = 0; col < size; col++){
            cout << "  " << board[row][col];
            cout << "  ";
        }
        cout << endl;
    }
    cout << endl;
    
}