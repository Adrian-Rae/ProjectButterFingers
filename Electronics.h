#ifndef ELECTRONICS_H
#define ELECTRONICS_H

#include "DepartmentDecorator.h"

#include <string>
#include <iostream>

using namespace std;

class Electronics: public DepartmentDecorator
{

	public:
		Electronics(Staff* next) : DepartmentDecorator(next) {};
		~Electronics() {};
   		void work();
		void identify();

};

#endif 
