#include <expensiveFordBuilder.h>

expensiveFordBuilder::expensiveFordBuilder(){
    this->newCar = new car();
}

expensiveFordBuilder::~expensiveFordBuilder(){
    delete this->newCar;
}

void expensiveFordBuilder::buildFrame(){
    newCar->setFrame("Steel Frame");
}
void expensiveFordBuilder::buildChassis(){
    newCar->setChasis("Expensive Chassis");
}

void expensiveFordBuilder::buildEngine(){
    newCar->setEngine("Expensive Engine");
}

void expensiveFordBuilder::buildInterior(){
    newCar->setInterior("Expensive Interior");
}

car* expensiveFordBuilder::getCar(){
    return this->newCar;
}
