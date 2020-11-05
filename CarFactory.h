#pragma once
#ifndef CARFACTORY_H
#define CARFACTORY_H
#include "Factory.h"
#include "FormulaOneCar.h"
#include <iostream>

using namespace std;

class CarFactory : public Factory{

public:
    CarFactory();
    virtual Car *buildCar();
    void bulidChasis(); 
    void attachParts();
};

#endif //CARFACTORY_H