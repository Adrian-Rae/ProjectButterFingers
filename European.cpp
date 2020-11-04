#include "European.h"

using namespace std;

European::European()
{	
	cout << "European Factory has been created" << endl;
}

Transporter* European::CreateTransporter()
{
	TruckContainer* truck = new TruckContainer();

	return truck;
} 
