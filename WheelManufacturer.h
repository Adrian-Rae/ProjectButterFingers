#ifndef WHEELMANUFACTURER_H
#define WHEELMANUFACTURER_H
#include <iostream>
#include "Wheel.h"
#include "SoftWheel.h"
#include "HardWheel.h"
#include "MediumWheel.h"

class WheelManufacturer{
	public:
		WheelManufacturer();
		Wheel** getWheelSet(int conditionNum);
private:
	SoftWheel* soft;
	MediumWheel* medium;
	HardWheel* hard;
};
#endif