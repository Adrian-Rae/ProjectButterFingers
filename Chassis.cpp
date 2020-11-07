#include "Chassis.h"

void Chassis::work(){
	DepartmentDecorator::work();
	cout<<"\t  *** Chassis Department ***"<<endl;
}
void Chassis::identify(){
	DepartmentDecorator::identify();
	cout<<"\t  *** Chassis Department ***"<<endl;
}
