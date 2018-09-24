#include <iostream>
#include <vector>
#include "entities.h"
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

int Output::run(std::vector<Entity*> entities) {
    for (int i = 0; i < entities.size(); i++) {
        if (entities[i]->hasComponent("visible")) {
            std::cout << Entity::entities[0]->id;
        }
    }
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
