#include "Test.h"

int Test::num = 0;

Test::Test(Car* car, int n, int to) {
	raceCar = car;
	tokens = to;
	races = n;
	newRace = true;
}

int Test::runTest(){
	if (getNew()) {
		setNew(false);
		num = 0;
	}

	int results = 0;
	if (num <= tokens / races) {
		SimulatorTest* sim = new WindTunnel(raceCar);
		results = sim->test();
	}
	else {
		SimulatorTest* sim = new ComputerSoftware(raceCar);
		results = sim->test();
	}

	num++;
	return results;
}
