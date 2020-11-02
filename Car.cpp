#include "Car.h"

Car::Car(){
    teamName = "ButterFingers";
    maxSpeed = 100;
    tyresFitted = false;
    tyreChangeNeeded = false;
    needsImprovements = false;
    //wheels = NULL;
    aeroDynamics = 50;
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

string Car::getCurrentTyres(){ //string or vector ??
    return "";
    //return wheels->;
}

