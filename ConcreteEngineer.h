#ifndef CONCRETEENGINEER_H
#define CONCRETENGINEER_H
#include "Engineer.h"
#include "ConcreteStrategist.h"

class ConcreteEngineer: public Engineer{
	public:
		ConcreteEngineer(Test* tester);
		void notify();
		int attach(ConcreteStrategist* strat);
		void detach(int index);
		virtual void work() =0;
		virtual void identify();
};
#endif