#ifndef VIEW_H
#define VIEW_H

#include "Model.h"

class View {
private:
    Model* board;

public:
    View(Model &b);
    void display();
};

#endif
