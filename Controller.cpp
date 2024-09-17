#include <iostream>
#include "Model.h"
#include "View.h"
using namespace std;

int main(){
    int x,y;
    Model* m = new Model();
    View view(*m);
bool gameOver = false;
int moves = 0;
bool checking = true;
while(!gameOver){
    checking = true;
    view.display();
    while(checking){
        cout << "Please select a your x component: ";
        cin >> y;
        cout << "Please select a your y component: ";
        cin >> x;
        if(x < 5 && x > -1 && y < 5 && y > -1)
            checking = false;
        else
            cout << "Input must range from 0-4, \nPlease try again.";
    }


    m->select(x,y);
    gameOver = m->gameOver(); //check whether the game has ended.
    m->drop();
    moves ++;

}
view.display();
cout << "Congrats!\nYou won in " << moves << " moves!\n\n";

    return 1;
}
