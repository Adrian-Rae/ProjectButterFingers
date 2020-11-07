#include "ShippingContainer.h"

using namespace std;

ShippingContainer::ShippingContainer()
{
	cout<<"\t->  Shipping Container has been created!"<<endl;
	
}

void ShippingContainer::addGarageEquipment(string gEquip)
{
	garageEquipment.push_back(gEquip);
}

void ShippingContainer::setGarageEquipment(vector<string> gEquip)
{
	garageEquipment = gEquip;
}

vector<string> ShippingContainer::getGarageEquipment()
{
	return garageEquipment;
}

void ShippingContainer::addCateringEquipment(string cEquip)
{
	cateringEquipment.push_back(cEquip);
}

void ShippingContainer::setCateringEquipment(vector<string> cEquip)
{
	cateringEquipment = cEquip;
}

vector<string> ShippingContainer::getCateringEquipment()
{
	return cateringEquipment;
}

void ShippingContainer::addOtherEquipment(string oEquip)
{
	otherEquipment.push_back(oEquip);
}

void ShippingContainer::setOtherEquipment(vector<string> oEquip)
{
	otherEquipment = oEquip;
}

vector<string> ShippingContainer::getOtherEquipment()
{
	return otherEquipment;
}

string ShippingContainer::TypeofTransporter()
{
	string type;
	type = "Shipping Container has been specifically created for NonEuropean races";
	return type;
}
