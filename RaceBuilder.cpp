#include "RaceBuilder.h"

RaceBuilder::RaceBuilder() {
	head = nullptr;
}
bool RaceBuilder::build(int n, int teams) {
	if (n > 0) {
		cout << "A new season of games is being built : " << endl;
		RaceCatelogue* catelouge = new RaceCatelogue(n);
		for (int x = 0; x < n; x++) {
			int euro = rand() % 2 + 1;
			int dist = (rand() % 8) + 4;
			if (euro == 1) {
				Race* race = new EuropeanRace(to_string(x), dist, teams);
				catelouge->addRace(race);
			}
			else {
				Race* race = new NonEuropeanRace(to_string(x), dist, teams);
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