#ifndef RACEDAY_H
#define RACEDAY_H
#include "RaceDecorator.h"
#include "RaceState.h"
#include <iostream>

class RaceDay : public RaceDecorator {


public:
	RaceDay(RaceState* s);
	void handle();

	void addFunctionlity();
};

#endif
