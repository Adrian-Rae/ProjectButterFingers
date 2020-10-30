#ifndef TRUCKCONTAINER_H
#define TRUCKCONTAINER_H
#include <string>
#include <iostream>
#include "Transporter.h"

using namespace std;

class TruckContainer : public Transporter {
	
	private: 
		//vector<string> status;

	public:
	  	
	  	TruckContainer();
	  	void addGarageEquipment(string);
		void setGarageEquipment(vector<string>);
	 	vector<string> getGarageEquipment();
	 	void addCateringEquipment(string);
		void setCateringEquipment(vector<string>);
	 	vector<string> getCateringEquipment();
	 	void addOtherEquipment(string);
		void setOtherEquipment(vector<string>);
	 	vector<string> getOtherEquipment();
	 	string TypeofTransporter();

};

#endif
