#include "Factory.h"

Factory::Factory(){
    car = NULL;
}

Factory::~Factory(){
    if(car!= NULL){
        delete[] car;
    }
    else{
        delete car;
    }
    car = NULL;

}