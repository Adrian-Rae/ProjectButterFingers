#ifndef SATURDAY_H
#define SATURDAY_H
#include "RaceState.h"

class Saturday : RaceState {


public:
	void handle();

	RaceState* nextState();
};

#endif
