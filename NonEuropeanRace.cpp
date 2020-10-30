#include "NonEuropeanRace.h"
using namespace std;

NonEuropeanRace::NonEuropeanRace(string n,double d, int t):Race(n,d,t){this->raceId = numRaces; numRaces++;}

NonEuropeanRace::~NonEuropeanRace(){numRaces--;}