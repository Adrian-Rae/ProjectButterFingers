#ifndef ITERATOR_H
#define ITERATOR_H
#include "Aggregate.h"
#include <vector>
using namespace std;

class Aggregate; //FORWARD DEC PREVENTS CIRCULAR REFERENCE


class Iterator {
private:
	vector<Aggregate*> array;
public:
	Iterator(Aggregate*, int);
	virtual Aggregate* first() = 0;
	virtual Aggregate* next() = 0;
	virtual bool isDone() = 0;
	virtual Aggregate* currentItem() = 0;
};

#endif
