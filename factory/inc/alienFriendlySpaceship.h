#pragma once
#include <spaceship.h>

class alienFriendlySpaceship : public spaceship {
private:
    int speed;
    std::string name;
public:
    void getType();
};