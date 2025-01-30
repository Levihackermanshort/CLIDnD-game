#ifndef GAME_H
#define GAME_H

#include <string>

class Game {
public:
    Game();
    std::string startGame();
    std::string movePlayer(std::string direction);
    std::string attack();
    std::string meditate();
    std::string upgrade();
private:
    int playerHealth;
    int playerAttack;
    int goblinHealth;
    bool treasureFound;
};

#endif