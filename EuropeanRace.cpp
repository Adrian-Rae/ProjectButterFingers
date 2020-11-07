#include "EuropeanRace.h"
using namespace std;

EuropeanRace::EuropeanRace(string n,double d, int t):Race(n,d,t){
	cout << endl;
	cout<<"[New European race scheduled: "<<n<<", "<<d<<"km, "<<t<<" teams]"<<endl;
	this->raceId = numRaces; numRaces++;
	Race::euro = true;
}

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
	cout << "__________________________________________________________________________" << endl;
	cout << endl;
	cout << "\t[\tThe results of the race are:\t]" << endl;
	cout << "__________________________________________________________________________" << endl;
	cout << endl;
	for (int x = 0; x < numTeams; x++) {
		teams[x]->display();
	}

	return results;
}