#ifndef SoftWheel_H
#define SoftWheel_H

#include "Wheel.h"

#include <string>
#include <iostream>

using namespace std;

class SoftWheel: public Wheel
{

	public:
		SoftWheel(string type);
		~SoftWheel();
   		SoftWheel* clone();

};

#endif // SoftWheel_H