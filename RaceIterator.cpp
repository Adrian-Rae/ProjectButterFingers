#include "RaceIterator.h"
#include "Race.h"
using namespace std;


RaceIterator::RaceIterator(Race** r, int n){
	for(int i=0; i<n; i++){this->array.push_back(r[i]);}
}

Race* RaceIterator::first() {
	this->index=0;
	return array.front();
}

Race* RaceIterator::next() {
	if(isDone()) return NULL;
	else if(this->index+1==array.size()){ this->index++; return NULL;}
	return array.at(++this->index);
}

bool RaceIterator::isDone() {
	return (this->index==array.size());
}

Race* RaceIterator::currentItem() {
	if(this->index==array.size()) return NULL;
	return array.at(this->index);
}
