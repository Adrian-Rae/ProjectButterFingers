#include "Friday.h"

using namespace std;
Friday::Friday()
{
	Name="Friday";
}

void Friday::handle() {
	cout<<"Its Friday! "<<endl;
}

RaceState* Friday::nextState() {
	RaceState* state = new Saturday();
	return state;
}
