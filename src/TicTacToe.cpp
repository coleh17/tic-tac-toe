#include <iostream>
#include "TicTacToe.h"
#include "GameBoard.h"

TicTacToe::TicTacToe()
{
    GameBoard game;
    std::cout << "Game Started!" << std::endl;
    while (!game.gameIsOver)
    {
        game.printBoard();
        std::cout << "Player " << currentPlayer << "'s Turn: ";
        int input;
        std::cin >> input;
        if (game.turn(currentPlayer, input))
        {
            if (game.checkForWin(currentPlayer))
                game.gameOver(currentPlayer);
            else
                currentPlayer = currentPlayer == 0 ? 1 : 0;
        }
    }
}
