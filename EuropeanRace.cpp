#include "EuropeanRace.h"
using namespace std;

EuropeanRace::EuropeanRace(string n,double d, int t):Race(n,d,t){
	cout<<"[New European race scheduled: "<<n<<", "<<d<<"km, "<<t<<" teams]"<<endl;
	this->raceId = numRaces; numRaces++;}

EuropeanRace::~EuropeanRace(){numRaces--;}

int* EuropeanRace::startRace() {
	int* results = new int[numTeams];
	for (int x = 0; x < numTeams; x++) {
		int conditions = rand() % 2;
		if (conditions == 2)
			conditions = -1;
		teams[x]->prepRace(true, conditions);
	}
	for (int x = 0; x < numTeams; x++) {
		results[x] = teams[x]->race(trackLength);
	}
	cout << "The results of the race are: " << endl;
	for (int x = 0; x < numTeams; x++) {
		teams[x]->display();
	}

	return results;
}