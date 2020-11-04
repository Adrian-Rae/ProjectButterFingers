#ifndef NONEUROPEANRACE_H
#define NONEUROPEANRACE_H
#include "Race.h"
#include <iostream>
using namespace std;

class NonEuropeanRace : public Race {

public:
	NonEuropeanRace(string,double,int);
	~NonEuropeanRace();
	int* startRace();
};

#endif
