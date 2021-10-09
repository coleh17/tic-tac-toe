
class GameBoard
{

private:
    char board[3][3];
    char player1;
    char player2;

public:
    GameBoard();
    void printBoard();
    bool gameOver();
    char *turn(int player, int position);
};