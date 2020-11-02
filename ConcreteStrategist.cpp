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
	//call the subject getStata();
	setResults(subject->getState());
}

void ConcreteStrategist::identify(){
	cout<<"Strategist"<<endl;
}

Wheel** ConcreteStrategist::getWheels(){
	Wheel** wheels = NULL;
	for(int i = 0; i<raceList.size(); i++){
		setResults(getResults() + raceList[i]);
	}
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