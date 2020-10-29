#include "TruckContainer.h"

TruckContainer::TruckContainer()
{
	cout<<"Truck Container has been created!"<<endl;
	this->status = "has been packed";
	
}

void TruckContainer::setgarageEquipment(string gEquip)
{
	garageEquipment = gEquip;
}

string TruckContainer::getgarageEquipment()
{
	return garageEquipment + " " + status;
}

void TruckContainer::setcateringEquipment(string cEquip)
{
	cateringEquipment = cEquip;
}

string TruckContainer::getcateringEquipment()
{
	return cateringEquipment + " " + status;
}

void TruckContainer::setotherEquipment(string oEquip)
{
	otherEquipment= oEquip;
}

string TruckContainer::getotherEquipment()
{
	return otherEquipment + " " + status;
}

string TruckContainer::TypeofTransporter()
{
	string type;
	type = "Truck Container has been specifically created for European races"
	return type;
}
