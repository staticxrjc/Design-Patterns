#ifndef CARSCHEMATIC_H
#define CARSCHEMATIC_H
#include <string>

class carSchematic {
public:
    virtual void setEngine(std::string) = 0;
    virtual void setChasis(std::string) = 0;
    virtual void setFrame(std::string) = 0;
    virtual void setInterior(std::string) = 0;
};
#endif