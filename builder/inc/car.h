#ifndef CAR_H
#define CAR_H
#include <carSchematic.h>

class car : public carSchematic {
private:
    std::string mChassis;
    std::string mEngine;
    std::string mFrame;
    std::string mInterior;
public:
    void setChasis(std::string);
    void setEngine(std::string);
    void setFrame(std::string);
    void setInterior(std::string);
};
#endif