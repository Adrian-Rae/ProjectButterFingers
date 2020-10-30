#ifndef SUNDAY_H
#define SUNDAY_H
#include "RaceState.h"
#include <iostream>

class Sunday : public RaceState {


public:
	void handle();
	RaceState* nextState();
};

#endif
