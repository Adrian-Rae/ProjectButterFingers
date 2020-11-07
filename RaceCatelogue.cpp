#include "RaceCatelogue.h"
using namespace std;

RaceCatelogue::RaceCatelogue(int n):Race(){
	cout << endl;
	cout<<"[New race roster created]"<<endl;
	this->numRaces = 0;
	this->maxRaces = n;
	this->raceCatelogue = new Race*[n];
}

RaceCatelogue::~RaceCatelogue(){
	delete [] this->raceCatelogue;
}

bool RaceCatelogue::addRace(Race* r){
	bool success = (this->numRaces<this->maxRaces);
	if(success){
		cout<<"[Successfully added "<<r->raceName<<" to the roster as race: "<<this->numRaces+1<<"]"<<endl;
		cout << endl;
		this->raceCatelogue[this->numRaces++] = r;
		return success;
	}
	cout<<"[Failed to add "<<r->raceName<<" to the roster]"<<endl;
	return false;
}

RaceIterator* RaceCatelogue::createIterator() {
	return new RaceIterator(this->raceCatelogue, this->numRaces); 
}


