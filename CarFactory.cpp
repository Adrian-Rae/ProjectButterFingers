#include "CarFactory.h"

CarFactory::CarFactory():Factory(){
    
}

Car* CarFactory::buildCar(){
    //Put together all required car parts

    cout<<"Building a car at the factory"<<endl;
    bulidChasis();
    attachParts();
    Car* car = new FormulaOneCar();
    return car;
}

void CarFactory::bulidChasis(){
    cout<<"Putting together the car chassis"<<endl;
}

void CarFactory::attachParts(){
    cout<<"attaching parts"<<endl;
}