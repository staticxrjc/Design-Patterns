#ifndef CAR_H
#define CAR_H
#include <carSchematic.h>

class car : public carSchematic {
private:
    std::string mChassis;
public:
    void buildChasis(std::string);
    void buildEngine(std::string);
    void buildFrame(std::string);
    void buildInterior(std::string);
};
#endif