#include "board.h"
#ifndef SHIP_H
#define SHIP_H

class Ship
{
    private:
        int ship_4[4] = {1,1,1,1};
        int ship_3[3] = {1,1,1};
        int ship_2[2] = {1,1};
        int ship_1[1] = {1};
    public:
        enum Direction
        {
            VERTICALLY,
            HORIZONTAL
        };
        void ToPutShip_4(Board & board);    
        void ToPutShip_3(Board & board);
        void ToPutShip_2(Board & board);
        void ToPutShip_1(Board & board);
        void ToPutShips(Board & board, Ship & ship);
};

#endif