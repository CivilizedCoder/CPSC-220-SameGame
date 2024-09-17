#include "View.h"
#include <iostream>

using namespace std;

View::View(Model &b) {
    board = &b;
}

void View::display() {
    vector<vector<color>> grid = board->getGrid(); 
    cout << " ";
    for(int i = 0; i < grid.size(); ++i){
        cout << " "  << i;
    }
    cout << endl;

    for(int i = 0; i < grid.size(); ++i){
        cout << "--";
    }
    cout << "-" << endl;
    for (int i = 0; i < grid.size(); ++i) {
        cout << i << "|";
        for (int j = 0; j < grid[i].size(); ++j) {
            cout << grid[i][j] << " ";  
        }
        cout<< endl;
    }
    cout << "\n\n\n\n\n\n";
}
