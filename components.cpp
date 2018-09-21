#include <string>

class Component {
    public:
        virtual ~Component() = 0;
        std::string componentName;
};

Component::~Component() {}

class Visible: public Component {
    public:
        bool value;
        Visible();
};

Visible::Visible() {
    this->componentName = "visible";
}

class Location: public Component {
    public:
        int x;
        int y;
        Location();
};

Location::Location() {
    this->componentName = "location";
}

class Tile: public Component {
    public:
        std::string tile;
        Tile();
};

Tile::Tile() {
    this->componentName = "tile";
}
