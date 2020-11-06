#ifndef RACEMANAGER_H
#define RACEMANAGER_H
#include "RaceBuilder.h"
#include "RaceCatelogue.h"
#include "RaceIterator.h"

class RaceManager{
public:
	void display(int** standings, int num);
	int** sortResults(int* list, int** sort, int num);
	int** sortResults(int** sort, int num);
	int** givePoints(int** list, int** points, int num);
};

#endif

