
class GameBoard
{
private:
    char player1;
    char player2;

public:
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};;
    GameBoard();
    void printBoard();
    bool checkForWin();
    bool gameOver();
    char *turn(int player, int position);
};