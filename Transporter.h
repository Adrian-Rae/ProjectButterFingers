#ifndef TRANSPORTER_H
#define TRANSPORTER_H
#include <string>
#include <iostream>

class Transporter
{

	protected:
		
		string garageEquipment;
		string cateringEquipment;
		string otherEquipment;
	
	public:

		Transporter();
		//virtual ~Transporter(){};
	 	virtual void setgarageEquipment(string) = 0;
	 	virtual string getgarageEquipment() = 0;
	 	virtual void setcateringEquipment(string) = 0;
	 	virtual string getcateringEquipment() = 0;
	 	virtual void setotherEquipment(string) = 0;
	 	virtual string getotherEquipment() = 0;
	 	virtual string TypeofTransporter() = 0;
	


};


#endif