#ifndef DEPARTMENTDECORATOR_H
#define DEPARTMENTDECORATOR_H


#include <string>
#include <iostream>
#include "ConcreteEngineer.h"

class DepartmentDecorator : public ConcreteEngineer{
	private:
		Staff* component;
		
	public:
		DepartmentDecorator(Staff* next);
		~DepartmentDecorator() { delete component; };
		virtual void work();
		virtual void identify();
		
};

#endif