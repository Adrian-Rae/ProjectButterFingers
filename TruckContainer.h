#ifndef TRUCKCONTAINER_H
#define TRUCKCONTAINER_H
#include <string>
#include <iostream>
#include "Transporter.h"


class TruckContainer : public Transporter {
	
	private: 
		vector<string> status;

	public:
	  	
	  	TruckContainer();
	  	void setgarageEquipment(string);
	 	vector<string> getgarageEquipment();
	 	void setcateringEquipment(string);
	 	vector<string> getcateringEquipment();
	 	void setotherEquipment(string);
	 	vector<string> getotherEquipment();
	 	string TypeofTransporter();

};

#endif
