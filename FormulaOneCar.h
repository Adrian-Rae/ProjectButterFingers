#pragma once
#ifndef FORMULAONECAR_H
#define FORMULAONECAR_H
#include "Car.h"

using namespace std;

class FormulaOneCar:public Car
{
private:

public:
    FormulaOneCar();
    //~FormulaOneCar();
    Car* getCar();
    void displayCarInfo();
    string getCurrentTyres();
};


#endif