#include "RaceDay.h"

using namespace std;

RaceDay::RaceDay(RaceState* s){
	setComponent(s);
}

void RaceDay::handle() {
	RaceDecorator::handle();
	addFunctionlity();
}

void RaceDay::addFunctionlity() {
	cout<<"< Race Day >"<<endl;
}
