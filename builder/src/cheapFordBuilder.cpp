#include <cheapFordBuilder.h>

cheapFordBuilder::cheapFordBuilder(){
    this->newCar = new car();
}

cheapFordBuilder::~cheapFordBuilder(){
    delete this->newCar;
}

void cheapFordBuilder::buildFrame(){
    newCar->setFrame("Steel Frame");
}
void cheapFordBuilder::buildChassis(){
    newCar->setChasis("Cheap Chassis");
}

void cheapFordBuilder::buildEngine(){
    newCar->setEngine("Cheap Engine");
}

void cheapFordBuilder::buildInterior(){
    newCar->setInterior("Cheap Interior");
}

car* cheapFordBuilder::getCar(){
    return this->newCar;
}