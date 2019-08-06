#include "board.h"
#ifndef GAME_H
#define GAME_H
class Game
{
    private:
        int countePlayer_1;
        int countePlayer_2;
    public:
        Game()
        {
            countePlayer_1 = 0;
            countePlayer_2 = 0;
        }
        void strokePlayer_1(Board & board_1, Board & board_2);
        void strokePlayer_2(Board & board_1, Board & board_2);
        
};
#endif