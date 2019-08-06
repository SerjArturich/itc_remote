
#ifndef BOARD_H
#define BOARD_H
class Ship;
class Game;

    class Board
    {
    friend Ship;
    friend Game;
    private:
        int boardSize;
        int ** Board_;
    public:
        Board();
        ~Board();
        void BoardInit();
        void BoardShow();
    };
    
#endif