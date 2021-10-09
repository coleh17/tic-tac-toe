#include <iostream>
#include "GameBoard.h"

GameBoard::GameBoard()
{
    gameIsOver = false;
};

bool GameBoard::turn(int &player, int position)
{
    if (getValueAtPosition(position) == player1 || getValueAtPosition(position) == player2)
    {
        std::cout << "Position already taken!" << std::endl;
        return false;
    }
    setValueAtPosition(position, player ? player2 : player1);
    return true;
}

bool GameBoard::checkForWin(int &player)
{
    // Move through board vertically
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return true;
    }
    // Move through board horizontally
    for (int i = 0; i < 3; i++)
    {
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

void GameBoard::gameOver(int &winner)
{
    std::cout << "Game Over!" << std::endl;
    if (winner == 1)
        std::cout << "Winner: Player 2" << std::endl;
    else
        std::cout << "Winner: Player 1" << std::endl;
    gameIsOver = true;
}

void GameBoard::printBoard()
{
    std::cout << "-------------" << std::endl;
    std::cout << "| " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " |" << std::endl;
    std::cout << "| " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " |" << std::endl;
    std::cout << "| " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " |" << std::endl;
    std::cout << "-------------" << std::endl;
}

char GameBoard::getValueAtPosition(int position)
{
    if (position >= 0 && position <= 3)
        return board[0][(position - 1) % 3];
    else if (position >= 4 && position <= 6)
        return board[1][(position - 1) % 3];
    else
        return board[2][(position - 1) % 3];
}

void GameBoard::setValueAtPosition(int position, char value)
{
    if (position >= 0 && position <= 3)
        board[0][(position - 1) % 3] = value;
    else if (position >= 4 && position <= 6)
        board[1][(position - 1) % 3] = value;
    else
        board[2][(position - 1) % 3] = value;
}