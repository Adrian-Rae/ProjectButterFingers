#include "ConcreteStrategist.h"

ConcreteStrategist::ConcreteStrategist(std::string n, std::string t, ConcreteEngineer* eng, WheelManufacturer* man, int in) : Strategist(n, t){
	subject = eng;
	wheelMaker = man;
	index = in;
}
ConcreteStrategist::~ConcreteStrategist() {
	wheelMaker = nullptr;
	subject = nullptr;
}
void ConcreteStrategist::update() {
	setCurrentResults(subject->getStatus());
}
void ConcreteStrategist::identify() {
	Strategist::identify();
}
void ConcreteStrategist::work() {
	Strategist::work();
}
Wheel** ConcreteStrategist::getWheels(int conditions) {
	Wheel** wheels = NULL;

	setCurrentResults(getCurrentResults() + conditions);

	if (getCurrentResults() > 0) {
		wheels = wheelMaker->getWheelSet(1);
	}
	else if (getCurrentResults() < 0) {
		wheels = wheelMaker->getWheelSet(-1);
	}
	else if (getCurrentResults() == 0) {
		wheels = wheelMaker->getWheelSet(0);
	}

	return wheels;
}