#include "RaceCatelogue.h"
using namespace std;

RaceCatelogue::RaceCatelogue(int n){
	this->numRaces = 0;
	this->maxRaces = n;
	this->raceCatelogue = new RaceCatelogue*[n];
}

RaceCatelogue::~RaceCatelogue(){
	delete [] this->raceCatelogue;
}

bool RaceCatelogue::addRace(Race* r){
	return ((this->numRaces==this->maxRaces)?false:(this->raceCatelogue[this->numRaces++] = r));
}

RaceIterator* RaceCatelogue::createIterator() {
	return new RaceIterator(this->RaceCatelogue, this->numRaces); 
}


