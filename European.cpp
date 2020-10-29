#include "European.h"


European::European()
{	
	AbstractFactory();//not sure about this
	cout<<"European Factory has been created"<<endl;
}

TruckContainer* European::CreateTransporter()
{
	return new TruckContainer;
}

/*Transporter* European::CreateTransporter()
{
	return new TruckContainer();
} 
*/ 