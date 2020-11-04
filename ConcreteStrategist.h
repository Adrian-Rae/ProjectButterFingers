#ifndef CONCRETESTRATEGIST_H
#define CONCRETESTRATEGIST_H
#include <iostream>
#include "Engineer.h"

class ConcreteStrategist: public Strategist{
	private:
		ConcreteEngineer* subject;
		WheelManufacturer* wheelMaker;
		int index;
	public:
		ConcreteStrategist(ConcreteEngineer* eng, WheelManufacturer* wheels, int index);
		~ConcreteStrategist();
		void update();
		Wheel** getWheels();
		WheelManufacturer* getWheelManufacturer();
};
#endif