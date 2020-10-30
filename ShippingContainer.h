#ifndef SHIPPINGCONTAINER_H
#define SHIPPINGCONTAINER_H
#include <string>
#include <iostream>
#include "Transporter.h"

class ShippingContainer : public Transporter {
	
	private:
		//vector<string> status; what is this

	public:
		
		ShippingContainer();  
	  	void setGarageEquipment(vector<string>);
		void addGarageEquipment(string);
	 	vector<string> getGarageEquipment();

	 	void setCateringEquipment(vector<string>);
		void addCateringEquipment(string);
	 	vector<string> getCateringEquipment();

	 	void setOtherEquipment(vector<string>);
		void addOtherEquipment(string);
	 	vector<string> getOtherEquipment();

	 	string TypeofTransporter();

};

#endif
