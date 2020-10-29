#include "ShippingContainer.h"

ShippingContainer::ShippingContainer()
{
	cout<<"Shipping Container has been created!"<<endl;
	status.push_back("has been packed");
	
}

void ShippingContainer::setgarageEquipment(string gEquip)
{
	garageEquipment.push_back(gEquip);
}

vector<string> ShippingContainer::getgarageEquipment()
{
	return garageEquipment + status;
}

void ShippingContainer::setcateringEquipment(string cEquip)
{
	cateringEquipment.push_back(cEquip);
}

vector<string> ShippingContainer::getcateringEquipment()
{
	return cateringEquipment + status;
}

void ShippingContainer::setotherEquipment(string oEquip)
{
	otherEquipment.push_back(oEquip);
}

vector<string> ShippingContainer::getotherEquipment()
{
	return otherEquipment + status;
}

string ShippingContainer::TypeofTransporter()
{
	string type;
	type = "Shipping Container has been specifically created for NonEuropean races"
	return type;
}
