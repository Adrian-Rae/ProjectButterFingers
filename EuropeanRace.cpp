#include "EuropeanRace.h"
using namespace std;

EuropeanRace::EuropeanRace(string n,double d, int t):Race(n,d,t){
	cout<<"[New European race scheduled: "<<n<<", "<<d<<"km, "<<t<<" teams]"<<endl;
	this->raceId = numRaces; numRaces++;}

EuropeanRace::~EuropeanRace(){numRaces--;}

int* EuropeanRace::startRace() {

}