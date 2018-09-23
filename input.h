#ifndef INPUT_H
#define INPUT_H

#include <vector>
#include "entities.h"
#ifdef _WIN32
#include <windows.h>
#endif

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



#endif
