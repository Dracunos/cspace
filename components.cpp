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
        ~Visible();
};

Visible::Visible() {
    this->componentName = "visible";
}

Visible::~Visible() {
    // Deconstruct, remove from entity list
}
