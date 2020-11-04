#include "Team.h"

int Team::staffID = 1;

Team::Team(WheelManufacturer* wm, int bud, string n){
	manufacturer = wm;
	budget = bud;
	name = n;
	currentTime = 0;

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
	SimulatorTest* sim = new WindTunnel(raceCar);
	testFacility = new Test(sim);

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
	ConcreteStrategist* lead = new ConcreteStrategist(leadEng, manufacturer);
	staffID++;
	leadStrat = lead;
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