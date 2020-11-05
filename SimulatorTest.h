#ifndef SIMULATORTEST_H
#define SIMULATORTEST_H
#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

class SimulatorTest{
	private:
		Car *testVehicle;
	public:
		SimulatorTest(Car* testCar);
		virtual int test() { return 0; };
		Car* getVehicle() { return testVehicle; };
};
#endif