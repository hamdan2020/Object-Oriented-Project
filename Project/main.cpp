#include <iostream>
#include "Game.h"
using namespace std;

int main()
{

    Game G1;
    int x;

    cout << "Game ON!!" << endl;

    while(true)
    {
        cout << "Player ";
        cout << G1.turn;
        cout << " Turn" << endl;

        if(G1.isFull() == 0)
        {
            cin >> x;
            G1.set_loc(x);
            G1.setCell(G1.ret_loc());
            if(G1.winCase() == 1)
            {
                cout <<" GAME OVER!! \n";
                cout << "The Winner Player " << G1.turnRev() << endl;
                G1.display();
                break;

            }

        }

        else
        {
            cout <<"Tie" << endl;
            break;
        }

    }


    return 0;
}
