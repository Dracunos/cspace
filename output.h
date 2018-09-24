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
    
    private:
        int drawBorders();
        int drawStats();
        int drawMainWindow(std::vector<Entity*> entities);
        int drawBuffer();
        int drawGameScreen(std::vector<Entity*> entities);
        const int DISPLAYWIDTH = 89;
        const int DISPLAYHEIGHT = 32;
        const int BUFFERHEIGHT = 5;
        const int RIGHTPANELWIDTH = 22;
};



#endif
