#ifndef STARTMENU_H
#define STARTMENU_H
#include <vector>

struct standardMenuStruct {
    std::string menuTitle;
    std::string menuDesc;
    std::vector<std::string> menuOptions;
};

class StandardMenu {
    public:
        standardMenuStruct menuData;
};

class MainMenu: public StandardMenu {
    public:
        MainMenu();
};

class StartMenu {
    public:
        std::string menuState;
        MainMenu mainMenu;
        StartMenu();
};

#endif
