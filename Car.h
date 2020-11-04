#pragma once
#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>
using namespace std;

class Car{
protected:
    int maxSpeed; //Maximum speed the car can reach
    string teamName;
    virtual void displayCarInfo()=0;


public:
    Car();
    virtual ~Car() {};
    virtual void setMaxSpeed(int);
    virtual void setTeamName(string);
    string getTeamName();
    int getMaxSpeed();
};

#endif CAR_H