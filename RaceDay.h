#ifndef RACEDAY_H
#define RACEDAY_H

class RaceDay : RaceDecorator {


public:
	RaceDay(RaceState* s);
	void handle();

	void addFunctionlity();
};

#endif
