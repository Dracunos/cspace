#include <vector>
#include <iostream>
#include "components.h"


class Entity {
    public:
        int id;
        int getComponent(Component* component);
        int removeComponent(Component* component);
        int addComponent(Component* component);
        std::vector<Component*> components;
        
        static std::vector<Entity*> entities;
        Entity();

    private:
        static int lastID;
};

int Entity::getComponent(Component* component) {
    
}

int Entity::removeComponent(Component* component) {
    
}

int Entity::addComponent(Component* component) {
    std::cout << "Adding: " << component << std::endl;
    this->components.push_back(component);
}

std::vector<Entity*> Entity::entities;

int Entity::lastID = 0;

Entity::Entity() {
    id = ++Entity::lastID;
    Entity::entities.push_back(this);
}

