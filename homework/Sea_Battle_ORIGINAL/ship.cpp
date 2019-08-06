#include "ship.h"
#include <iostream>
using namespace std;

        
void Ship :: ToPutShip_4(Board & board)
{
    int x, y, shipdirection;
    cout << "Click on 0 to put the ship in vertically;";
    cout << "click on 1 to put the ship in horizontally" << endl;
    cout << "direction of ship -> : ";
    cin >> shipdirection;
    int thisShipSize = sizeof(ship_4) / sizeof(ship_4[0]);
    switch (shipdirection)
    {
    case VERTICALLY:
        cout << "x can be in [4,10],  y can be [1,10]:" << endl;
        cout << "Enter coordinates" << endl;
        cout << "x = ";
        cin >> x;
        cout << "y = ";
        cin >> y;
        if(x - thisShipSize >= 0 && x > 0 && x < 11 && y > 0 && y < 11)
        {
            for (int counte = x - 1; counte >= x - thisShipSize ; counte--)
            {
                board.Board_[counte][y - 1] = 1;
            }       
        }
        else
        {
            ToPutShip_4(board);
        }
        break;

    case HORIZONTAL:
        cout << "x have been [1,10],  have been [1,7]:" << endl;
        cout << "Enter coordinates" << endl;
        cout << "x = ";
        cin >> x;
        cout << "y = ";
        cin >> y;
        if(y + thisShipSize <= 11 && x > 0 && x < 11 && y > 0 && y < 11)
        {
            for (int counte =  y- 1; counte < y - 1 + thisShipSize ; counte ++)
            {
                board.Board_[x - 1][counte] = 1;
            }   
        }
        else
        {
            ToPutShip_4(board);
        }
        break;
    default:
        ToPutShip_4(board);
        break;
    }
}

void Ship :: ToPutShip_3(Board & board)
{
    int x, y, shipdirection;
    cout << "Click on 0 to put the ship in vertically;";
    cout << "click on 1 to put the ship in horizontally" << endl;
    cout << "direction of ship -> : ";
    cin >> shipdirection;
    int thisShipSize = sizeof(ship_3) / sizeof(ship_3[0]);
    switch (shipdirection)
    {
        case VERTICALLY:
            cout << "x can be [3,10],  can be [1,10]:" << endl;
            cout << "Enter coordinates" << endl;
            cout << "x = ";
            cin >> x;
            cout << "y = ";
            cin >> y;
            if(x - thisShipSize >= 0 && x > 0 && x < 11 && y > 0 && y < 11)
            {
                if(x == 3 && y == 1)
                {
                    if(board.Board_[x][y - 1] != 1 && 
                    board.Board_[x - 3][y] != 1 && board.Board_[x - 2][y] != 1 &&
                    board.Board_[x - 1][y] != 1 && board.Board_[x][y] != 1)
                    {   
                        for (int counte = x - 1; counte >= x - thisShipSize ; counte--)
                        {
                            board.Board_[counte][y - 1] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_3(board);
                    }
                }
                else if(x == 10 && y == 1)
                {
                    if(board.Board_[x - 4][y - 1] != 1 && 
                    board.Board_[x - 4][y] != 1 && board.Board_[x - 3][y] != 1 &&
                    board.Board_[x - 2][y] != 1 && board.Board_[x - 1][y] != 1)
                    {   
                        for (int counte = x - 1; counte >= x - thisShipSize ; counte--)
                        {
                            board.Board_[counte][y - 1] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_3(board);
                    }
                }
                else if(x == 3 && y == 10)
                {
                    if(board.Board_[x - 3][y - 2] != 1 && 
                    board.Board_[x - 2][y - 2] != 1 && board.Board_[x - 1][y - 2] != 1 &&
                    board.Board_[x][y - 2] != 1 && board.Board_[x][y - 1] != 1)
                    {   
                        for (int counte = x - 1; counte >= x - thisShipSize ; counte--)
                        {
                            board.Board_[counte][y - 1] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_3(board);
                    }
                }
                else if(x == 10 && y == 10)
                {
                    if(board.Board_[x - 4][y - 1] != 1 && 
                    board.Board_[x - 4][y - 2] != 1 && board.Board_[x - 3][y - 2] != 1 &&
                    board.Board_[x - 2][y - 2] != 1 && board.Board_[x - 1][y - 2] != 1)
                    {   
                        for (int counte = x - 1; counte >= x - thisShipSize ; counte--)
                        {
                            board.Board_[counte][y - 1] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_3(board);
                    }
                }
                else if(x == 3 && (y != 10 || y != 1))
                {
                    if(board.Board_[x - 3][y - 2] != 1 && 
                    board.Board_[x - 2][y - 2] != 1 && board.Board_[x - 1][y - 2] != 1 &&
                    board.Board_[x][y - 2] != 1 && board.Board_[x][y - 1] != 1 &&
                    board.Board_[x - 3][y] != 1 && board.Board_[x - 2][y] != 1 &&
                    board.Board_[x - 1][y] != 1 && board.Board_[x][y] != 1)
                    {   
                        for (int counte = x - 1; counte >= x - thisShipSize ; counte--)
                        {
                            board.Board_[counte][y - 1] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_3(board);
                    }
                }
                else if(y == 1 && (x != 10 || x != 3))
                {
                    if(board.Board_[x - 4][y - 1] != 1 && 
                    board.Board_[x][y - 1] != 1 && board.Board_[x - 4][y] != 1 &&
                    board.Board_[x - 3][y] != 1 && board.Board_[x - 2][y] != 1 &&
                    board.Board_[x - 1][y] != 1 && board.Board_[x][y] != 1)
                    {   
                        for (int counte = x - 1; counte >= x - thisShipSize ; counte--)
                        {
                            board.Board_[counte][y - 1] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_3(board);
                    }
                }   
                else if(x == 10 && (y != 10 || y != 1))
                {
                    if(board.Board_[x - 4][y - 2] != 1 && 
                    board.Board_[x - 3][y - 2] != 1 && board.Board_[x - 2][y - 2]  != 1 &&
                    board.Board_[x - 1][y - 2] != 1 && board.Board_[x - 4][y - 1] != 1 &&
                    board.Board_[x - 4][y] != 1 && board.Board_[x - 3][y] != 1 &&
                    board.Board_[x - 2][y] != 1 && board.Board_[x - 1][y] != 1 )
                    {   
                        for (int counte = x - 1; counte >= x - thisShipSize ; counte--)
                        {
                            board.Board_[counte][y - 1] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_3(board);
                    }
                }   
                else if(y == 10 && (x != 10 || x != 3))
                {
                    if(board.Board_[x - 4][y - 2] != 1 && 
                    board.Board_[x - 3][y - 2] != 1 && board.Board_[x - 2][y - 2]  != 1 &&
                    board.Board_[x - 1][y - 2] != 1 && board.Board_[x][y - 2] != 1 &&
                    board.Board_[x - 4][y - 1] != 1 && board.Board_[x][y - 1] != 1)
                    {   
                        for (int counte = x - 1; counte >= x - thisShipSize ; counte--)
                        {
                            board.Board_[counte][y - 1] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_3(board);
                    }
                }
                else 
                {
                    if(board.Board_[x - 4][y - 2] != 1 && board.Board_[x - 3][y - 2]  != 1 &&
                    board.Board_[x - 2][y - 2] != 1 && board.Board_[x - 1][y - 2] != 1 &&
                    board.Board_[x][y - 2] != 1 && board.Board_[x - 4][y - 1] != 1 &&
                    board.Board_[x][y - 1] != 1 && board.Board_[x - 4][y]  != 1 &&
                    board.Board_[x - 3][y] != 1 && board.Board_[x - 2][y] != 1 &&
                    board.Board_[x - 1][y] != 1 && board.Board_[x][y] != 1)
                    {   
                        for (int counte = x - 1; counte >= x - thisShipSize ; counte--)
                        {
                            board.Board_[counte][y - 1] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_3(board);
                    }
                }     
            }
            else
            {
                ToPutShip_3(board);
            }
            break;

        case HORIZONTAL:
            cout << "x have been [1,10],  have been [1,8]:" << endl;
            cout << "Enter coordinates" << endl;
            cout << "x = ";
            cin >> x;
            cout << "y = ";
            cin >> y;
            if(y + thisShipSize <= 11 && y > 0 && y < 11 && x > 0 && x < 11)
            {
                if(x == 1 && y == 1)
                {
                    if(board.Board_[x - 1][y + 2] != 1 && 
                    board.Board_[x][y -1] != 1 && board.Board_[x][y] != 1 &&
                    board.Board_[x][y + 1] != 1 && board.Board_[x][y + 2] != 1)
                    {   
                        for (int counte = y - 1; counte < y - 1 + thisShipSize ; counte ++)
                        {
                            board.Board_[x - 1][counte] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_3(board);
                    }
                }
                else if(x == 10 && y == 1)
                {
                    if(board.Board_[x - 2][y - 1] != 1 && 
                    board.Board_[x - 2][y] != 1 && board.Board_[x - 2][y + 1] != 1 &&
                    board.Board_[x - 2][y + 2] != 1 && board.Board_[x - 1][y + 2] != 1)
                    {   
                        for (int counte = y - 1; counte < y - 1 + thisShipSize ; counte ++)
                        {
                            board.Board_[x - 1][counte] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_3(board);
                    }
                }
                else if(x == 1 && y == 8)
                {
                    if(board.Board_[x - 1][y - 2] != 1 && 
                    board.Board_[x][y - 2] != 1 && board.Board_[x][y -1 ] != 1 &&
                    board.Board_[x][y] != 1 && board.Board_[x][y + 1] != 1)
                    {   
                        for (int counte = y - 1; counte < y - 1 + thisShipSize ; counte ++)
                        {
                            board.Board_[x - 1][counte] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_3(board);
                    }
                }
                else if(x == 10 && y == 8)
                {
                    if(board.Board_[x - 2][y - 2] != 1 && 
                    board.Board_[x - 2][y - 1] != 1 && board.Board_[x - 2][y] != 1 &&
                    board.Board_[x - 2][y + 1] != 1 && board.Board_[x - 1][y - 2] != 1)
                    {   
                        for (int counte = y - 1; counte < y - 1 + thisShipSize ; counte ++)
                        {
                            board.Board_[x - 1][counte] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_3(board);
                    }
                }
                else if(x == 1 && (y != 1 || y != 8))/////
                {
                    if(board.Board_[x - 1][y - 2] != 1 && 
                    board.Board_[x - 1][y + 2] != 1 && board.Board_[x][y - 2] != 1 &&
                    board.Board_[x][y - 1] != 1 && board.Board_[x][y] != 1 &&
                    board.Board_[x][y + 1] != 1 && board.Board_[x][y + 2] != 1)
                    {   
                        for (int counte = y - 1; counte < y - 1 + thisShipSize ; counte ++)
                        {
                            board.Board_[x - 1][counte] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_3(board);
                    }
                }
                else if(y == 1 && (x != 10 || x != 1))
                {
                    if(board.Board_[x - 2][y - 1] != 1 && 
                    board.Board_[x - 2][y] != 1 && board.Board_[x - 2][y + 1] != 1 &&
                    board.Board_[x - 2][y + 2] != 1 && board.Board_[x - 1][y + 2] != 1 &&
                    board.Board_[x][y - 1] != 1 && board.Board_[x][y] != 1 &&
                    board.Board_[x][y + 1] != 1 && board.Board_[x][y + 2] != 1)
                    {   
                        for (int counte = y - 1; counte < y - 1 + thisShipSize ; counte ++)
                        {
                            board.Board_[x - 1][counte] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_3(board);
                    }
                }   
                else if(x == 10 && (y != 8 || y != 1))
                {
                    if(board.Board_[x - 2][y - 2] != 1 && 
                    board.Board_[x - 2][y - 1] != 1 && board.Board_[x - 2][y]  != 1 &&
                    board.Board_[x - 2][y + 1] != 1 && board.Board_[x - 2][y + 2] != 1 &&
                    board.Board_[x - 1][y - 2] != 1 && board.Board_[x - 1][y + 2] != 1)
                    {   
                        for (int counte = y - 1; counte < y - 1 + thisShipSize ; counte ++)
                        {
                            board.Board_[x - 1][counte] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_3(board);
                    }
                }   
                else if(y == 8 && (x != 10 || x != 1))
                {
                    if(board.Board_[x - 2][y - 2] != 1 && 
                    board.Board_[x - 2][y - 1] != 1 && board.Board_[x - 2][y]  != 1 &&
                    board.Board_[x - 2][y + 1] != 1 && board.Board_[x - 1][y - 2] != 1 &&
                    board.Board_[x][y - 2] != 1 && board.Board_[x][y - 1] != 1 &&
                    board.Board_[x][y] != 1 && board.Board_[x][y + 1] != 1)
                    {   
                        for (int counte = y - 1; counte < y - 1 + thisShipSize ; counte ++)
                        {
                            board.Board_[x - 1][counte] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_3(board);
                    }
                }
                else 
                {
                    if(board.Board_[x - 2][y - 2] != 1 && board.Board_[x - 2][y - 1]  != 1 &&
                    board.Board_[x - 2][y] != 1 && board.Board_[x - 2][y + 1] != 1 &&
                    board.Board_[x - 2][y + 2] != 1 && board.Board_[x - 1][y - 2] != 1 &&
                    board.Board_[x - 1][y + 2] != 1 && board.Board_[x][y - 2]  != 1 &&
                    board.Board_[x][y - 1] != 1 && board.Board_[x][y] != 1 &&
                    board.Board_[x][y + 1] != 1 && board.Board_[x][y + 2] != 1)
                    {   
                        for (int counte = y - 1; counte < y - 1 + thisShipSize ; counte ++)
                        {
                            board.Board_[x - 1][counte] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_3(board);
                    }
                }   
            }
            else
            {
                ToPutShip_3(board);
            }
            break;
        default:
            ToPutShip_3(board);
            break;
        
    }
}

void Ship :: ToPutShip_2(Board & board)
{
    int x, y, shipdirection;
    cout << "Click on 0 to put the ship in vertically;";
    cout << "click on 1 to put the ship in horizontally" << endl;
    cout << "direction of ship -> : ";
    cin >> shipdirection;
    int thisShipSize = sizeof(ship_2) / sizeof(ship_2[0]);
    switch (shipdirection)
    {
        case VERTICALLY:
            cout << "x have been [2,10],  have been [1,10]:" << endl;
            cout << "Enter coordinates" << endl;
            cout << "x = ";
            cin >> x;
            cout << "y = ";
            cin >> y;
            if(x - thisShipSize >= 0 && x > 0 && x < 11 && y > 0 && y < 11)
            {
                if(x == 2 && y == 1)
                {
                    if(board.Board_[x - 2][y] != 1 && board.Board_[x - 1][y] != 1 &&
                    board.Board_[x][y] != 1 && board.Board_[x][y - 1] != 1)
                    {   
                        for (int counte = x - 1; counte >= x - thisShipSize ; counte--)
                        {
                            board.Board_[counte][y - 1] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_2(board);
                    }
                }
                else if(x == 10 && y == 1)
                {
                    if(board.Board_[x - 3][y - 1] != 1 && board.Board_[x - 3][y] != 1 &&
                    board.Board_[x - 2][y] != 1 && board.Board_[x - 1][y] != 1)            
                    {   
                        for (int counte = x - 1; counte >= x - thisShipSize ; counte--)
                        {
                            board.Board_[counte][y - 1] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_2(board);
                    }
                }
                else if(x == 2 && y == 10)
                {
                    if(board.Board_[x - 2][y - 2] != 1 && board.Board_[x - 1][y - 2] != 1 &&
                    board.Board_[x][y - 2] != 1 && board.Board_[x][y - 1] != 1)
                    {   
                        for (int counte = x - 1; counte >= x - thisShipSize ; counte--)
                        {
                            board.Board_[counte][y - 1] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_2(board);
                    }
                }
                else if(x == 10 && y == 10)
                {
                    if(board.Board_[x - 3][y - 2] != 1 && board.Board_[x - 2][y - 2] != 1 &&
                    board.Board_[x - 1][y - 2] != 1 && board.Board_[x - 3][y - 1] != 1)
                    {   
                        for (int counte = x - 1; counte >= x - thisShipSize ; counte--)
                        {
                            board.Board_[counte][y - 1] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_2(board);
                    }
                }
                else if(x == 2 && (y != 10 || y != 1))
                {
                    if(board.Board_[x - 2][y - 2] != 1 && 
                    board.Board_[x - 1][y - 2] != 1 && board.Board_[x][y - 2] != 1 &&
                    board.Board_[x][y - 1] != 1 && board.Board_[x - 2][y] != 1 &&
                    board.Board_[x - 1][y] != 1 && board.Board_[x][y] != 1)
                    {   
                        for (int counte = x - 1; counte >= x - thisShipSize ; counte--)
                        {
                            board.Board_[counte][y - 1] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_2(board);
                    }
                }
                else if(y == 1 && (x != 10 || x != 2))
                {
                    if(board.Board_[x - 3][y - 1] != 1 && board.Board_[x][y - 1] != 1 &&
                    board.Board_[x - 3][y] != 1 && board.Board_[x - 2][y] != 1 &&
                    board.Board_[x - 1][y] != 1 && board.Board_[x][y] != 1)
                    {   
                        for (int counte = x - 1; counte >= x - thisShipSize ; counte--)
                        {
                            board.Board_[counte][y - 1] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_2(board);
                    }
                }   
                else if(x == 10 && (y != 10 || y != 1))
                {
                    if(board.Board_[x - 3][y - 2] != 1 && 
                    board.Board_[x - 2][y - 2] != 1 && board.Board_[x - 1][y - 2]  != 1 &&
                    board.Board_[x - 3][y - 1] != 1 && board.Board_[x - 3][y] != 1 &&
                    board.Board_[x - 2][y] != 1 && board.Board_[x - 1][y] != 1)
                    {   
                        for (int counte = x - 1; counte >= x - thisShipSize ; counte--)
                        {
                            board.Board_[counte][y - 1] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_2(board);
                    }
                }   
                else if(y == 10 && (x != 10 || x != 2))
                {
                    if(board.Board_[x - 3][y - 2] != 1 && board.Board_[x - 2][y - 2]  != 1 &&
                    board.Board_[x - 1][y - 2] != 1 && board.Board_[x][y - 2] != 1 &&
                    board.Board_[x - 3][y - 1] != 1 && board.Board_[x][y - 1] != 1)
                    {   
                        for (int counte = x - 1; counte >= x - thisShipSize ; counte--)
                        {
                            board.Board_[counte][y - 1] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_2(board);
                    }
                }
                else 
                {
                    if(board.Board_[x - 3][y - 2] != 1 && board.Board_[x - 2][y - 2]  != 1 &&
                    board.Board_[x - 1][y - 2] != 1 && board.Board_[x][y - 2] != 1 &&
                    board.Board_[x - 3][y - 1] != 1 && board.Board_[x][y - 1] != 1 &&
                    board.Board_[x - 3][y] != 1 && board.Board_[x - 2][y]  != 1 &&
                    board.Board_[x - 1][y] != 1 && board.Board_[x][y] != 1)
                    {   
                        for (int counte = x - 1; counte >= x - thisShipSize ; counte--)
                        {
                            board.Board_[counte][y - 1] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_2(board);
                    }
                }   
            }
            else
            {
                ToPutShip_2(board);
            }
            break;
        case HORIZONTAL:
            cout << "x have been [1,10],  have been [1,9]:" << endl;
            cout << "Enter coordinates" << endl;
            cout << "x = ";
            cin >> x;
            cout << "y = ";
            cin >> y;
            if(y + thisShipSize <= 11 && y > 0 && y < 11 && x > 0 && x < 11)
            {
                if(x == 1 && y == 1)
                {
                    if(board.Board_[x - 1][y + 1] != 1 && board.Board_[x][y - 1] != 1 &&
                    board.Board_[x][y] != 1 && board.Board_[x][y + 1] != 1)
                    {   
                        for (int counte = y - 1; counte < y - 1 + thisShipSize ; counte ++)
                        {
                            board.Board_[x - 1][counte] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_2(board);
                    }
                }
                else if(x == 10 && y == 1)
                {
                    if(board.Board_[x - 2][y - 1] != 1 && board.Board_[x - 2][y] != 1 &&
                    board.Board_[x - 2][y + 1] != 1 && board.Board_[x - 1][y + 1] != 1)
                    {   
                        for (int counte = y - 1; counte < y - 1 + thisShipSize ; counte ++)
                        {
                            board.Board_[x - 1][counte] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_2(board);
                    }
                }
                else if(x == 10 && y == 9)
                {
                    if(board.Board_[x - 2][y - 2] != 1 && board.Board_[x - 2][y - 1] != 1 &&
                    board.Board_[x - 2][y] != 1 && board.Board_[x - 1][y - 2] != 1)
                    {   
                        for (int counte = y - 1; counte < y - 1 + thisShipSize ; counte ++)
                        {
                            board.Board_[x - 1][counte] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_2(board);
                    }
                }
                else if(x == 1 && y == 9)
                {
                    if(board.Board_[x - 1][y - 2] != 1 && board.Board_[x][y - 2] != 1 &&
                    board.Board_[x][y - 1] != 1 && board.Board_[x][y] != 1)
                    {   
                        for (int counte = y - 1; counte < y - 1 + thisShipSize ; counte ++)
                        {
                            board.Board_[x - 1][counte] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_2(board);
                    }
                }
                else if(x == 1 && (y != 1 || y != 9))
                {
                    if(board.Board_[x - 1][y - 2] != 1 && board.Board_[x - 1][y + 1] != 1 &&
                    board.Board_[x][y - 2] != 1 && board.Board_[x][y - 1] != 1 &&
                    board.Board_[x][y] != 1 && board.Board_[x][y + 1] != 1)
                    {   
                        for (int counte = y - 1; counte < y - 1 + thisShipSize ; counte ++)
                        {
                            board.Board_[x - 1][counte] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_2(board);
                    }
                }
                else if(y == 1 && (x != 10 || x != 1))
                {
                    if(board.Board_[x - 2][y - 1] != 1 && 
                    board.Board_[x - 2][y] != 1 && board.Board_[x - 2][y + 1] != 1 &&
                    board.Board_[x - 1][y + 1] != 1 && board.Board_[x][y - 1] != 1 &&
                    board.Board_[x][y] != 1 && board.Board_[x][y + 1] != 1)
                    {   
                        for (int counte = y - 1; counte < y - 1 + thisShipSize ; counte ++)
                        {
                            board.Board_[x - 1][counte] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_2(board);
                    }
                }   
                else if(x == 10 && (y != 9 || y != 1))
                {
                    if(board.Board_[x - 2][y - 2] != 1 && board.Board_[x - 2][y - 1]  != 1 &&
                    board.Board_[x - 2][y] != 1 && board.Board_[x - 2][y + 1] != 1 &&
                    board.Board_[x - 1][y - 2] != 1 && board.Board_[x - 1][y + 1] != 1)
                    {   
                        for (int counte = y - 1; counte < y - 1 + thisShipSize ; counte ++)
                        {
                            board.Board_[x - 1][counte] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_2(board);
                    }
                }   
                else if(y == 9 && (x != 10 || x != 1))
                {
                    if(board.Board_[x - 2][y - 2] != 1 && 
                    board.Board_[x - 2][y - 1] != 1 && board.Board_[x - 2][y]  != 1 &&
                    board.Board_[x - 1][y - 2] != 1 && board.Board_[x][y - 2] != 1 &&
                    board.Board_[x][y - 1] != 1 && board.Board_[x][y] != 1)
                    {   
                        for (int counte = y - 1; counte < y - 1 + thisShipSize ; counte ++)
                        {
                            board.Board_[x - 1][counte] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_2(board);
                    }
                }
                else 
                {
                    if(board.Board_[x - 2][y - 2] != 1 && board.Board_[x - 2][y - 1]  != 1 &&
                    board.Board_[x - 2][y] != 1 && board.Board_[x - 2][y + 1] != 1 &&
                    board.Board_[x - 1][y - 2] != 1 && board.Board_[x - 1][y + 1] != 1 &&
                    board.Board_[x][y - 2] != 1 && board.Board_[x][y - 1]  != 1 &&
                    board.Board_[x][y] != 1 && board.Board_[x][y + 1] != 1)
                    {   
                        for (int counte = y - 1; counte < y - 1 + thisShipSize ; counte ++)
                        {
                            board.Board_[x - 1][counte] = 1;
                        }
                    }  
                    else
                    {
                        ToPutShip_2(board);
                    }
                }   
                    
            }
            else
            {
                ToPutShip_2(board);
            }
            break;
        default:
            ToPutShip_2(board);
            break;
    }
}

void Ship :: ToPutShip_1(Board & board)
{
    int x, y;
    cout << "Enter coordinates" << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    if (x == 1 && y == 1)
    {
        if((x > 0 && x <= 10) && (y > 0 && y <= 10) && 
        board.Board_[x - 1][y] != 1  &&
        board.Board_[x][y - 1] != 1 && board.Board_[x][y] != 1 ) 
        {
            board.Board_[x - 1][y - 1] = 1;
        }
        else
        {
            ToPutShip_1(board);
        }
    }
    else if(x == 1 && y == 10)
    {             
        if((x > 0 && x <= 10) && (y > 0 && y <= 10) && 
        board.Board_[x - 1][y - 2] != 1  &&
        board.Board_[x][y - 2] != 1 && board.Board_[x][y - 1] != 1 ) 
        {
            board.Board_[x - 1][y - 1] = 1;
        }
        else
        {
            ToPutShip_1(board);
        }
    }
    else if(x == 10 && y == 1)
    {   
        if((x > 0 && x <= 10) && (y > 0 && y <= 10) && 
        board.Board_[x - 2][y - 1] != 1  &&
        board.Board_[x - 2][y] != 1 && board.Board_[x - 1][y] != 1 ) 
        {
            board.Board_[x - 1][y - 1] = 1;
        }
        else
        {
            ToPutShip_1(board);
        }
    }
    else if(x == 10 && y == 10)
    {
        if((x > 0 && x <= 10) && (y > 0 && y <= 10) && 
        board.Board_[x - 2][y - 2] != 1  &&
        board.Board_[x - 2][y - 1] != 1 && board.Board_[x - 1][y - 2] != 1 ) 
        {
            board.Board_[x - 1][y - 1] = 1;
        }
        else
        {
            ToPutShip_1(board);
        }
    }   
    else if(x == 1 && (y != 1 || y != 10))
    {
        if((x > 0 && x <= 10) && (y > 0 && y <= 10) && 
        board.Board_[x - 1][y - 2] != 1  &&
        board.Board_[x - 1][y] != 1 && board.Board_[x][y - 2] != 1 &&
        board.Board_[x][y - 1] != 1 && board.Board_[x][y] != 1 ) 
        {
            board.Board_[x - 1][y - 1] = 1;
        }
        else
        {
            ToPutShip_1(board);
        }
    }
    else if(x == 10 && (y != 1 || y != 10))
    {
        if((x > 0 && x <= 10) && (y > 0 && y <= 10) && 
        board.Board_[x - 2][y - 2] != 1  &&
        board.Board_[x - 2][y - 1] != 1 && board.Board_[x - 2][y] != 1 &&
        board.Board_[x - 1][y - 2] != 1 && board.Board_[x - 1][y] != 1 ) 
        {
            board.Board_[x - 1][y - 1] = 1;
        }
        else
        {
            ToPutShip_1(board);
        }
    }
    else if(y == 1 && (x != 1 || x != 10))
    {
        if((x > 0 && x <= 10) && (y > 0 && y <= 10) && 
        board.Board_[x - 2][y - 1] != 1  &&
        board.Board_[x - 2][y] != 1 && board.Board_[x - 1][y] != 1 &&
        board.Board_[x][y - 1] != 1 && board.Board_[x][y] != 1 ) 
        {
            board.Board_[x - 1][y - 1] = 1;
        }
        else
        {
            ToPutShip_1(board);
        }
    }
    else if(y == 10 && (x != 1 || x != 10))
    {
        if((x > 0 && x <= 10) && (y > 0 && y <= 10) && 
        board.Board_[x - 2][y - 2] != 1  &&
        board.Board_[x - 2][y - 1] != 1 && board.Board_[x - 1][y - 2] != 1 &&
        board.Board_[x][y - 1] != 1 && board.Board_[x][y - 2] != 1 ) 
        {
            board.Board_[x - 1][y - 1] = 1;
        }
        else
        {
            ToPutShip_1(board);
        }          
    }
    else
    {
        if((x > 0 && x <= 10) && (y > 0 && y <= 10) && 
        board.Board_[x - 2][y - 2] != 1  && board.Board_[x - 2][y - 1] != 1 &&
        board.Board_[x - 2][y] != 1 && board.Board_[x - 1][y - 2] != 1 &&
        board.Board_[x - 1][y] != 1 && board.Board_[x][y - 2] != 1 &&
        board.Board_[x][y - 1] != 1 && board.Board_[x][y] != 1 ) 
        {
            board.Board_[x - 1][y - 1] = 1;
        }
        else
        {
            ToPutShip_1(board);
        }
    }
}

void Ship :: ToPutShips(Board & board, Ship & ship) 
{
    ship.ToPutShip_4(board);
    board.BoardShow(); 

    ship.ToPutShip_3(board);
    board.BoardShow();
    ship.ToPutShip_3(board);
    board.BoardShow();

    ship.ToPutShip_2(board);
    board.BoardShow();
    ship.ToPutShip_2(board);
    board.BoardShow();
    ship.ToPutShip_2(board);
    board.BoardShow();

    ship.ToPutShip_1(board);
    board.BoardShow();
    ship.ToPutShip_1(board);
    board.BoardShow();
    ship.ToPutShip_1(board);
    board.BoardShow();
    ship.ToPutShip_1(board);
    board.BoardShow();   
}