#include "WindTunnel.h"

WindTunnel::WindTunnel(Car* car):SimulatorTest(car){}

void WindTunnel::TestF1Car(){
	if(token > 0){
		token--;
		cout<<"Testing the F1 car in the wind Tunnel"<<endl;
	}
	else{
		cout<<"The tokens are all used up!"<<endl;
	}
}

int WindTunnel::getToken(){
	return token;
}