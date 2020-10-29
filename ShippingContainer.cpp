#include "ShippingContainer.h"

ShippingContainer::ShippingContainer()
{
	cout<<"Shipping Container has been created!"<<endl;
	this->status = "has been packed";
	
}

void ShippingContainer::setgarageEquipment(string gEquip)
{
	garageEquipment = gEquip;
}

string ShippingContainer::getgarageEquipment()
{
	return garageEquipment + " " + status;
}

void ShippingContainer::setcateringEquipment(string cEquip)
{
	cateringEquipment = cEquip;
}

string ShippingContainer::getcateringEquipment()
{
	return cateringEquipment + " " + status;
}

void ShippingContainer::setotherEquipment(string oEquip)
{
	otherEquipment= oEquip;
}

string ShippingContainer::getotherEquipment()
{
	return otherEquipment + " " + status;
}

string ShippingContainer::TypeofTransporter()
{
	string type;
	type = "Shipping Container has been specifically created for NonEuropean races"
	return type;
}
