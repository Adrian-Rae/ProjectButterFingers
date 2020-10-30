#include "Friday.h"

using namespace std;

void Friday::handle() {
	cout<<"Its Friday! "<<endl;
}

RaceState* Friday::nextState() {
	RaceState* state = new Saturday();
	return state;
}
