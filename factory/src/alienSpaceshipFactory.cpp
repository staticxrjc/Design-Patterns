#include <alienSpaceshipFactory.h>
#include <alienFriendlySpaceship.h>
#include <alienHostileSpaceship.h>

spaceship* alienSpaceshipFactory::buildSpaceship(const char* name) {
    if(strcmp(name, "friendly") == 0) 
        return new alienFriendlySpaceship; 

    if(strcmp(name, "hostile") == 0)
        return new alienHostileSpaceship;

    std::cout << "nullptr";
    return nullptr;
}