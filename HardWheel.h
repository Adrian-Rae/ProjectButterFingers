#if !defined(HARDWHEEL_H)
#define HARDWHEEL_H

#include "Wheel.h"

#include <string>
#include <iostream>

using namespace std;

class HardWheel: public Wheel
{

	public:
		HardWheel(string type);
		~HardWheel();
   		HardWheel* clone();

};

#endif // HardWheel_H
