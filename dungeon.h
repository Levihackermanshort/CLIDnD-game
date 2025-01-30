#ifndef DUNGEON_H
#define DUNGEON_H

#include <vector>
#include <memory>
#include "room.h"

class Monk;

class Dungeon {
public:
    Dungeon();
    void generateDungeon();
    void explore(Monk &monk);
private:
    std::vector<std::unique_ptr<Room>> rooms;
};

#endif