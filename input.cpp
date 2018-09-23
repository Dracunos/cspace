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
        int handleInput();
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

int Input::handleInput() {
    
}
