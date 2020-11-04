#if !defined(ENGINE_H)
#define ENGINE_H

#include "DepartmentDecorator.h"

#include <string>
#include <iostream>

using namespace std;

class Engine: public DepartmentDecorator
{

	public:
		Engine();
		~Engine();
   		void work();
		void addFunctionality();
		void identify();

};

#endif // Engine_H
