#include "AfternoonQualifying.h"

using namespace std;

AfternoonQualifying::AfternoonQualifying(RaceState* s){
	setComponent(s);
}


void AfternoonQualifying::handle() {
	RaceDecorator::handle();
	this->addFunctionlity();
}

void AfternoonQualifying::addFunctionlity() {
	cout<<"Its afternoon its time to Qualify"<<endl;
}
