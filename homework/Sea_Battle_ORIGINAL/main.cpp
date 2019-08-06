#include "board.h"
#include "ship.h"
#include "game.h"
int main()
{
    Board board1, board2;
    board1.BoardShow();
    Ship ship;
    ship.ToPutShips(board1, ship);
    ship.ToPutShips(board2, ship);
    Game game;
    game.strokePlayer_1(board1,board2);
    return 0;
}