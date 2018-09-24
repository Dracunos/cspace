#include <iostream>
#include <iomanip>
#include <cstdlib>
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

MainMenu::MainMenu() {
    menuData.menuTitle = "C SPACE";
    menuData.menuDesc = "Press a key in the (parentheses) to select the corresponding option!";
    menuData.menuOptions.push_back("(a) New Game");
    menuData.menuOptions.push_back("(b) Load Game");
    menuData.menuOptions.push_back("(c) Options");
    menuData.menuOptions.push_back("(d) Exit Game");
}






class StartMenu {
    public:
        std::string menuState;
        MainMenu mainMenu;
        StartMenu();
};

StartMenu::StartMenu() {
    menuState = "init";
}

/*
Console version mock-ups:
Main Screen:





                                            C SPACE
                                        ---------------
            Press a key in the (parentheses) to select the corresponding option!
                    
                    
                                        (a) New Game
                                        (b) Load Game
                                        (c) Options
                                        (d) Exit Game

                    
                    



Other Screen:









*/
