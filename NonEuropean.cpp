#include "NonEuropean.h"

using namespace std;

NonEuropean::NonEuropean()
{	
	cout<<"\t->  Non-European Factory has been created"<<endl;
}

Transporter* NonEuropean::CreateTransporter()
{
	Transporter* container = new ShippingContainer();
	return container;
}
