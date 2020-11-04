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
		void test();
		virtual void TestF1Car() = 0;//name them something else
};
#endif