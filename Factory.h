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
    virtual Car* buildCar()=0;
};

#endif