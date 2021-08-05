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
    virtual void buildEngine(std::string) = 0;
    virtual void buildChasis(std::string) = 0;
    virtual void buildFrame(std::string) = 0;
    virtual void buildInterior(std::string) = 0;
};
#endif