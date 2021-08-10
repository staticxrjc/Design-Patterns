#ifndef CHEAPFORDBUILDER_H
#define CHEAPFORDBUILDER_H
#include <carBuilder.h>
#include <car.h>
#include <string>

class cheapFordBuilder : public carBuilder {
public:
    cheapFordBuilder();
    ~cheapFordBuilder();

private:
    car* newCar;
    void buildFrame();
    void buildChassis();
    void buildEngine();
    void buildInterior();
    car* getCar();
};
#endif