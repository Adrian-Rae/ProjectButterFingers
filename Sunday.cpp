#include "Sunday.h"
#include "RaceState.h"

using namespace std;

void Sunday::handle() {
	cout<<"Its Sunday! "<<endl;
}

RaceState* Sunday::nextState() {
	return nullptr;
}
