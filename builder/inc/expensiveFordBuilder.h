#ifndef EXPENSIVEFORDBUILDER_H
#define EXPENSIVEFORDBUILDER_H
#include <carBuilder.h>
#include <car.h>
#include <string>

class expensiveFordBuilder : public carBuilder {
public:
    expensiveFordBuilder();
    ~expensiveFordBuilder();

private:
    car* newCar;
    void buildFrame();
    void buildChassis();
    void buildEngine();
    void buildInterior();
    car* getCar();
};
#endif