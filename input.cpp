#include <iostream>
#include <vector>
#include "entities.h"
#ifdef _WIN32
#include <windows.h>
#endif

// input system will have a run method that will run on each entity in the entity list that gets passed to it

class Input {
    public:
        int run(std::vector<Entity*> entities);
        int runStartMenu();
    
    private:
        #ifdef __linux__
            int handleInput();
        #elif _WIN32
            int handleInput(HANDLE consoleInput, DWORD numberRead,
                PINPUT_RECORD inBuffer);
        #endif
};

int Input::run(std::vector<Entity*> entities) {
    for (int i = 0; i < entities.size(); i++) {
        std::cout << "Running input on " << entities[i] << std::endl;
    }
    return 0;
}

int Input::runStartMenu() {
    
    
    return 0;
};

#ifdef __linux__
    int handleInput() {
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
    int handleInput(HANDLE consoleInput, DWORD numberRead, PINPUT_RECORD 
                   inBuffer) {
        ReadConsoleInput(consoleInput, inBuffer, 128, &numberRead);
        for (int i = 0; i < numberRead; i++) {
            if (inBuffer[i].Event.KeyEvent.bKeyDown) {
                switch(inBuffer[i].Event.KeyEvent.wVirtualKeyCode) {
                    case 38: // up
                        std::cout << "up pressed!\n";
                        break;
                    case 39: // right
                        std::cout << "right pressed!\n";
                        break;
                    case 40: // down
                        std::cout << "down pressed!\n";
                        break;
                    case 81: // q
                        std::cout << "q pressed!\n";
                        break;
                }
            }
        }
        return 0;
    }
#endif
