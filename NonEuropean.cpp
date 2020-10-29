#include "NonEuropean.h"


NonEuropean::NonEuropean()
{	
	AbstractFactory();//not sure about this
	cout<<"Non-European Factory has been created"<<endl;
}

ShippingContainer* NonEuropean::CreateTransporter()
{
	return new ShippingContainer;
}

/*Transporter* NonEuropean::CreateTransporter()
{
	return new ShippingContainer();
} 
*/ 