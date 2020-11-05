#include "Saturday.h"

using namespace std;

void Saturday::handle() {
	cout<<"Its Saturday! "<<endl;
}

RaceState* Saturday::nextState() {
	RaceState* state = new Sunday();
	RaceDay* race = new RaceDay(state);
	return race;
}
