#include "ConcreteEngineer.h"

void ConcreteEngineer::notify() {
	for (Strategist* itr : getObservers()) {
		itr->update();
	}
}

int ConcreteEngineer::attach(Strategist* strat) {
	getObservers().push_back(strat);
	return getObservers().size() - 1;
}
void ConcreteEngineer::detach(int index) {
	getObservers().erase(getObservers().begin() + index);
}

void ConcreteEngineer::work() {
	Engineer::work();
}
void ConcreteEngineer::identify() {
	Engineer::identify();
	if (!hasSuccessor())
		cout << "I am the lead engineer" << endl;
}