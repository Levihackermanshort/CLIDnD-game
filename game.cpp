#include "game.h"
#include <iostream>

Game::Game() : playerHealth(15), playerAttack(3), goblinHealth(10), treasureFound(false) {}

std::string Game::startGame() {
    return "Welcome to Monk Adventure!";
}

std::string Game::movePlayer(std::string direction) {
    return "You moved " + direction;
}

std::string Game::attack() {
    if (rand() % 2 == 0) {
        goblinHealth -= playerAttack;
        return "You attacked! Goblin HP: " + std::to_string(goblinHealth);
    } else {
        return "You missed!";
    }
}

std::string Game::meditate() {
    playerHealth = 15;
    return "You meditated. Health restored!";
}

std::string Game::upgrade() {
    playerAttack += 2;
    return "Attack increased to " + std::to_string(playerAttack);
}