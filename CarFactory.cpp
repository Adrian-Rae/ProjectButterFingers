#include "CarFactory.h"

CarFactory::CarFactory():Factory(){
    
}

Car* CarFactory::buildCar(){
    //Put together all required car parts

    cout<<"Building the car, with fitted parts, engine and other aero stuff"<<endl;
    bulidChasis();
    attachParts();
    return this->car;
}

void CarFactory::bulidChasis(){
    cout<<"Putting together the car chassis"<<endl;
}

void CarFactory::attachParts(){
    cout<<"Putting in all the screws and attaching parts"<<endl;
}