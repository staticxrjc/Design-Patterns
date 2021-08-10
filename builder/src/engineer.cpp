#include <engineer.h>

engineer::engineer(carBuilder* builder) {
    this->builder = builder;
}

car* engineer::getCar() {
    return this->builder->getCar();
}

void engineer::constructCar() {
    this->builder->buildChassis();
    this->builder->buildEngine();
    this->builder->buildFrame();
    this->builder->buildInterior();
}