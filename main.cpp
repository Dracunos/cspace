#include <iostream>
#include <vector>
#include "components.h"
#include "entities.h"
#include "input.h"
#include "output.h"
#include "gameInit.h"

int main() {

    // Gamestates, strings: "start" "pause" "run" "exit"
    std::string currentState = "start";

    // initialize: create systems
    Input inputSystem;
    Output outputSystem;
    
    initializeProgram();
    
    
    // skip to rendering
    currentState = "run";
    setUpStartingConditions();
    initializeGame();
    
    while (!(currentState == "exit")) {
        if (currentState == "run") {
            inputSystem.run(Entity::entities);
            outputSystem.run(Entity::entities);
        } else if (currentState == "start") {
            // start menu loop
        } else if (currentState == "pause") {
            // pause menu loop
        } else {
            // error
        }
        currentState = "exit";
    }
    

    return 0;
}
