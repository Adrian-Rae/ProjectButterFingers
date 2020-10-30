#include "Logistics.h"

using namespace std;

Logistics::Logistics()
{
	cout<<"Team has requested a container to be prepared"<<endl;
	raceType = "None";

}

Logistics::Logistics(string race)
{
	cout<<"Team has requested a container to be prepared"<<endl;
	raceType = race;
}

Transporter* Logistics::requestContainer(){ // this is how to call for the container in a child
	return createTransporter();
}

/* This is not how the implementation works, we are using inheritance to choose which type of container to make, it is the responsibility of team to make an object of type European
or of type nonEuropean in the first place, this logic belongs in that class. The golden rule of inheritance is that it is a one way street, don't reference children in the parent.

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

AbstractFactory Logistics::getFactory(string raceType)
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

*/
//matches the commented out code in other sections