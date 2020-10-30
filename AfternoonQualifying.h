#ifndef AFTERNOONQUALIFYING_H
#define AFTERNOONQUALIFYING_H
#include "RaceState.h"
#include "RaceDecorator.h"
#include <iostream>

class AfternoonQualifying : public RaceDecorator {


public:
	AfternoonQualifying(RaceState* s);
	void handle();

	void addFunctionlity();
};

#endif
