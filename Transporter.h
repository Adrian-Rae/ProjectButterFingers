#ifndef TRANSPORTER_H
#define TRANSPORTER_H
#include <string>
#include <iostream>
#include <vector>


class Transporter
{

	protected:
		
		vector<string> garageEquipment;
		vector<string> cateringEquipment;
		vector<string> otherEquipment;
	
	public:

		Transporter();
		//virtual ~Transporter(){};
	 	virtual void setgarageEquipment(string) = 0;
	 	virtual vector<string> getgarageEquipment() = 0;
	 	virtual void setcateringEquipment(string) = 0;
	 	virtual vector<string> getcateringEquipment() = 0;
	 	virtual void setotherEquipment(string) = 0;
	 	virtual vector<string> getotherEquipment() = 0;
	 	virtual string TypeofTransporter() = 0;
	


};


#endif