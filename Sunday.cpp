#include "Sunday.h"
#include "RaceState.h"

using namespace std;
Sunday::Sunday()
{
	setState("Sunday");
}
void Sunday::handle() {
	cout<<"[ Sunday ] "<<endl;
}

RaceState* Sunday::nextState() {
	return nullptr;
}
