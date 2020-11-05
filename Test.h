#ifndef TEST_H
#define TEST_H
#include <iostream>
#include "SimulatorTest.h"
#include "WindTunnel.h"
#include "ComputerSoftware.h"
#include "Car.h"

class Test{
	private:
		Car* raceCar;
		int tokens;
		int races;
		bool newRace;
		static int num;
	public:
		Test(Car* car, int n, int to = 500);
		int runTest();
		void resetRace() { newRace = true; num++; };
		void setNew(bool t) { newRace = t; };
		bool getNew() { return newRace; };
};
#endif