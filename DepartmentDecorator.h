#if !defined(DEPARTMENTDECORATOR_H)
#define DEPARTMENTDECORATOR_H


#include <string>
#include <iostream>

using namespace std;

class DepartmentDecorator
{
	private:
		//Engineer* component;


	public:
		DepartmentDecorator();
		~DepartmentDecorator();
   		virtual void work(){}
		virtual void addFunctionality(){}
		virtual void identify(){}

};

#endif // DepartmentDecorator_H
