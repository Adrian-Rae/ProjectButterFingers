#ifndef RACESTATE_H
#define RACESTATE_H

class RaceState {


public:
	RaceState(){};
	~RaceState(){};
	virtual void handle()=0;
	virtual RaceState* nextState()=0;
	
};

#endif
