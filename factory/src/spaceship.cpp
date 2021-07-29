#include <spaceship.h>

int spaceship::getSpeed(){
    return mSpeed;
}

std::string spaceship::getName(){
    return mName;
}

void spaceship::setSpeed(int speed){
    mSpeed = speed;
}

void spaceship::setName(std::string name){
    mName = name;
}