#include "RaceBuilder.h"

RaceBuilder::RaceBuilder() {
	head = nullptr;
	manufacturer = nullptr;
}

RaceBuilder::~RaceBuilder() {
	delete manufacturer;
}

bool RaceBuilder::build(int n, int teams) {
	if (n > 0) {
		cout << "A new season of games is being built : " << endl;

		RaceCatelogue* catelouge = new RaceCatelogue(n);
		Team** team = new Team* [teams];
		manufacturer = new WheelManufacturer();

		for (int y = 0; y < teams; y++) {
			team[y] = new Team(manufacturer, rand()%4 + 1, to_string(y+1), n);
		}

		for (int x = 0; x < n; x++) {
			int euro = rand() % 2 + 1;
			int dist = (rand() % 8) + 4;

			if (euro == 1) {
				Race* race = new EuropeanRace(to_string(x+1), dist, teams);
				for (int y = 0; y < teams; y++) {
					race->addTeam(team[y]);
				}
				catelouge->addRace(race);
			}
			else {
				Race* race = new NonEuropeanRace(to_string(x+1), dist, teams);
				for (int y = 0; y < teams; y++) {
					race->addTeam(team[y]);
				}
				catelouge->addRace(race);
			}
		}
		head = catelouge;

		return true;
	}
	else
		return false;
}
RaceCatelogue* RaceBuilder::getResult() {
	return head;
}