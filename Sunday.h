#ifndef SUNDAY_H
#define SUNDAY_H
#include "RaceState.h"
#include <iostream>

class Sunday : public RaceState {


public:
	Sunday() {};
	~Sunday() {};
	void handle();
	RaceState* nextState();
	bool end() { return true; };
};

#endif
