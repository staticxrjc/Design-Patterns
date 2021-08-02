#pragma once
#include <spaceship.h>

class alienFriendlySpaceship : public spaceship {
private:
    int mSpeed;
    std::string mName;
public:
    void getType();
};