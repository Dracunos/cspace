#ifndef INPUT_H
#define INPUT_H

#include <vector>
#include "entities.h"
#include "startMenu.h"
#ifdef _WIN32
#include <curses.h>
#endif

class Input {
    public:
        int run(std::vector<Entity*> entities, std::string& currentState);
        int runStartMenu(std::string& currentState, StartMenu* startMenu);
        WINDOW* screen;
    
    private:
        int handleInput();
};



#endif
