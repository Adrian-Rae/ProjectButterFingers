#ifndef STRATEGIST_H
#define STRATEGIST_H
#include <iostream>
#include "Engineer.h"
#include "Wheel.h"
#include "WheelManufacturer.h"

class Strategist: public Staff{
	private:
		int currentResults;
	public:
		int raceList;
		//the functions:
		Strategist();
		virtual void update() = 0;
		virtual void identify();
		int getCurrentResults();
		void setCurrentResults(int result);
};
#endif