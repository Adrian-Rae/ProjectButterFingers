#if !defined(MediumWheel_H)
#define MediumWheel_H

#include "Wheel.h"

#include <string>
#include <iostream>

using namespace std;

class MediumWheel: public Wheel
{

	public:
		MediumWheel(string type);
		~MediumWheel();
   		MediumWheel* clone();

};

#endif // MediumWheel_H
