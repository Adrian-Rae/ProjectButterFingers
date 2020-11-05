#ifndef RACESTATE_H
#define RACESTATE_H

class RaceState {

private: 
	String Name;
public:
	RaceState(){};
	~RaceState(){};
	virtual void handle()=0;
	virtual RaceState* nextState()=0;
	String getState();
	void setState(string);
	
};

#endif
