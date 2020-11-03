#ifndef CONCRETEENGINEER_H
#define CONCRETEENGINEER_H
#include "Engineer.h"

class ConcreteEngineer: public Engineer{
	public:
	ConcreteEngineer(string team, string name): Engineer(team, name){};
};
#endif