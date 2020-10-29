#ifndef TRUCKCONTAINER_H
#define TRUCKCONTAINER_H
#include <string>
#include <iostream>
#include "Transporter.h"


class TruckContainer : public Transporter {
	
	private: 
		string status;

	public:
	  	
	  	TruckContainer();
	  	void setgarageEquipment(string);
	 	string getgarageEquipment();
	 	void setcateringEquipment(string);
	 	string getcateringEquipment();
	 	void setotherEquipment(string);
	 	string getotherEquipment();
	 	string TypeofTransporter();

};

#endif