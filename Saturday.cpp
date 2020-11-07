#include "Saturday.h"

using namespace std;

Saturday::Saturday() {
	setState("Saturday");
}

void Saturday::handle() {
	cout<<"[ Saturday ] "<<endl;
}

RaceState* Saturday::nextState() {
	RaceState* state = new Sunday();
	RaceDay* race = new RaceDay(state);
	return race;
}
