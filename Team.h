#ifndef TEAM_H
#define TEAM_H

#include <string>
#include <vector>
#include <random>

#include "Staff.h"
#include "Car.h"
#include "Transporter.h"
#include "Test.h"
#include "WheelManufacturer.h"
#include "Wheel.h"
#include "CarFactory.h"
#include "ConcreteEngineer.h"
#include "ConcreteStrategist.h"
#include "WindTunnel.h"
#include "European.h"
#include "NonEuropean.h"

using namespace std;

class Team
{
public:
	Team(WheelManufacturer* wm, int bud, string n, int races);
	~Team();

	void prepSeason();
	void prepRace(bool euro, int conditions);
	int race(int dist);
	void display();
	void setGarageEquipment(vector<string>);
	void setCateringEquipment(vector<string>);
	void setOtherEquipment(vector<string>);

	string getDriver() { return driver->getName(); };
	int getTime() { return currentTime; };

private:
	Staff** staff;
	ConcreteEngineer* leadEng;
	ConcreteStrategist* leadStrat;
	Staff* driver;

	Car* raceCar;

	Transporter* equipment;

	Test* testFacility;

	WheelManufacturer* manufacturer;

	int budget;
	string name;
	static int staffID;
	Wheel** wheels;
	int currentTime;
	int numRaces;

	vector<string> garageEquipment;
	vector<string> cateringEquipment;
	vector<string> otherEquipment;

	void addEng(int);
	void addStrat(int);
	void addAssist(int);
};

#endif