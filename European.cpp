#include "European.h"

using namespace std;

European::European()
{	
	//AbstractFactory(); is not needed
	cout << "European Factory has been created" << endl;
}

/*
TruckContainer* European::CreateTransporter()
{
	return new TruckContainer;
}
*/

Transporter* European::CreateTransporter()
{
	TruckContainer* truck = new TruckContainer();

	return truck;
} 
