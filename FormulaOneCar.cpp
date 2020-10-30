#include "FormulaOneCar.h"

FormulaOneCar::FormulaOneCar():Car(){

}

Car* FormulaOneCar::getCar(){
    return this;
}

string FormulaOneCar::getCurrentTyres(){
    return "Soft"; //@ToDO - determine how to access tyre choice
}

void FormulaOneCar::displayCarInfo(){
    cout<<"Team name: "<<teamName<<endl;
    cout<<"Current Max Top Speed: "<<maxSpeed<<endl;
    cout<<"Wheel set currently fitted"<<getCurrentTyres()<<endl;
}
