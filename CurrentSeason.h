#if !defined(CURRENTSEASON_H)
#define CURRENTSEASON_H

#include "ConcreteEngineer.h"

#include <string>
#include <iostream>

using namespace std;

class CurrentSeason: public ConcreteEngineer
{

	public:
		CurrentSeason();
		~CurrentSeason();
   		void work();

};

#endif // CurrentSeason_H
