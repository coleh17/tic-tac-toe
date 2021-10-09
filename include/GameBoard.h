
class GameBoard
{
private:
    char player1 = 'O';
    char player2 = 'X';

public:
    bool gameIsOver;
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};;

    GameBoard();
    void printBoard();
    bool checkForWin(int &player);
    void gameOver(int &winner);
    bool turn(int &player, int position);
    char getValueAtPosition(int position);
    void setValueAtPosition(int position, char value);
};