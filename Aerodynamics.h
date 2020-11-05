#if !defined(AERODYNAMICS_H)
#define AERODYNAMICS_H

#include "DepartmentDecorator.h"

#include <string>
#include <iostream>

using namespace std;

class Aerodynamics: public DepartmentDecorator{
public:
	Aerodynamics(Staff* next) : DepartmentDecorator(next) {};
	~Aerodynamics() {};
   	void work();
	void identify();

};

#endif