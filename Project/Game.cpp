#include "Game.h"
#include<iostream>


using namespace std;

Game::Game()
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<sizeof(cell)/sizeof(cell[0]); j++)
        {
            cell[i][j]= "NULL";
        }
    }

}


///// Case Block

void Game::setCell(int x)
{

    switch(x)
    {

    case 1:
        if(cell[0][0] == "NULL")
        {
            cell[0][0] = xTurn();
            break;
        }

        else
        {
            cout <<"Cell is N/A " << endl;

            break;
        }
    case 2:
        if(cell[0][1]== "NULL")
        {
            cell[0][1] = xTurn();
            break;
        }
        else
            cout <<"Cell is N/A" << endl;
        break;

    case 3:
        if(cell[0][2]== "NULL")
        {
            cell[0][2] = xTurn();
            break;
        }
        else
            cout <<"Cell is N/A" << endl;
        break;

    case 4:
        if(cell[1][0]== "NULL")
        {
            cell[1][0] = xTurn();
            break;
        }
        else
            cout <<"Cell is N/A" << endl;
        break;

    case 5:
        if(cell[1][1]== "NULL")
        {
            cell[1][1] = xTurn();
            break;
        }
        else
            cout <<"Cell is N/A" << endl;
        break;
    case 6:
        if(cell[1][2]== "NULL")
        {
            cell[1][2] = xTurn();
            break;
        }
        else
            cout <<"Cell is N/A" << endl;
        break;

    case 7:
        if(cell[2][0]== "NULL")
        {
            cell[2][0] = xTurn();
            break;
        }
        else
            cout <<"Cell is N/A" << endl;
        break;
    case 8:
        if(cell[2][1]== "NULL")
        {
            cell[2][1] = xTurn();
            break;
        }
        else
            cout <<"Cell is N/A" << endl;
        break;
    case 9:
        if(cell[2][2]== "NULL")
        {
            cell[2][2] = xTurn();
            break;
        }
        else
            cout <<"Cell is N/A" << endl;
        break;


    default:
        cout <<"Error ";
        break;

    }
}

/////

/*void Game::setTurn(){

    if(turn == "X"){
            cout << "This is == X/" << turn << endl;
        turn = "O";

    }
    else if(turn == "O"){
             cout << "This is == O/" << turn << endl;
        turn = "X";

    }

} */


string Game::xTurn()
{

    if(turn == "X")
    {
        turn = "O";
        return "X";
    }
    else if(turn == "O")
    {
        turn = "X";
        return "O";
    }

}

bool Game::isFull(){
    int flag= 1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            if(cell[i][j] == "NULL")
            {
                flag =0;
            }

        }
    }
    if(flag == 0)
    {
        return false;
    }
    else
        return true;

}


void Game::display()
{

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<sizeof(cell)/sizeof(cell[0]); j++)
        {
            cout << cell[i][j];
        }
        cout << "\n";
    }

}
