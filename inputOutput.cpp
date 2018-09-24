#include <vector>
#include "entities.h"
#include "input.h"
#include "output.h"
#include "startMenu.h"
#include <curses.h>

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

InputOutput::InputOutput() {
    screen = initscr();
    cbreak();
    noecho();
    nodelay(screen, true);
    curs_set(0);
    inputSystem.screen = screen;
    outputSystem.screen = screen;
}

InputOutput::~InputOutput() {
    endwin();
}

int InputOutput::run(std::vector<Entity*> entities,
                     std::string& currentState) {
    outputSystem.run(entities);
    inputSystem.run(entities, currentState);
    return 0;
}

int InputOutput::runStartMenu(std::string& currentState) {
    outputSystem.runStartMenu(currentState, &startMenu);
    inputSystem.runStartMenu(currentState, &startMenu);
    
    return 0;
}
