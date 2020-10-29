#include "Logistics.h"


Logistics::Logistics()
{
	cout<<"Team has requested a container to be prepared"<<endl;
	//this->raceType = "None";
	raceType = "None";

}

Logistics::Logisitcs(string race)
{
	cout<<"Team has requested a container to be prepared"<<endl;
	//this->raceType = race;
	raceType = race;
}

Transporter* Logistics::requestContainer()
{
	if(raceType == "European")
	{
		return European::createTransporter();
	}

	else if(raceType == "NonEuropean")
	{
		return NonEuropean::createTransporter();
	}

	else
	{
		cout<<"Race Type has not been specified"<<endl;
		return nullptr;
	}

}

/*AbstractFactory Logistics::getFactory(string raceType)
{
	if(raceType == "European")
	{
		return factory = new European();
	}

	else if(raceType == "NonEuropean")
	{
		return factory = new European();
	}

	else
	{
		cout<<"Race Type has not been specified"<<endl;
		return factory;
	}

*///matches the commented out code in other sections