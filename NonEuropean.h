#ifndef NONEUROPEAN_H
#define NONEUROPEAN_H
#include <string>
#include <iostream>
#include "AbstractFactory.h"

class NonEuropean : public AbstractFactory {
 
 //private:


 public:
	  
	  NonEuropean();
	  ShippingContainer* CreateTransporter();
	  //Transporter* CreateTransporter();

};

#endif

//implements exactly what needs to be done for noneuropean races