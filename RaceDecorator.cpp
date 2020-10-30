#include "RaceDecorator.h"

RaceDecorator::RaceDecorator(){
    component = nullptr;
}

void RaceDecorator::setComponent(RaceState* comp){
    component = comp;
}

void RaceDecorator::handle(){
    component->handle();
}