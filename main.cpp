#include <iostream>
#include <vector>
#include "components.h"
#include "entities.h"
#include "input.h"
#include "output.h"
#include "gameInit.h"
#include "startMenu.h"

int main() {

    // Gamestates, strings: "start" "pause" "run" "exit"
    std::string currentState = "start";

    // initialize: create systems
    Input inputSystem;
    Output outputSystem;
    StartMenu startMenu;
    
    initializeProgram();
    
    
    while (!(currentState == "exit")) {
        if (currentState == "run") {
            inputSystem.run(Entity::entities);
            outputSystem.run(Entity::entities);
        } else if (currentState == "start") {
            startMenu.run();
            inputSystem.runStartMenu();
        } else if (currentState == "pause") {
            // pause menu loop
        } else {
            // error
        }
    }
    

    return 0;
}
