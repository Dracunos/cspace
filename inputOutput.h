#ifndef INPUTOUTPUT_H
#define INPUTOUTPUT_H
#include <vector>
#include "entities.h"
#include "input.h"
#include "output.h"
#include "startMenu.h"
#ifdef _WIN32
#include <curses.h>
#endif

class InputOutput {
    public:
        int run(std::vector<Entity*> entities, std::string& currentState);
        int runStartMenu(std::string& currentState);
        StartMenu startMenu;
        Input inputSystem;
        Output outputSystem;
        WINDOW* screen;
        InputOutput();
        ~InputOutput();
};


#endif
