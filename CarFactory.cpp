#include "CarFactory.h"

CarFactory::CarFactory():Factory(){
    
}

Car* CarFactory::buildCar(){
    //Put together all required car parts

    cout<<"\t\t< Building a car at the factory >"<<endl;
    bulidChasis();
    attachParts();
    Car* car = new FormulaOneCar();
    return car;
}

void CarFactory::bulidChasis(){
    cout<<"\t\t< Putting together the car chassis >"<<endl;
}

void CarFactory::attachParts(){
    cout<<"\t\t< attaching parts >"<<endl;
}