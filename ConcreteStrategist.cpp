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
	currentResults = subject->getState();
}

Wheel** ConcreteStrategist::getWheels(){
	Wheel** wheels = NULL;
	for(int i = 0; i<raceList.size(); i++){
		setCurrentResults( getCurrentResults()+ raceList[i]);
	}
	if(currenResults > 0){
		wheels = wheelMaker->getWheelSet(1);
	}
	else if(currenResults < 0){
		wheels = wheelMaker->getWheelSet(-1);
	}
	else if(currenResults == 0){
		wheels = wheelMaker->getWheelSet(0);
	}
	
	return wheels;
}

WheelManufacturer* ConcreteStrategist::getWheelManufacturer(){
	return this->wheelMaker;
}