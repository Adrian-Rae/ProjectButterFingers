#ifndef CHASSIS_H
#define CHASSIS_H

#include "DepartmentDecorator.h"

#include <string>
#include <iostream>

class Chassis: public DepartmentDecorator{

	public:
		Chassis(Staff* next) : DepartmentDecorator(next) {};
		~Chassis() {};
   		void work();
		void identify();

};

#endif 
