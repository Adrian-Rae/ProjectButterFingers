#include "Sunday.h"
#include "RaceState.h"

void Sunday::handle() {
	cout<<"Its Sunday! "<<endl;
}

RaceState* Sunday::nextState() {
	return null;
}
