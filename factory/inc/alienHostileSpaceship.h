#pragma once
#include <spaceship.h>

class alienHostileSpaceship : public spaceship {
private:
    int speed;
    std::string name;
public:
    void getType();
};