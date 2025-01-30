#include "dungeon.h"
#include <iostream>

Dungeon::Dungeon() {}

void Dungeon::generateDungeon() {
    rooms.push_back(std::make_unique<EmptyRoom>());
    rooms.push_back(std::make_unique<MonsterRoom>());
    rooms.push_back(std::make_unique<UpgradeRoom>());
    rooms.push_back(std::make_unique<TreasureRoom>());
}

void Dungeon::explore(Monk &monk) {
    for (auto &room : rooms) {
        if (!monk.isAlive()) {
            std::cout << "Game Over!" << std::endl;
            return;
        }
        monk.move(room.get());
    }
    std::cout << "You found the treasure! Game Won!" << std::endl;
}