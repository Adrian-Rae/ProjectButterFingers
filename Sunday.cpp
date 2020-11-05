#include "Sunday.h"
#include "RaceState.h"

using namespace std;
Sunday::Sunday()
{
	Name="Sunday";
}
void Sunday::handle() {
	cout<<"Its Sunday! "<<endl;
}

RaceState* Sunday::nextState() {
	return nullptr;
}
