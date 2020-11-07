#include "Team.h"

Team::Team(WheelManufacturer* wm, int bud, string n, int races){
	manufacturer = wm;
	budget = bud;
	name = n;
	currentTime = 0;
	numRaces = races;
	staffID = 0;

	vector<string> ge{"Tools","Spare Parts","Fuel"};
	vector<string> ce{"Tables","Plates","Cutlery","Napkins"};
	vector<string> oe{"Computers","Cameras"};

	garageEquipment = ge;

	cateringEquipment = ce;

	otherEquipment = oe;
	
	driver = new Staff(name, to_string(staffID+1)+ name, "Driver");
	staffID++;

	std::cout << "__________________________________________________________________________" << std::endl;
	std::cout << std::endl;
	std::cout << "\t [\tTeam " << name << " is being constructed\t]" << std::endl;
	std::cout << "__________________________________________________________________________" << std::endl;
	std::cout << std::endl;

	std::cout << "[*]\tWe have a budget of " << budget * 25 + 75 << " million Euros!" << std::endl;

	CarFactory* fact = new CarFactory();
	std::cout << "[*]\tWe will need to construct a car for the season " << std::endl;
	raceCar = fact->buildCar();

	raceCar->setMaxSpeed(150 + rand() % 100);
	raceCar->setTeamName(name);
	testFacility = new Test(raceCar, numRaces);

	std::cout << "[*]\tOur car has a top speed of " << raceCar->getMaxSpeed() << " kilometers per hour!" << std::endl;

	equipment = nullptr;

	sNum = 0;

	switch (budget) {
	case 1:
		sNum = 4;
		staff = new Staff * [4];
		addCEng(1);
		staff[1] = new Aerodynamics(staff[1]);
		staff[1] = new Chassis(staff[1]);
		staff[1] = new Engine(staff[1]);
		staff[1] = new Electronics(staff[1]);
		addNEng(1);
		addStrat(1);
		break;
	case 2:
		sNum = 6;
		staff = new Staff * [6];
		addCEng(2);
		staff[1] = new Aerodynamics(staff[1]);
		staff[1] = new Chassis(staff[1]);
		staff[2] = new Engine(staff[2]);
		staff[2] = new Electronics(staff[2]);
		addNEng(1);
		addStrat(2);
		break;
	case 3:
		sNum = 8;
		staff = new Staff * [8];
		addCEng(3);
		staff[1] = new Aerodynamics(staff[1]);
		staff[1] = new Chassis(staff[1]);
		staff[1] = new Engine(staff[2]);
		staff[3] = new Electronics(staff[3]);
		addNEng(1);
		addStrat(2);
		addAssist(1);
		break;
	case 4:
		sNum = 13;
		staff = new Staff * [13];
		addCEng(4);
		staff[1] = new Aerodynamics(staff[1]);
		staff[2] = new Chassis(staff[2]);
		staff[3] = new Engine(staff[3]);
		staff[4] = new Electronics(staff[4]);
		addNEng(2);
		addStrat(4);
		addAssist(2);
		break;
	}
	staff[0] = driver;

	std::cout << "[*]\tOur driver is " << getDriver() << std::endl;
	std::cout << "[*]\tWe currently have " << sNum << " staff members." << std::endl;
	wheels = nullptr;
}

Team::~Team(){
	for (int x = 0; x < sNum; x++){
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
	cout << "__________________________________________________________________________" << endl;
	cout << endl;

	cout << "\t[\tTeam " << name << " is preparing for the race\t]" << endl;
	cout << "__________________________________________________________________________" << endl;
	cout << endl;

	std::cout << "[*]\tOur staff will now run tests and prepare for the race: " << std::endl;
	cout << endl;
	for (int x = 0; x < sNum-1; x++) {
		staff[x]->work();
		cout << endl;
	}

	if (euro) {
		std::cout << "[*]\tWe are preparing a truck to transport our equipment to an European race: " << std::endl;
		cout << endl;
		European* logistics = new European();
		equipment = logistics->CreateTransporter();
	}
	else {
		cout << endl;
		std::cout << "[*]\tWe are preparing a shipping container to transport our equipment to an non-European race: " << std::endl;
		cout << endl;
		NonEuropean* logistics = new NonEuropean();
		equipment = logistics->CreateTransporter();
	}

	cout << endl;
	std::cout << "[*]\tNow it is time to pack up our equipment and load it into the transporter: " << std::endl;
	cout << endl;
	equipment->setGarageEquipment(garageEquipment);
	equipment->setCateringEquipment(cateringEquipment);
	equipment->setOtherEquipment(otherEquipment); 

	cout << endl;
	std::cout << "[*]\tLastly we have to ensure we have the right tires for the track conditions and our car: " << std::endl;
	cout << endl;
	wheels = leadStrat->getWheels(conditions);
}
int Team::race(int dist) {
	double results = (double)dist / ((double)raceCar->getMaxSpeed() / 3600.0) ;
	results += rand() % 10;
	currentTime = (int)results;
	return currentTime;
}
void Team::display() {
	int min, sec;
	min = (int)currentTime / 60;
	sec = currentTime % 60;
	if (sec < 10)
		std::cout << "[*]\tTeam " << name << " - " << getDriver() << " - " << min << ":0" << sec << std::endl;
	else
		std::cout << "[*]\tTeam " << name << " - " << getDriver() << " - " << min << ":" << sec << std::endl;
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
	ConcreteEngineer* lead = new ConcreteEngineer(to_string(staffID+1), name, testFacility);
	staff[staffID] = lead;
	staffID++;
	leadEng = lead;
	lead->end();
	for (int x = 1; x < n; x++) {
		ConcreteEngineer* e = new ConcreteEngineer(to_string(staffID+1), name, testFacility);
		e->end();
		staff[staffID] = e;
		staffID++;
	}
}
void Team::addNEng(int n) {
	for (int x = 0; x < n; x++) {
		ConcreteEngineer* e = new ConcreteEngineer(to_string(staffID+1), name, testFacility);
		staff[staffID] = e;
		staffID++;
	}
}
void Team::addStrat(int n) {
	ConcreteStrategist* lead = new ConcreteStrategist(to_string(staffID+1), name, leadEng, manufacturer, 0);
	staff[staffID] = lead;
	staffID++;
	leadStrat = lead;
	for (int x = 1; x < n; x++) {
		ConcreteStrategist* cs = new ConcreteStrategist(to_string(staffID+1), name, leadEng, manufacturer, x);
		staff[staffID] = cs;
		staffID++;
	}
}
void Team::addAssist(int n) {
	for (int x = 0; x < n; x++) {
		Staff* s = new Staff(name, to_string(staffID), "Assistant");
		staff[staffID] = s;
		staffID++;
	}
}