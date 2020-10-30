#ifndef RACECATELOGUE_H
#define RACECATELOGUE_H
#include "Race.h"
#include "RaceIterator.h"
using namespace std;


class RaceCatelogue : public Race {
private:
	Race** raceCatelogue;
	int maxRaces;
	int numRaces;
public:
	RaceCatelogue(int);
	~RaceCatelogue();
	bool addRace(Race*);
	RaceIterator* createIterator();
};

#endif
