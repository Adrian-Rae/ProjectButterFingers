#ifndef CONCRETESTRATEGIST_H
#define CONCRETESTRATEGIST_H
#include <iostream>
#include "Engineer.h"
#include "Strategist.h"
#include "ConcreteEngineer.h"

class ConcreteStrategist: public Strategist{
	private:
		ConcreteEngineer* subject;
		WheelManufacturer* wheelMaker;
	public:
		ConcreteStrategist(ConcreteEngineer* eng, WheelManufacturer* wheels);
		~ConcreteStrategist();
		void update();
		void identify();
		Wheel** getWheels();
};
#endif