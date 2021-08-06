#ifndef CARSCHEMATIC_H
#define CARSCHEMATIC_H
#include <string>

class carSchematic {
private:
    std::string mEngine;
    std::string mChasis;
    std::string mFrame;
    std::string mInterior;
public:
    virtual void setEngine(std::string) = 0;
    virtual void setChasis(std::string) = 0;
    virtual void setFrame(std::string) = 0;
    virtual void setInterior(std::string) = 0;
};
#endif