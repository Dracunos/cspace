#include <iostream>
#include <vector>
#include "entities.h"
#include "startMenu.h"
#include "gameInit.h"
#ifdef _WIN32
#include <curses.h>
#endif

// input system will have a run method that will run on each entity in the entity list that gets passed to it

class Input {
    public:
        int run(std::vector<Entity*> entities, std::string& currentState);
        int runStartMenu(std::string& currentState, StartMenu* startMenu);
        WINDOW* screen;
    
    private:
        int handleInput();
};

int Input::run(std::vector<Entity*> entities, std::string& currentState) {
    int input = handleInput();
    if (input == -1) {
        return 0; // No input detected
    }
    char inputChar = input;
    if (inputChar == 'q') {
        currentState = "exit";
    }
    return 0;
}

int Input::runStartMenu(std::string& currentState, StartMenu* startMenu) {
    int input = handleInput();
    if (input == -1) {
        return 0; // No input detected
    }
    if (startMenu->menuState == "main") {
        std::vector<std::string> menuOptions =
            startMenu->mainMenu.menuData.menuOptions;
        char inputChar = input;
        if (inputChar == 'd') {
            currentState = "exit";
        } else if (inputChar == 'a') {
            initializeGame();
            currentState = "run";
        }
    }
    
    return 0;
};

#ifdef __linux__
    // TODO Implement linux stuff
    int Input::handleInput() {
        int inputChar;
        inputChar = getchar();
        switch(inputChar) {
            case 65: // up arrow
                std::cout << "up pressed!\n";
                break;
        }
        return 0;
    }
#elif _WIN32
    int Input::handleInput() {
        int inputChar;
        inputChar = getch();
        return inputChar;
    }
#endif
