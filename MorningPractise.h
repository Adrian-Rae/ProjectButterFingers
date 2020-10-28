#ifndef MORNINGPRACTISE_H
#define MORNINGPRACTISE_H

class MorningPractise : RaceDecorator {


public:
	MorningPractise(RaceState* s);
	void handle();
	void addFunctionlity();
};

#endif
