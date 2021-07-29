#pragma once
#include <iostream>
#include <spaceship.h>

class spaceshipFactory {
public:
    virtual spaceship* buildSpaceship(const char*) = 0;
};
