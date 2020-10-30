#ifndef RACEITERATOR_H
#define RACEITERATOR_H
#include "Iterator.h"
#include "Aggregate.h"
using namespace std;

class Race; //FORWARD DEC PREVENTS CIRCULAR REFERENCE

class RaceIterator : public Iterator {
public:
	RaceIterator(Aggregate**, int);
	Aggregate* first();
	Aggregate* next();
	bool isDone();
	Aggregate* currentItem();
};

#endif
