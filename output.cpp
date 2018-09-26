#include <iostream>
#include <vector>
#include "entities.h"
#include "startMenu.h"
#include <curses.h>



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
        const int DISPLAYHEIGHT = 28;
        const int BUFFERHEIGHT = 5;
        const int RIGHTPANELWIDTH = 22;
};

int Output::run(std::vector<Entity*> entities) {
    drawGameScreen(entities);
    return 0;
}

int Output::runStartMenu(std::string& currentState, StartMenu* startMenu) {
    if (startMenu->menuState == "init") {
        startMenu->menuState = "main";
    }
    if (startMenu->menuState == "main") {
        clear();
        mvaddstr(5, 43, startMenu->mainMenu.menuData.menuTitle.c_str());
        mvaddstr(6, 28, "--------------------------------------");
        mvaddstr(7, 12, startMenu->mainMenu.menuData.menuDesc.c_str());
        std::vector<std::string> menuOptions =
            startMenu->mainMenu.menuData.menuOptions;
        for (int i = 0; i < menuOptions.size(); i++) {
            mvaddstr(i + 12, 40, menuOptions[i].c_str());
        }
    }
    
    refresh();
    return 0;
};

int Output::drawGameScreen(std::vector<Entity*> entities) {
    clear();
    drawBorders();
    drawStats();
    drawMainWindow(entities);
    drawBuffer();
    
    refresh();
    return 0;
}

int Output::drawBorders() {
    mvaddstr(0, 0, std::string(Output::DISPLAYWIDTH, '=').c_str());
    // draw horizontal bars
    for (int i = 0; i < (Output::DISPLAYHEIGHT - 1); i++) {
        mvaddch(i + 1, 0, '|');
        mvaddch(i + 1, Output::DISPLAYWIDTH - Output::RIGHTPANELWIDTH,
                 '|');
        mvaddch(i + 1, Output::DISPLAYWIDTH - 1, '|');
    }
    // draw line above text buffer
    mvaddstr(Output::DISPLAYHEIGHT - Output::BUFFERHEIGHT - 1, 1,
             std::string(Output::DISPLAYWIDTH - Output::RIGHTPANELWIDTH - 1,
                         '-').c_str());
    // draw line above command list
    mvaddstr(Output::DISPLAYHEIGHT - 9,
             Output::DISPLAYWIDTH - Output::RIGHTPANELWIDTH + 1,
             std::string(Output::RIGHTPANELWIDTH - 2, '-').c_str());
    mvaddstr(Output::DISPLAYHEIGHT,
             0, std::string(Output::DISPLAYWIDTH, '=').c_str());
}

int Output::drawStats() {
    
}

int Output::drawMainWindow(std::vector<Entity*> entities) {
    
}

int Output::drawBuffer() {
    
}



/*
console version game screen mock-up:
=========================================================================================
|                                                                | Name, Title          |
|                                                                | Stats:               |
|                                                                |                      |
|                                                                |                      |
|                                                                |                      |
|                                                                |                      |
|                                                                |                      |
|                                                                |                      |
|                                                                |                      |
|                                                                |                      |
|                                                                |                      |
|                                                                |                      |
|                                                                |                      |
|                                                                |                      |
|                                                                |                      |
|                                                                |                      |
|                                                                |                      |
|                                                                |                      |
|                                                                |                      |
|                                                                |                      |
|                                                                |----------------------|
|                                                                | Command List:        |
|                                                                |                      |
|----------------------------------------------------------------|                      |
| blah blah blah                                                 |                      |
| blah bloohblahsfesfsef                                         |                      |
|_foo last statement on last turn                                |                      |
| dsfes                                                          |                      |
| resfse                                                         |                      |
=========================================================================================





*/
