#include "WheelManufacturer.h"

WheelManufacturer::WheelManufacturer() {
	soft = new SoftWheel("soft");
	medium = new MediumWheel("medium");
	hard = new HardWheel("hard");
}

Wheel** WheelManufacturer::getWheelSet(int conditionNum){
	//make the wheels based on their results
	Wheel** wheels = new Wheel*[2];//always 2
	if(conditionNum > 0){
		//lets say hard...
		for(int i = 0; i<2; i++){
			wheels[i] = hard->clone();
		}
	}
	else if(conditionNum < 0){
		for(int i = 0; i<2; i++){
			wheels[i] = soft->clone();
		}
	}
	else if(conditionNum == 0){
		for(int i = 0; i<2; i++){
			wheels[i] = medium->clone();
		}
	}
	
	return wheels;
}