#ifndef FRIDAY_H
#define FRIDAY_H
#include "RaceState.h"
#include <iostream>
#include "Saturday.h"

class Friday : RaceState {


public:
	Friday(){};
	~Friday(){};
	void handle();
	RaceState* nextState();
};

#endif
