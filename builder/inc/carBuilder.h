#ifndef CARBUILDER_H
#define CARBUILDER_H
#include <car.h>

class carBuilder {
public:
    virtual void buildEngine() = 0;
    virtual void buildChassis() = 0;
    virtual void buildFrame() = 0;
    virtual void buildInterior() = 0;
    virtual car* getCar() = 0;
};
#endif