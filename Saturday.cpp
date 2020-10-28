#include "Saturday.h"
#include "Sunday.h"
#include "RaceState.h"
void Saturday::handle() {
	cout<<"Its Saturday! "<<endl;
}

RaceState* Saturday::nextState() {
	Sunday* state=new Sunday();
	return state;
}
