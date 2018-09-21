#include <vector>
#include <string>
#include <iostream>
#include <stdexcept>
#include "components.h"


class Entity {
    public:
        int id;
        Component* getComponent(std::string componentName);
        int removeComponent(Component* component);
        int addComponent(Component* component);
        std::vector<Component*> components;
        
        static std::vector<Entity*> entities;
        Entity();

    private:
        static int lastID;
};

Component* Entity::getComponent(std::string componentName) {
    for (int i = 0; i < this->components.size(); i++) {
        if (this->components[i]->componentName == componentName) {
            return this->components[i];
        }
    }
    throw std::out_of_range("Unable to find " + componentName);
}

int Entity::removeComponent(Component* component) {
    
}

int Entity::addComponent(Component* component) {
    std::cout << "Adding: " << component->componentName << std::endl;
    this->components.push_back(component);
    std::cout << "checking: " << this->components[0] << std::endl;
}

std::vector<Entity*> Entity::entities;

int Entity::lastID = 0;

Entity::Entity() {
    id = ++Entity::lastID;
    Entity::entities.push_back(this);
}

