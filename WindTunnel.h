#ifndef WINDTUNNEL_H
#define WINDTUNNEL_H

#include <random>

#include "SimulatorTest.h"

class WindTunnel: public SimulatorTest{
	public:
		WindTunnel(Car* car);
		int test();
};
#endif