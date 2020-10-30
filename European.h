#ifndef EUROPEAN_H
#define EUROPEAN_H
#include <string>
#include <iostream>
#include "AbstractFactory.h"
#include "Transporter.h"
#include "TruckContainer.h"

class European : public AbstractFactory {
 
 //private:


 public:
	  
	  European();
	  //TruckContainer* CreateTransporter();
	  Transporter* CreateTransporter();  


};

#endif

//implements exactly what needs to be done for european races 