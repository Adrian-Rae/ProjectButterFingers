#ifndef CONCRETEENGINEER_H
#define CONCRETEENGINEER_H

#include <string>

#include "Engineer.h"

class ConcreteStrategist;

class ConcreteEngineer : public Engineer {
public:
	ConcreteEngineer(std::string n, std::string t, Test* tester) : Engineer(n, t, tester) {};

	void notify();

	int attach(Strategist* strat);
	void detach(int index);

	void work();
	void identify();

	void newRace() { getTest()->resetRace(); };
};

#endif 

