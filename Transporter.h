#ifndef TRANSPORTER_H
#define TRANSPORTER_H
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Transporter
{

	protected:
		
		vector<string> garageEquipment;
		vector<string> cateringEquipment;
		vector<string> otherEquipment;
	
	public:

		Transporter();
		~Transporter(){};

	  	virtual void setGarageEquipment(vector<string>) = 0;
		virtual void addGarageEquipment(string)= 0;
	 	virtual vector<string> getGarageEquipment()= 0;

	 	virtual void setCateringEquipment(vector<string>)= 0;
		virtual void addCateringEquipment(string)= 0;
	 	virtual vector<string> getCateringEquipment()= 0;

	 	virtual void setOtherEquipment(vector<string>)= 0;
		virtual void addOtherEquipment(string)= 0;
	 	virtual vector<string> getOtherEquipment()= 0;
	


};


#endif