#ifndef SUNDAY_H
#define SUNDAY_H
#include "RaceState.h"

class Sunday : RaceState {


public:
	void handle();
	RaceState* nextState();
};

#endif
