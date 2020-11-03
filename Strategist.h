#ifndef STRATEGIST_H
#define STRATEGIST_H
#include <iostream>
#include "Engineer.h"
#include "Wheel.h"
#include "WheelManufacturer.h"
#include "Staff.h"
#include <vector>

using namespace std;

class Strategist: public Staff{
	private:
		int currentResults;
	public:
		vector<int> raceList;
		//the functions:
		Strategist();
		virtual void update() = 0;
		virtual void identify() = 0;
        void setResults(int n){currentResults = n;};
        int getResults(){return currentResults;};
};
#endif