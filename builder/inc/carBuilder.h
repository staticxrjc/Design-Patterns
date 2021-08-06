#ifndef CARBUILDER_H
#define CARBUILDER_H

class carBuilder {
public:
    virtual void buildEngine() = 0;
    virtual void buildChassis() = 0;
    virtual void buildFrame() = 0;
    virtual void buildInterior() = 0;
};
#endif