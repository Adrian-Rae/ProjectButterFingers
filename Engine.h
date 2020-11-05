#ifndef ENGINE_H
#define ENGINE_H

#include "DepartmentDecorator.h"

#include <string>
#include <iostream>

class Engine: public DepartmentDecorator
{

	public:
		Engine(Staff* next) : DepartmentDecorator(next) {};
		~Engine() {};
   		void work();
		void identify();

};

#endif 
