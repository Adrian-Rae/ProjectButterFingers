#include "NonEuropeanRace.h"
using namespace std;

NonEuropeanRace::NonEuropeanRace(string n,double d, int t):Race(n,d,t){
	cout<<"[New non-European race scheduled: "<<n<<", "<<d<<"km, "<<t<<" teams]"<<endl;
	this->raceId = numRaces; numRaces++;
}

NonEuropeanRace::~NonEuropeanRace(){numRaces--;}