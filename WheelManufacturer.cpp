#include "WheelManufacturer.h"

Wheel** WheelManufacturer::getWheelSet(int conditionNum){
	//make the wheels based on their results
	Wheel** wheels = new Wheel*[2];//always 2
	if(conditionNum > 0){
		//lets say hard...
		for(int i = 0; i<2; i++){
			wheels[i] = new HardWheel("hard");
		}
	}
	else if(conditionNum < 0){
		for(int i = 0; i<2; i++){
			wheels[i] = new SoftWheel("soft");
		}
	}
	else if(conditionNum == 0){
		for(int i = 0; i<2; i++){
			wheels[i] = new MediumWheel("medium");
		}
	}
	
	return wheels;
}