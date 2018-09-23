#include <iostream>
#include <vector>
#include "entities.h"

// input system will have a run method that will run on each entity in the entity list that gets passed to it

class Output {
    public:
        int run(std::vector<Entity*> entities);
};

int Output::run(std::vector<Entity*> entities) {
    for (int i = 0; i < entities.size(); i++) {
        if (entities[i]->hasComponent("visible")) {
            std::cout << Entity::entities[0]->id;
        }
    }
    return 0;
}
