#ifndef COMPONENTS_H
#define COMPONENTS_H

class Component {
    public:
        virtual ~Component();
};

class Visible: public Component {
    public:
        bool value;
        ~Visible();
};




#endif
