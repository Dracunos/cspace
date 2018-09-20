

class Component {
    public:
        virtual ~Component() = 0;
};

Component::~Component() {}

class Visible: public Component {
    public:
        bool value;
        ~Visible();
};

Visible::~Visible() {
    // Deconstruct, remove from entity list
}
