#include "Friday.h"

using namespace std;
Friday::Friday()
{
	setState("Friday");
}

void Friday::handle() {
	cout<<"[ Friday ] "<<endl;
}

RaceState* Friday::nextState() {
	RaceState* state = new Saturday();
	MorningPractise* practise = new MorningPractise(state);
	AfternoonQualifying* qualifying = new AfternoonQualifying(practise);
	
	return qualifying;
}
