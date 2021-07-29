#pragma once
#include <string>
#include <iostream>

class spaceship {
private:
    int mSpeed;
    std::string mName;
    
public:
    int getSpeed();
    std::string getName();
    void setSpeed(int);
    void setName(std::string);
    virtual void getType() = 0;
};
