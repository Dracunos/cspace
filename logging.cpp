#include <iostream>
#include <fstream>


int log(std::string m) {
    std::fstream logFile;
    logFile.open("debugLog.txt", std::ios::app | std::ios::out);
    logFile << m << "\n";
    logFile.close();
    return 0;
}
