#ifndef RACE_H
#define RACE_H
#include "RaceState.h"
#include "Aggregate.h"
#include "RaceIterator.h"
#include "RaceDecorator.h"
#include <string>
#include "Team.h" /*COMBINE WITH OTHER CLASSES*/
using namespace std;

class Race : public Aggregate {
private:
	int teamCount;
protected:
	RaceState* raceState;		//handles what stage of race is being conducted
	Team** teams;		/*COMBINE WITH OTHER CLASSES*/
public:
	static int numRaces;	//keeps track of how many races have been created - only E and NE races update this
	string raceName;		//Name of the track
	double trackLength;		//Length of track - kilometres
	int raceId;				//id of the race - is function of numRaces
	int numTeams;			//number of teams participating in the race

	Race();						//generator for catelogue
	Race(string,double,int);	//initialises race
	~Race();

	bool addTeam(Team*);	/*COMBINE WITH OTHER CLASSES*/
	void request();			//handles state changes, will rely upon decorator
	void startRace();


	virtual RaceIterator* createIterator();
};

#endif
