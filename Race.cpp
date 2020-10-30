#include "Race.h"
using namespace std;

Race::Race(string n, double d, int t){
	//HANDLES RACE CREATION
	this->raceName = n;
	this->trackLength = d;
	this->numTeams = t;
	//this->teams = new Team*[t];
	this->teamCount = 0;
}

Race::~Race(){
	//delete [] this->teams;
}

/*	TODO migrate with other classes
bool Race::addTeam(Team* t){
	this->teams[teamCount++] = t;
}
*/

void Race::request(){
	//HANDLES CHANGING OF DAYS
	this->raceState->handle();
}

void Race::startRace(){
	//HANDLES THE WHOLE RACE SIMULATION
}

RaceIterator* Race::createIterator(){
	//THIS IS THE DEFAULT FOR A RACE ITERATOR - ONLY THE CATELOGUE CHANGES THIS
	return 0;
}
