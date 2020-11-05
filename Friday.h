#ifndef FRIDAY_H
#define FRIDAY_H
#include "RaceState.h"
#include <iostream>
#include "Saturday.h"
#include "MorningPractise.h"
#include "AfternoonQualifying.h"

class Friday : public RaceState {


public:
	Friday();
	~Friday(){};
	void handle();
	RaceState* nextState();
	bool end() { return true; };
};

#endif
