#ifndef TEST_H
#define TEST_H
#include <iostream>
#include "SimulatorTest.h"
using namespace std;

class Test{
	private:
		SimulatorTest* simulator;
	public:
		Test(SimulatorTest* test);
		void runTest();
};
#endif