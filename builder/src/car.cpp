#include <car.h>

void car::setChasis(std::string chassis) {
    this->mChassis = chassis;
}
void car::setEngine(std::string engine) {
    this->mEngine = engine;
}
void car::setFrame(std::string frame) {
    this->mFrame = frame;
}
void car::setInterior(std::string interior) {
    this->mInterior = interior;
}

void car::getChasis() {
    std::cout << mChassis;
}

void car::getEngine() {
    std::cout << mEngine;
}

void car::getFrame() {
    std::cout << mFrame;
}

void car::getInterior() {
    std::cout << mInterior;
}