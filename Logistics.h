#ifndef LOGISTICS_H
#define LOGISTICS_H
#include <string>
#include <iostream>
#include "Abstractfactory.h"

class Logistics {
 
 private:

 		string raceType;
 		//AbstractFactory factory = null;

 public:

 		Logistics();
 		Logisitcs(string);
		Transporter* requestContainer();
		//AbstractFactory getFactory();

};

#endif


//general factory caller(client)