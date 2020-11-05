#include "Chassis.h"

void Chassis::work(){
	DepartmentDecorator::work();
	cout<<"Chassis Department"<<endl;
}
void Chassis::identify(){
	cout<<"Chassis Department"<<endl;
}
