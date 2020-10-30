#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H
#include <string>
#include <iostream>

class AbstractFactory {
 
 //private:

 		//string type;

 public:

 		AbstractFactory();
 		~AbstractFactory(){};
		 virtual Transporter* CreateTransporter()= 0;

};

#endif


//general factory 