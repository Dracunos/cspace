#include <iostream>
#include <vector>
#include "entities.h"
#include "output.h"

int main() {
    
    // create array of gamestates?
    // std::string gameStates[3] = {"start", "run", "end"};
    // Maybe we can have the systems handle all the gamestate type logic as well..
    
    // create an array of systems
    // might use function pointers as the values here instead of strings
    std::string systems[2] = {"display", "input"};
    
    // get list of all entities in the game
    std::vector<Entity> entities;
    
    // at least during gameplay gamestate, run entities through each system.
    // one system should manage the input, output, logic, etc.. this should
    // keep looping until the program exits.. Let's see how simple we can
    // make this part of the logic, try to keep as much in the systems as
    // possible
    
    return 0;
}
