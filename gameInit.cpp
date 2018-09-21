#include "components.h"
#include "entities.h"
#include <map>

int initializeProgram() {
    
}

int initializeGame() {
    // probably always start by generating the player entitiy
    Entity *player = new Entity();
    Visible *playerVisible = new Visible();
    playerVisible->value = true;
    player->addComponent(playerVisible);
    Location *playerLocation = new Location();
    playerLocation->x = 20;
    playerLocation->y = 20;
    player->addComponent(playerLocation);
    Tile *playerTile = new Tile;
    playerTile->tile = "@";
    player->addComponent(playerTile);
}

int setUpStartingConditions() {
    // TODO: make these function arguments
    std::map<std::string, std::string> startingConditions;
    startingConditions["playerName"] = "Drac";
    startingConditions["ship"] = "1";
    startingConditions["location"] = "start";
}
