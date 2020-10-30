#include "RaceIterator.h"
#include "Iterator.cpp"
using namespace std;

RaceIterator::RaceIterator(Race** r, int n) : Iterator(r,n) {
	this->index = 0;
}

Race* RaceIterator::first() {
	this->index=0;
	return array.first();
}

Race* RaceIterator::next() {
	if(isDone()) return NULL;
	return array.at(this->index++);
}

boolean RaceIterator::isDone() {
	return (this->index+1==array.size());
}

Race* RaceIterator::currentItem() {
	return array.at(this->index);
}
