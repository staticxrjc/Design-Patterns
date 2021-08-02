#pragma once
#include <spaceship.h>

class alienHostileSpaceship : public spaceship {
private:
    int mSpeed;
    std::string mName;
public:
    void getType();
};