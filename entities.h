#ifndef OUTPUT_H
#define OUTPUT_H


class Entity {
    public:
        int id;
        static std::vector<Entity*> entities;

        static std::vector<Entity*> getEntities();
        Entity();

    private:
        static int lastID;
};


#endif
