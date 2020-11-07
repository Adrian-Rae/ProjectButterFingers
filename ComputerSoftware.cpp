#include "ComputerSoftware.h"

ComputerSoftware::ComputerSoftware(Car* car):SimulatorTest(car){}

int ComputerSoftware::test(){
	cout<<"\t    <> We are testing the vehicle via computer software"<<endl;

	int temp = 0;
	int speed = getVehicle()->getMaxSpeed();

	int num = rand() % 2;
	if (num == 2)
		temp = -1;
	else if (num == 1)
		temp = 1;
	
	return temp;
}

