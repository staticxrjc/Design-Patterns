#pragma once
#include <spaceshipFactory.h>

class alienSpaceshipFactory : public spaceshipFactory {
public:
    spaceship* buildSpaceship(const char*) override;
};
