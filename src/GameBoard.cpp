#include <iostream>
#include "GameBoard.h"

GameBoard::GameBoard(){

};

bool GameBoard::checkForWin() {
    // Move through board vertically
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return true;
    }
    // Move through board horizontally
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return true;
    }
    // Check diagnals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return true;
    
    return false;
}

void GameBoard::printBoard()
{
    std::cout << "-------------" << std::endl;
    std::cout << "| " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " |" << std::endl;
    std::cout << "| " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " |" << std::endl;
    std::cout << "| " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " |" << std::endl;
    std::cout << "-------------" << std::endl;
}