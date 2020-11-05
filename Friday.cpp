#include "Friday.h"

using namespace std;

void Friday::handle() {
	cout<<"Its Friday! "<<endl;
}

RaceState* Friday::nextState() {
	RaceState* state = new Saturday();
	MorningPractise* practise = new MorningPractise(state);
	AfternoonQualifying* qualifying = new AfternoonQualifying(practise);
	
	return qualifying;
}
