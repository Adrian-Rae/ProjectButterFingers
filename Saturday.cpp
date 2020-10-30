#include "Saturday.h"

using namespace std;

void Saturday::handle() {
	cout<<"Its Saturday! "<<endl;
}

RaceState* Saturday::nextState() {
	RaceState* state = new Sunday();
	return state;
}
