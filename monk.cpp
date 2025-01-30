#include "monk.h"
#include <iostream>

Monk::Monk(std::string n) : name(n), health(15), maxHealth(15), attack(3) {}

void Monk::move(Room *room) {
    std::cout << name << " moves to a new room." << std::endl;
    room->enter(*this);
}

void Monk::attackMonster(Monster &monster) {
    if (rand() % 2 == 0) {
        std::cout << name << " attacks! Monster HP: " << monster.getHealth() - attack << std::endl;
        monster.takeDamage(attack);
    } else {
        std::cout << name << " missed the attack!" << std::endl;
    }
}

void Monk::meditate() {
    std::cout << name << " meditates and restores full health." << std::endl;
    health = maxHealth;
}

void Monk::upgrade() {
    std::cout << "Choose upgrade: (1) Increase max HP by 5 (2) Increase attack by 2: ";
    int choice;
    std::cin >> choice;
    if (choice == 1) {
        maxHealth += 5;
        health = maxHealth;
        std::cout << "Max HP increased to " << maxHealth << "!" << std::endl;
    } else {
        attack += 2;
        std::cout << "Attack power increased to " << attack << "!" << std::endl;
    }
}