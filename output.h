#ifndef OUTPUT_H
#define OUTPUT_H
#include "startMenu.h"
#ifdef _WIN32
#include <curses.h>
#endif

class Output {
    public:
        int run(std::vector<Entity*> entities);
        int runStartMenu(std::string& currentState, StartMenu* startMenu);
        WINDOW* screen;
};



#endif
