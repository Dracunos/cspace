#ifndef STARTMENU_H
#define STARTMENU_H

class StartMenu {
    public:
        int run();
        StartMenu();
    
    private:
        std::string menuState;
        int runMainMenu();
        std::vector<std::string> mainOptions;
};

#endif
