#ifndef COMPUTERSOFTWARE_H
#define COMPUTERSOFTWARE_H
#include "SimulatorTest.h"

class ComputerSoftware: public SimulatorTest{
	public:
		ComputerSoftware(Car* car);
		int test();
};
#endif