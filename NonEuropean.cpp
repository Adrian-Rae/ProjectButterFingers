#include "NonEuropean.h"

using namespace std;

NonEuropean::NonEuropean()
{	
	//AbstractFactory(); not sure about this
	cout<<"Non-European Factory has been created"<<endl;
}

Transporter* NonEuropean::CreateTransporter()
{
	Transporter* container = new ShippingContainer();
	return container;
}
