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
	  Transporter* CreateTransporter();  


};

#endif