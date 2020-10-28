#include "Friday.h"
#include "RaceState.h"

void Friday::handle() {
	cout<<"Its Friday! "<<endl;
}

RaceState* Friday::nextState() {
	Saturday* state=new Saturday();
	return state;
}
