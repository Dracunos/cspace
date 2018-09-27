#include <iostream>
#include <vector>
#include <chrono>
#include "components.h"
#include "entities.h"
#include "inputOutput.h"
#include "gameInit.h"
#include "logging.h"

int main() {
    // Set up timing
    typedef std::chrono::duration<int, std::ratio<1, 1000>> millisec_type;
    // Update every 30ms
    millisec_type thirtyMillisec(30);
    std::chrono::system_clock::time_point now =
        std::chrono::system_clock::now();

    // Gamestates, strings: "start" "pause" "run" "exit"
    std::string currentState = "start";

    // initialize: create systems
    InputOutput inputOutput;
    
    initializeProgram();
    
    while (!(currentState == "exit")) {
        if (currentState == "run") {
            inputOutput.run(Entity::entities, currentState);
        } else if (currentState == "start") {
            inputOutput.runStartMenu(currentState);
        } else if (currentState == "pause") {
            // pause menu loop
        } else {
            // error
        }
        while (1) { // wait until 30ms is up, keeps frame rate at about 30fps
            if (now + thirtyMillisec < std::chrono::system_clock::now()) {
                now = std::chrono::system_clock::now();
                break;
            }
        }
    }
    log("test logging.");

    return 0;
}
