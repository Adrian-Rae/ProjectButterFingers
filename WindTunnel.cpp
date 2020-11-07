#include "WindTunnel.h"

WindTunnel::WindTunnel(Car* car):SimulatorTest(car){}

int WindTunnel::test(){
	cout<<"\t    <> We are testing the vehicle in the wind tunnel"<<endl;

	int temp = 0;
	int speed = getVehicle()->getMaxSpeed();

	if (speed <= 200) {
		int num = rand() % 3;
		if (num == 2 || num == 3)
			temp = -1;
		else if(num == 1)
			temp = 1;
	}
	if (speed > 200) {
		int num = rand() % 3;
		if (num == 1 || num == 2)
			temp = 1;
		else if(num == 3)
			temp = -1;
	}

	return temp;
}
