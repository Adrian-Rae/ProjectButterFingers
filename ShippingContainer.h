#ifndef SHIPPINGCONTAINER_H
#define SHIPPINGCONTAINER_H
#include <string>
#include <iostream>
#include "Transporter.h"

class ShippingContainer : public Transporter {
	
	private:
		string status;

	public:
		
		ShippingContainer();  
	  	void setgarageEquipment(string);
	 	vector<string> getgarageEquipment();
	 	void setcateringEquipment(string);
	 	vector<string> getcateringEquipment();
	 	void setotherEquipment(string);
	 	vector<string> getotherEquipment();
	 	string TypeofTransporter();

};

#endif