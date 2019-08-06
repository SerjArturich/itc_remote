#include "game.h"
#include <iostream>
using namespace std;


void Game :: strokePlayer_1(Board &board_1, Board & board_2)
    {
        int x,y;
        while (countePlayer_2 != 20 && countePlayer_1 != 20)
        {
            cout << "-----------PLAYER 1-------------" <<endl;
            cout << "Please enter coordinates to hit." << endl;
            cout << "x = ";
            cin >> x;
            cout << "y = ";
            cin >> y;
            if((x > 0 && x <= 10) && (y > 0 && y <= 10))  
            {          
                if(board_2.Board_[x - 1][y - 1] == 1)
                {
                    cout << "A sharp shot" << endl;
                    board_2.Board_[x - 1][y - 1] = -1;
                    countePlayer_2 ++;
                    cout << "BOARD 2" << endl;
                    board_2.BoardShow();
                    cout << "BOARD 1" << endl;
                    board_1.BoardShow();
                }
                else
                {
                    cout << "Player 1 Get wet" << endl;
                    board_2.Board_[x - 1][y - 1] = 8;
                    cout << "BOARD 2" << endl;
                    board_2.BoardShow();
                    cout << "BOARD 1" << endl;
                    board_1.BoardShow();
                    cout << "Please wait for opponent is move" <<endl;
                    strokePlayer_2(board_1,board_2);
                }
            }
            else
            {
                strokePlayer_1(board_1, board_2);
            }
            
        }
        if(countePlayer_2 == 20)
        {
            cout << "Win Plaer 1" <<endl;
        }
        else
        {
            cout << "Win Plaer 2" <<endl;
        }
        
    }

    void Game :: strokePlayer_2(Board & board_1, Board & board_2)
    {
        int x,y;
        while (countePlayer_1 != 20 && countePlayer_2 != 20)
        {
            cout << "-----------PLAYER 2-------------" <<endl;
            cout << "Please enter coordinates to hit." << endl;
            cout << "x = ";
            cin >> x;
            cout << "y = ";
            cin >> y;
            if((x > 0 && x <= 10) && (y > 0 && y <= 10))
            {
                if(board_1.Board_[x - 1][y - 1] == 1)
                {
                    cout << "A sharp shot" << endl;
                    board_1.Board_[x - 1][y - 1] = -1;
                    countePlayer_1 ++;
                    cout << "BOARD 1" << endl;
                    board_1.BoardShow();
                    cout << "BOARD 2" << endl;
                    board_2.BoardShow();
                }
                else
                {
                    cout << "Player 2 Get wet" << endl;
                    board_1.Board_[x - 1][y - 1] = 8;
                    cout << "BOARD 1" << endl;
                    board_1.BoardShow();
                    cout << "BOARD 2" << endl;
                    board_2.BoardShow();
                    cout << "Please wait for opponent is move" <<endl;
                    strokePlayer_1(board_1,board_2);
                }
            }
            else
            {
                strokePlayer_2(board_1, board_2);
            }
        }
        if(countePlayer_1 == 20)
        {
            cout << "Win Plaer 2" <<endl;
        }
        else
        {
            cout << "Win Plaer 1" <<endl;
        }
    }