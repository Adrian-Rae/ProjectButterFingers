#include "RaceDay.h"
RaceDay::RaceDay(RaceState* s)
{component=s;
	}



void RaceDay::handle() {
	component->handle();
	this->addFunctionlity();
}

void RaceDay::addFunctionlity() {
	cout<<"Time to race!"<<endl;
}
