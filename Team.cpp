#include "Team.h"

Team::Team(WheelManufacturer* wm, int bud, string n){
	manufacturer = wm;
	budget = bud;
	name = n;
	staffID = 1;
	
	driver = new Staff(name, to_string(staffID), "Driver");
	staffID++;

	CarFactory* fact = new CarFactory();

	raceCar = fact->buildCar();

	equipment = nullptr;
	testFacility = new Test();

	switch (budget) {
	case 1:
		staff = new Staff * [4];
		addEng(2);
		addStrat(1);
		break;
	case 2:
		staff = new Staff * [5];
		addEng(2);
		addStrat(2);
		break;
	case 3:
		staff = new Staff * [8];
		addEng(4);
		addStrat(2);
		addAssist(1);
		break;
	case 4:
		staff = new Staff * [13];
		addEng(6);
		addStrat(4);
		addAssist(2);
		break;
	}

	staff[0] = driver;
}

Team::~Team(){
	for (int x = 0; x < sizeof(staff); x++){
		delete staff[x];
	}
	delete[] staff;

	delete testFacility;
	delete raceCar;
	delete equipment;

	leadEng = nullptr;
	driver = nullptr;
	manufacturer = nullptr;
}


void Team::prepSeason() {

}
void Team::prepRace() {

}
void Team::race() {

}
void Team::addEng(int n) {
	ConcreteEngineer* lead = new ConcreteEngineer(name, to_string(staffID));
	staffID++;
	leadEng = lead;
	for (int x = 1; x < n; x++) {
		ConcreteEngineer* e = new ConcreteEngineer(name, to_string(staffID));
		staff[staffID - 1] = e;
		staffID++;
	}
}
void Team::addStrat(int n) {
	for (int x = 0; x < n; x++) {
		ConcreteStrategist* cs = new ConcreteStrategist(leadEng, manufacturer);
		staff[staffID - 1] = cs;
		staffID++;
	}
}
void Team::addAssist(int n) {
	for (int x = 0; x < n; x++) {
		Staff* s = new Staff(name, to_string(staffID), "Assistant");
		staff[staffID - 1] = s;
		staffID++;
	}
}