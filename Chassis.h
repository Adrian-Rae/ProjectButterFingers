#if !defined(CHASSIS_H)
#define CHASSIS_H

#include "DepartmentDecorator.h"

#include <string>
#include <iostream>

using namespace std;

class Chassis: public DepartmentDecorator
{

	public:
		Chassis();
		~Chassis();
   		void work();
		void addFunctionality();
		void identify();

};

#endif // Chassis_H
