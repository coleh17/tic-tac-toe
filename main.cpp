#include <iostream>
#include "GameBoard.h"

int main()
{

    GameBoard game;

    game.printBoard();

    std::cout << game.checkForWin() << std::endl;

    return 0;
}