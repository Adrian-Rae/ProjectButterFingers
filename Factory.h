#pragma once
#ifndef FACTORY_H
#define FACTORY_H
#include "Car.h"

using namespace std;

class Factory{
protected: 
    Car* car;

public:
    Factory();
    ~Factory();
    //void bulidChasis(); //virtual??
    //void attachParts(); //virtual??
    //virtual void fitWheels(); //virtual??
    virtual Car* buildCar()=0;
};

#endif // FACTORY_H