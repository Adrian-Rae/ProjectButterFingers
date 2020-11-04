#ifndef RACEBUILDER_H
#define RACEBUILDER_H

#include <iostream>
#include <random>

#include "Builder.h"
#include "RaceCatelogue.h"
#include "EuropeanRace.h"
#include "NonEuropeanRace.h"

class RaceBuilder: Builder{
public:
	RaceBuilder();
	bool build(int n, int teams);
	RaceCatelogue* getResult();
private:
	RaceCatelogue* head;
};

#endif