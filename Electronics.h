#if !defined(ELECTRONICS_H)
#define ELECTRONICS_H

#include "DepartmentDecorator.h"

#include <string>
#include <iostream>

using namespace std;

class Electronics: public DepartmentDecorator
{

	public:
		Electronics();
		~Electronics();
   		void work();
		void addFunctionality();
		void identify();

};

#endif // Electronics_H
