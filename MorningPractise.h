#ifndef MORNINGPRACTISE_H
#define MORNINGPRACTISE_H
#include "RaceDecorator.h"
#include "RaceState.h"
#include <iostream>

class MorningPractise : public RaceDecorator {


public:
	MorningPractise(RaceState* s);
	void handle();
	void addFunctionlity();
};

#endif
