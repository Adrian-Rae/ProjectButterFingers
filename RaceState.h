#ifndef RACESTATE_H
#define RACESTATE_H

#include <string>

class RaceState {

private: 
	std::string name;
public:
	RaceState(){};
	~RaceState(){};
	virtual void handle()=0;
	virtual RaceState* nextState()=0;
	virtual bool end() = 0;
	std::string getState() { return name; };
	void setState(std::string n) { name = n; };
	
};

#endif
