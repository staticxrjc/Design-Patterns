#ifndef CHEAPFORDBUILDER_H
#define CHEAPFORDBUILDER_H
#include <carBuilder>

class cheapFordBuilder : public carBuilder {
    void buildFrame(std::string);
    void buildChassis(std::string);
    void buildEngine(std::string);
    void buildInterior(std::string);
};
#endif