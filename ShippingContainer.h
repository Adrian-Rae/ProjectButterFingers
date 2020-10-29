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
	 	string getgarageEquipment();
	 	void setcateringEquipment(string);
	 	string getcateringEquipment();
	 	void setotherEquipment(string);
	 	string getotherEquipment();
	 	string TypeofTransporter();

};

#endif