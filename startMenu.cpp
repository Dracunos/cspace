#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>

class StartMenu {
    public:
        int run();
        StartMenu();
    
    private:
        std::string menuState;
        int runMainMenu();
        std::vector<std::string> mainOptions;
};

StartMenu::StartMenu() {
    menuState = "main";
    mainOptions.push_back("(a) New Game\n");
    mainOptions.push_back("(b) Load Game\n");
    mainOptions.push_back("(c) Options\n");
    mainOptions.push_back("(d) Exit Game\n");
}

int StartMenu::run() {
    #ifdef __linux__ 
        system("clear");
    #elif _WIN32
        system("cls");
    #endif
    
    if (menuState == "main") {
        runMainMenu();
    }
    
    
    return 0;
}

int StartMenu::runMainMenu() {
    
    std::cout << "\n\n\n\n\n" << std::setw(45) << "" << "C SPACE\n"
        << std::setw(41) << "" << "---------------\n            " << "Press a "
        "key in the (parentheses) to select the corresponding option!\n\n\n"
        << std::setw(41) << "" << mainOptions[0] << std::setw(41) << ""
        << mainOptions[1] << std::setw(41) << "" << mainOptions[2]
        << std::setw(41) << "" << mainOptions[3] << "\n\n\n\n\n\n\n\n\n";
    
    return 0;
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
