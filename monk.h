#ifndef MONK_H
#define MONK_H

#include <string>

class Room;
class Monster;

class Monk {
public:
    Monk(std::string n);
    void move(Room *room);
    void attackMonster(Monster &monster);
    void meditate();
    void upgrade();
    bool isAlive() const;
    int getHealth() const;
    int getAttack() const;
private:
    std::string name;
    int health;
    int maxHealth;
    int attack;
};

#endif