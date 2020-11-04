#include "Car.h"

Car::Car(){
    teamName = "Not Set";
    maxSpeed = 0;
}

void Car::setTeamName(string name){
    this->teamName = name;
}

string Car::getTeamName(){
    return teamName;
}

void Car::setMaxSpeed(int speed){
    this->maxSpeed = speed;
}

int Car::getMaxSpeed(){
    return maxSpeed;
}


