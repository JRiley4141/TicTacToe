
#ifndef TicTacToe_H
#define TicTacToe_H

class TicTacToe {
    private:
        char board[3][3];

    public:
        TicTacToe();
        void CreateBoard();
        void DisplayBoard();
        void GetPlayerChoice(int move);
        void PlayerSwitch(char player);
        bool IllegalPlay();
};

#endif