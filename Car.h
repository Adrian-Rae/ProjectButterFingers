#pragma once
#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>
using namespace std;

class Car{
protected:
    int maxSpeed; //Maximum speed the car can reach
    bool tyresFitted; 
    int aeroDynamics; //A number between 0 and 100, which signifies how good or bad the car's aerodynamics are
    string teamName;
    bool needsImprovements; //Using a certain matric this can be set to true or false
    bool tyreChangeNeeded;
    virtual void displayCarInfo()=0;
    //Wheel wheels; //used for car wheel choice @ToDo
    //Chasis
    //Engine
    //Aerodynamics
    
    //carParts

public:
    Car();
    //virtual ~Car();
    virtual void setMaxSpeed(int);
    virtual void setTeamName(string);
   // virtual void addWheels(); //Should return Wheels object @ToDo
    //virtual Car* getCar();
    string getTeamName();
    int getMaxSpeed();
    string getCurrentTyres(); //Not sure about the return type @ToDo

};

#endif CAR_H