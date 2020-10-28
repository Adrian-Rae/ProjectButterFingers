#include "AfternoonQualifying.h"
AfternoonQualifying::AfternoonQualifying(RaceState* s)
{component=s;
	}


void AfternoonQualifying::handle() {
	component->handle();
	this->addFunctionlity();
}

void AfternoonQualifying::addFunctionlity() {
	cout<<"Its afternoon its time to Qualify"<<endl;
}
