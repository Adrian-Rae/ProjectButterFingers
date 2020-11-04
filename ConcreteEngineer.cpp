#include "ConcreteEngineer.h"

ConcreteEngineer::ConcreteEngineer(Test* tester):Engineer(tester){
	//nothing for now
	setName("Engineer");//make sure these are correct
	setTeam("Engineer team");
	setType("Testing Engineer");
}

void ConcreteEngineer::notify(){
	for(int i = 0; i< getObservers().size(); i++){
		getObservers()[i]->update();
	}
}

int ConcreteEngineer::attach(ConcreteStrategist* strat){
	getObservers().push_back(strat);
}

void ConcreteEngineer::detach(int index){
	getObservers().erase(getObservers().begin() + index);
}

void ConcreteEngineer::identify()
{
	Staff::Identify();
}