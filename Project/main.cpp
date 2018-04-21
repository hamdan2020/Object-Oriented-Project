#include <iostream>
#include "Game.h"
using namespace std;

int main()
{
    int v;

    Game g;

    cout << "Game ON!!" << endl;

    while(true){

        cout << "Player ";
        cout << g.turn;
        cout << " Turn" << endl;




        if(g.isFull() == 0){
        cin >> g.loc;
     //   v= g.loc;
        g.setCell(g.loc);
        g.display();
        }
        else
        {
            cout <<"Tie" << endl;
            break;
        }







    }
    cout << g.limit << endl;
    g.display();





    return 0;
}
