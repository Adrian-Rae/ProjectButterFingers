#ifndef LOGISTICS_H
#define LOGISTICS_H
#include <string>
#include <iostream>
#include "Abstractfactory.h"
#include "Transporter.h"

class Logistics {
 
 private:

 		string raceType;
 		//AbstractFactory factory = null;

 public:

 		Logistics();
 		Logistics(string);
		virtual Transporter* requestContainer();
		virtual Transporter* createTransporter() = 0;
		//AbstractFactory getFactory();

};

#endif


//general factory caller(client)