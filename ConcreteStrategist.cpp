#include "ConcreteStrategist.h"

ConcreteStrategist::ConcreteStrategist(ConcreteEngineer* eng, WheelManufacturer* wheels){
	this->subject = eng;
	this->wheelMaker = wheels;
}

ConcreteStrategist::~ConcreteStrategist(){
	if(subject != NULL){
		delete subject;
		subject = NULL;
	}
	if(wheelMaker != NULL){
		delete wheelMaker;
		wheelMaker = NULL;
	}
}

void ConcreteStrategist::update(){
	setResults(subject->getState());
}

void ConcreteStrategist::identify(){
	cout<<"Strategist"<<endl;
}

void ConcreteStrategist::work() {
	cout << "strategising" << endl;
	update();
}

Wheel** ConcreteStrategist::getWheels(int conditions){
	Wheel** wheels = NULL;

	setResults(getResults() + conditions);

	if(getResults() > 0){
		wheels = wheelMaker->getWheelSet(1);
	}
	else if(getResults() < 0){
		wheels = wheelMaker->getWheelSet(-1);
	}
	else if(getResults() == 0){
		wheels = wheelMaker->getWheelSet(0);
	}
	
	return wheels;
}