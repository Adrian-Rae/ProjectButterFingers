#include "Engineer.h"

////////////////////////////////////////////////////////////////////////////
Engineer::Engineer(Test* tester)
{//DONE
	testing = tester;
	results = 0;//nothing for now...-1: soft 0: medium and 1: hard
	successor = NULL;
	setName("Engineer");//make sure these are correct
	setTeam("Engineer team");
	setType("Testing Engineer");
}
Engineer::~Engineer()
{//DONE
	if(testing != NULL){
		delete testing;
		testing = NULL;
	}
	if(successor != NULL){
		delete successor;
		successor = NULL;
	}
	//delete the strategist stuff too
}
////////////////////////////////////////////////////////////////////////////
int Engineer::getState()
{
	return results;
}

void Engineer::setState(int state)
{
	this->results = state;
}

void Engineer::handelRequest(int state)
{
	if(successor == NULL){
		setState(state);
		this->testing->notify();
	}
	else{
		this->successor->handleRequest(state);
	}
}

void Engineer::identify()
{
	cout<<"I am staffmember "<<getName()<<" in team "<<getTeam()<<"and I work as an "<<getType()<<endl;
}

void Engineer::setSuccessor(Engineer *boss){
	this->successor = boss;
}
////////////////////////////////////////////////////////////////////////////
