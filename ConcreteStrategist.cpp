#include "ConcreteStrategist.h"

ConcreteStrategist::ConcreteStrategist(ConcreteEngineer* eng, WheelManufacturer* wheels, int index){
	this->subject = eng;
	this->wheelMaker = wheels;
	this->index = index;
	//what would team and type here be?
}

ConcreteStrategist::~ConcreteStrategist(){
	//check if engineer should be deleted here
	if(wheelMaker != NULL){
		delete wheelMaker;
		wheelMaker = NULL;
	}
}

void ConcreteStrategist::update(){
	setCurrentResults(subject->getState());
}

void ConcreteStrategist::work() {
	cout << "strategising" << endl;
	update();
}

Wheel** ConcreteStrategist::getWheels(int conditions){
	Wheel** wheels = NULL;

	setCurrentResults(getCurrentResults() + conditions);

	if (getCurrentResults() > 0) {
		wheels = wheelMaker->getWheelSet(1);
	}
	else if(getCurrentResults() < 0){
		wheels = wheelMaker->getWheelSet(-1);
	}
	else if(getCurrentResults() == 0){
		wheels = wheelMaker->getWheelSet(0);
	}
	
	return wheels;
}

WheelManufacturer* ConcreteStrategist::getWheelManufacturer(){
	return this->wheelMaker;
}