#include "Team.h"

int Team::staffID = 1;

Team::Team(WheelManufacturer* wm, int bud, string n, int races){
	manufacturer = wm;
	budget = bud;
	name = n;
	currentTime = 0;
	numRaces = races;

	vector<string> ge{"Tools","Spare Parts","Fuel"};
	vector<string> ce{"Tables","Plates","Cutlery","Napkins"};
	vector<string> oe{"Computers","Cameras"};

	garageEquipment = ge;

	cateringEquipment = ce;

	otherEquipment = oe;
	
	driver = new Staff(name, to_string(staffID)+ name, "Driver");
	staffID++;

	CarFactory* fact = new CarFactory();

	raceCar = fact->buildCar();

	equipment = nullptr;

	testFacility = new Test(raceCar, numRaces);

	switch (budget) {
	case 1:
		staff = new Staff * [4];
		addCEng(1);
		staff[0] = new Aerodynamics(staff[0]);
		staff[0] = new Chassis(staff[0]);
		staff[0] = new Engine(staff[0]);
		staff[0] = new Electronics(staff[0]);
		addNEng(1);
		addStrat(1);
		break;
	case 2:
		staff = new Staff * [6];
		addCEng(2);
		staff[0] = new Aerodynamics(staff[0]);
		staff[0] = new Chassis(staff[0]);
		staff[1] = new Engine(staff[1]);
		staff[1] = new Electronics(staff[1]);
		addNEng(1);
		addStrat(2);
		break;
	case 3:
		staff = new Staff * [8];
		addCEng(3);
		staff[0] = new Aerodynamics(staff[0]);
		staff[0] = new Chassis(staff[0]);
		staff[1] = new Engine(staff[1]);
		staff[2] = new Electronics(staff[2]);
		addNEng(1);
		addStrat(2);
		addAssist(1);
		break;
	case 4:
		staff = new Staff * [13];
		addCEng(4);
		staff[0] = new Aerodynamics(staff[0]);
		staff[1] = new Chassis(staff[1]);
		staff[2] = new Engine(staff[2]);
		staff[3] = new Electronics(staff[3]);
		addNEng(2);
		addStrat(4);
		addAssist(2);
		break;
	}
	staff[0] = driver;

	raceCar->setMaxSpeed(150 + rand()%100);
	raceCar->setTeamName(name);

	wheels = nullptr;

	cout<< "Team " << name << " has been created!" <<endl;
	cout << "We have a budget of " << budget * 25 + 75 << " million Euros!" << endl;
	cout << "We currently have " << sizeof(staff) << " staff members." << endl;
	cout << "Our car has a top speed of " << raceCar->getMaxSpeed() << " kilometers per hour!" << endl;
	cout << "Our driver is " << getDriver() << endl;
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

void Team::prepRace(bool euro, int conditions) {
	cout << "Team "<< name << " is preparing for the race!" << endl;

	cout << "Our staff will now run tests and prepare for the race: " << endl;
	for (int x = 0; x < sizeof(staff); x++) {
		staff[x]->work();
	}

	if (euro) {
		cout << "We are preparing a truck to transport our equipment to an European race: " << endl;
		European* logistics = new European();
		equipment = logistics->CreateTransporter();
	}
	else {
		cout << "We are preparing a shipping container to transport our equipment to an non-European race: " << endl;
		NonEuropean* logistics = new NonEuropean();
		equipment = logistics->CreateTransporter();
	}

	cout << "Now it is time to pack up our equipment and load it into the transporter: " << endl;
	equipment->setGarageEquipment(garageEquipment);
	equipment->setCateringEquipment(cateringEquipment);
	equipment->setOtherEquipment(otherEquipment); 

	cout << "Lastly we have to ensure we have the right tires for the track conditions and our car: " << endl;
	wheels = leadStrat->getWheels(conditions);
}
int Team::race(int dist) {
	double results = dist / (raceCar->getMaxSpeed() / 3600) ;
	results += rand() % 10;
	currentTime = (int)results;
	return currentTime;
}
void Team::display() {
	int min, sec;
	min = currentTime / 60;
	sec = currentTime % 60;

	cout << "Team " << name << " - " << getDriver() << " - " << min << ":" << sec << endl;
}

void Team::setGarageEquipment(vector<string> ge) {
	garageEquipment = ge;
}
void Team::setCateringEquipment(vector<string> ce) {
	cateringEquipment = ce;
}
void Team::setOtherEquipment(vector<string> oe) {
	otherEquipment = oe;
}

void Team::addCEng(int n) {
	ConcreteEngineer* lead = new ConcreteEngineer(to_string(staffID), name, testFacility);
	staffID++;
	leadEng = lead;
	for (int x = 1; x < n; x++) {
		ConcreteEngineer* e = new ConcreteEngineer(to_string(staffID), name, testFacility);
		staff[staffID - 1] = e;
		staffID++;
	}
}
void Team::addNEng(int n) {
	for (int x = 0; x < n; x++) {
		ConcreteEngineer* e = new ConcreteEngineer(to_string(staffID), name, testFacility);
		staff[staffID - 1] = e;
		staffID++;
	}
}
void Team::addStrat(int n) {
	ConcreteStrategist* lead = new ConcreteStrategist(to_string(staffID), name, leadEng, manufacturer, 0);
	staffID++;
	leadStrat = lead;
	for (int x = 1; x < n; x++) {
		ConcreteStrategist* cs = new ConcreteStrategist(to_string(staffID), name, leadEng, manufacturer, x);
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