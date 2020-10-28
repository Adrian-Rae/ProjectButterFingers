#ifndef RACEDECORATOR_H
#define RACEDECORATOR_H
#include "RaceState.h"

class RaceDecorator : RaceState {

public:
	RaceState* component;

	virtual void handle() = 0;

	virtual void addFunctionlity() = 0;
};

#endif
