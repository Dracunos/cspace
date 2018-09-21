#include <iostream>
#include <vector>
#include "components.h"
#include "entities.h"
#include "input.h"
#include "output.h"

int main() {

    // create array of gamestates?
    // std::string gameStates[3] = {"start", "run", "end"};
    // Maybe we can have the systems handle all the gamestate type logic as well..

    // initialize: create systems
    Input inputSystem;
    Output outputSystem;
    
    
    //Visible test;
    //std::vector<Component*> t;
    //t.push_back(&test);
    
    Entity t;
    Visible test;
    t.addComponent(&test);
    t.components[0]->componentName = "bpoo";
    std::cout << static_cast<Visible*>(t.components[0])->componentName << "\n" << (&test)->componentName;
    
    //Entity j;
    //Entity q;
    //Entity bobbertfooblemikples;
    //t.addComponent(new Visible);

    // at least during gameplay gamestate, run entities through each system.
    // one system should manage the input, output, logic, etc.. this should
    // keep looping until the program exits.. Let's see how simple we can
    // make this part of the logic, try to keep as much in the systems as
    // possible
    inputSystem.run(Entity::entities);
    outputSystem.run(Entity::entities);
    

    return 0;
}
