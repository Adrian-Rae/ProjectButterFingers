#include "TruckContainer.h"

TruckContainer::TruckContainer()
{
	cout<<"Truck Container has been created!"<<endl;
	//status.push_back("has been packed");
	
}

void TruckContainer::addGarageEquipment(string gEquip)
{
	garageEquipment.push_back(gEquip);
}

void TruckContainer::setGarageEquipment(vector<string> gEquip)
{
	garageEquipment = gEquip;
}

vector<string> TruckContainer::getGarageEquipment()
{
	return garageEquipment;// + status;
}

void TruckContainer::addCateringEquipment(string cEquip)
{
	cateringEquipment.push_back(cEquip);
}

void TruckContainer::setCateringEquipment(vector<string> cEquip)
{
	cateringEquipment = cEquip;
}

vector<string> TruckContainer::getCateringEquipment()
{
	return cateringEquipment;// + status;
}

void TruckContainer::addOtherEquipment(string oEquip)
{
	otherEquipment.push_back(oEquip);
}

void TruckContainer::setOtherEquipment(vector<string> oEquip)
{
	otherEquipment = oEquip;
}
vector<string> TruckContainer::getOtherEquipment()
{
	return otherEquipment;// + status;
}

string TruckContainer::TypeofTransporter()
{
	string type;
	type = "Truck Container has been specifically created for European races";
	return type;
}
