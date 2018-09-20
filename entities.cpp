#include <vector>

// create entity class here
class Entity {
    public:
        int id;
        static std::vector<Entity*> entities;

        static std::vector<Entity*> getEntities();
        Entity();

    private:
        static int lastID;
};

std::vector<Entity*> Entity::getEntities() {
    return Entity::entities;
}

std::vector<Entity*> Entity::entities;

int Entity::lastID = 0;

Entity::Entity() {
    id = ++Entity::lastID;
    Entity::entities.push_back(this);
}

