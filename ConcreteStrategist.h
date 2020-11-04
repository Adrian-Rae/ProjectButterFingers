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
		int index;

	public:
		ConcreteStrategist(ConcreteEngineer* eng, WheelManufacturer* wheels, int index);
		~ConcreteStrategist();
		void update();
		void work();
		Wheel** getWheels(int conditions);
		WheelManufacturer* getWheelManufacturer();
};
#endif