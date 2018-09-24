#ifndef INPUT_H
#define INPUT_H

#include <vector>
#include "entities.h"
#include "startMenu.h"
#include <curses.h>

class Input {
    public:
        int run(std::vector<Entity*> entities, std::string& currentState);
        int runStartMenu(std::string& currentState, StartMenu* startMenu);
        WINDOW* screen;
    
    private:
        int handleInput();
};



#endif
