#ifndef FRIDAY_H
#define FRIDAY_H
#include "RaceState.h"


class Friday : RaceState {


public:
	void handle();

	RaceState* nextState();
};

#endif
