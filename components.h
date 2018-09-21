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
        std::string componentName;
        bool value;
        Visible();
        ~Visible();
};




#endif
