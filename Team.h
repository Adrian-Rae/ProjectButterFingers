#ifndef TEAM_H
#define TEAM_H

#include <string>

#include "Staff.h"
#include "Car.h"
#include "Transporter.h"
#include "Test.h"
#include "WheelManufacturer.h"
#include "CarFactory.h"
#include "ConcreteEngineer.h"
#include "ConcreteStrategist.h"

using namespace std;

class Team
{
public:
	Team(WheelManufacturer*, int, string);
	~Team();

	void prepSeason();
	void prepRace();
	void race();

private:
	Staff** staff;
	ConcreteEngineer* leadEng;
	Staff* driver;
	Car* raceCar;
	Transporter* equipment;
	Test* testFacility;
	WheelManufacturer* manufacturer;
	int budget;
	string name;
	static int staffID;

	void addEng(int);
	void addStrat(int);
	void addAssist(int);
};

#endif