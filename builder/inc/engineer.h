#ifndef ENGINEER_H
#define ENGINEER_H

#include <carBuilder.h>
#include <car.h>

class engineer {
private:
    carBuilder* builder;

public:
    engineer(carBuilder*);
    car* getCar();
    void constructCar();
};
#endif