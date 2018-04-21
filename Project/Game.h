#ifndef GAME_H
#define GAME_H
#include<iostream>
using namespace std;

class Game
{
    public:

        Game();
        string cell[3][3];
        int cell_size = 9,limit=0,loc;
        string turn = "X";
        void display();
        void setTurn();
        string xTurn();
        void setCell(int y);
        bool isFull();


    protected:

    private:
};

#endif // GAME_H
