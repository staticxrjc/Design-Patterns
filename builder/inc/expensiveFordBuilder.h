#ifndef EXPENSIVEFORDBUILDER_H
#define EXPENSIVEFORDBUILDER_H
#include <carBuilder>

class expensiveFordBuilder : public carBuilder {
    void buildFrame(std::string);
    void buildChassis(std::string);
    void buildEngine(std::string);
    void buildInterior(std::string);
};
#endif