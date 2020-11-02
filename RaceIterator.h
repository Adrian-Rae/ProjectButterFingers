#ifndef RACEITERATOR_H
#define RACEITERATOR_H
#include "Iterator.h"
#include <vector>
using namespace std;

class Race;

class RaceIterator : public Iterator {
private:
	vector<Race*> array;
	int index;
public:
	RaceIterator(Race**, int);
	Race* first();
	Race* next();
	bool isDone();
	Race* currentItem();
};

#endif
