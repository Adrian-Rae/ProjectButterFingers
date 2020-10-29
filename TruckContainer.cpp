#include "TruckContainer.h"

TruckContainer::TruckContainer()
{
	cout<<"Truck Container has been created!"<<endl;
	status.push_back("has been packed");
	
}

void TruckContainer::setgarageEquipment(string gEquip)
{
	garageEquipment.push_back(gEquip);
}

vector<string> TruckContainer::getgarageEquipment()
{
	return garageEquipment + status;
}

void TruckContainer::setcateringEquipment(string cEquip)
{
	cateringEquipment.push_back(cEquip);
}

vector<string> TruckContainer::getcateringEquipment()
{
	return cateringEquipment + status;
}

void TruckContainer::setotherEquipment(string oEquip)
{
	otherEquipment.push_back(oEquip);
}

vector<string> TruckContainer::getotherEquipment()
{
	return otherEquipment + status;
}

string TruckContainer::TypeofTransporter()
{
	string type;
	type = "Truck Container has been specifically created for European races"
	return type;
}
