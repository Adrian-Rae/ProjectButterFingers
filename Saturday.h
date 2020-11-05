#ifndef SATURDAY_H
#define SATURDAY_H
#include "RaceState.h"
#include "Sunday.h"
#include "RaceDay.h"
#include <iostream>

class Saturday : public RaceState {


public:
	Saturday();
	~Saturday(){};
	void handle();
	RaceState* nextState();
	bool end() { return true; };
};

#endif
