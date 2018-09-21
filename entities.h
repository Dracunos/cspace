#ifndef ENTITIES_H
#define ENTITIES_H
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


#endif
