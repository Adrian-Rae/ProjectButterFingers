#include "Race.h"

using namespace std;

int Race::numRaces=0;

Race::Race(){
	
}

Race::Race(string n, double d, int t){
	//HANDLES RACE CREATION
	raceName = n;
	trackLength = d;
	numTeams = t;
	teams = new Team*[t];
	teamCount = 0;
	Friday* friday = new Friday();
	MorningPractise* practise = new MorningPractise(friday);
	raceState = practise;
	euro = true;
}

Race::~Race(){
	delete [] this->teams;
}

bool Race::addTeam(Team* t){
	this->teams[teamCount++] = t;
	return true;
}


void Race::request(){
	//HANDLES CHANGING OF DAYS
	int conditions = rand() % 2;
	if (conditions == 2)
		conditions = -1;

	raceState->handle();

	for (int x = 0; x < teamCount; x++) {
		teams[x]->prepRace(euro, conditions);
	}

	raceState = raceState->nextState();
	raceState->handle();

	for (int x = 0; x < teamCount; x++) {
		teams[x]->race(trackLength);
	}

	raceState = raceState->nextState();
	raceState->handle();

	for (int x = 0; x < teamCount; x++) {
		teams[x]->race(trackLength);
	}
}

int* Race::startRace(){
	//HANDLES THE WHOLE RACE SIMULATION
	return nullptr;
}

RaceIterator* Race::createIterator(){
	//THIS IS THE DEFAULT FOR A RACE ITERATOR - ONLY THE CATELOGUE CHANGES THIS
	return 0;
}
