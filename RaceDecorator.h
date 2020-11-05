#ifndef RACEDECORATOR_H
#define RACEDECORATOR_H
#include "RaceState.h"

class RaceDecorator : public RaceState {

private:
	RaceState* component;

public:
	RaceDecorator();
	~RaceDecorator(){};

	virtual void handle();

	virtual void addFunctionlity() = 0;
	void setComponent(RaceState*);
	RaceState* nextState();
	bool end() { return false; };
};

#endif
