#ifndef COMPONENTS_H
#define COMPONENTS_H
#include <string>

class Component {
    public:
        virtual ~Component();
        std::string componentName;
};

class Visible: public Component {
    public:
        bool value;
        Visible();
};

class Location: public Component {
    public:
        int x;
        int y;
        Location();
};

class Tile: public Component {
    public:
        std::string tile;
        Tile();
};



#endif
