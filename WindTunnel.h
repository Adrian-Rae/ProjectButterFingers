#ifndef WINDTUNNEL_H
#define WINDTUNNEL_H
#include "SimulatorTest.h"

class WindTunnel: public SimulatorTest{
	private:
		int token = 400;;
	public:
		WindTunnel(Car* car);
		void TestF1Car();
		int getToken(int num);
};
#endif