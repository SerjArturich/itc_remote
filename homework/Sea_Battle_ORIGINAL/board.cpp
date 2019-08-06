#include "board.h"
#include <iostream>
using namespace std;

Board :: Board()
{
    this->boardSize = 10;
    Board_ = new int * [boardSize];
    for(int counte = 0; counte < boardSize; counte ++)
    {
        Board_ [counte] = new int [boardSize];
    }
}

Board :: ~Board()
{
    for(int counte = 0; counte < boardSize; counte ++)
    {
        delete [] Board_[counte];
    }
    delete [] Board_;
}

void Board :: BoardInit()
{
    for(int counterow = 0; counterow <  boardSize; ++ counterow)
    {   
        for(int countecol = 0; countecol <  boardSize; ++ countecol)
        {
            Board_[counterow][countecol] = 0;
        }
    }            
}
    
void Board :: BoardShow()
{
    char letter[10] = {'a','b','c','d','e','f','g','h','i','j'};
    cout << "   ";
    for(int counte = 0; counte < boardSize; ++ counte)
    {
        cout << letter[counte] <<  "  " ;
    }
    cout <<endl ;
    for(int counterow = 0; counterow <  boardSize; ++ counterow)
    {   
        if(counterow < 9)
        {
            cout << counterow + 1  << " |";
        }
        else
        {
            cout << counterow + 1  << "|";
        }
        
        for(int countecol = 0; countecol <  boardSize; ++ countecol)
        {
            cout << Board_[counterow][countecol] << " |";
        }
        cout << endl;
    }
    cout << endl;
}    