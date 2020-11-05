#ifndef CONCRETESTRATEGIST_H
#define CONCRETESTRATEGIST_H

#include <iostream>

#include "Strategist.h"
#include "ConcreteEngineer.h"
#include "WheelManufacturer.h"

class ConcreteEngineer;

class ConcreteStrategist : public Strategist {
public:
	ConcreteStrategist(std::string n, std::string t, ConcreteEngineer* eng, WheelManufacturer* man, int index);
	~ConcreteStrategist();

	void update();
	void identify();
	void work();
	Wheel** getWheels(int conditions);
	WheelManufacturer* getManufacturer() { return wheelMaker; };

private:
	ConcreteEngineer* subject;
	WheelManufacturer* wheelMaker;
	int index;
};


#endif

