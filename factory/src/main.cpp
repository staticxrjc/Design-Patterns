//Factory Method
#include <alienSpaceshipFactory.h>

int main(){
    spaceshipFactory* factory = new alienSpaceshipFactory();
    spaceship* ship = factory->buildSpaceship("hostile");
    ship->getType();
    ship = factory->buildSpaceship("friendly");
    ship->getType();
    delete factory;
    return 1;
}
