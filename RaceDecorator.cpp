#include "RaceDecorator.h"

RaceDecorator::RaceDecorator(){
    component = nullptr;
}

void RaceDecorator::setComponent(RaceState* comp){
    component = comp;
}

RaceState* RaceDecorator::nextState()
{
    if (end())
        return component;
    else
        return component->nextState();
}

void RaceDecorator::handle(){
    component->handle();
}