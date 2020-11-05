#include "Electronics.h"

void Electronics::work(){
	DepartmentDecorator::work();
	cout<<"Electronics Department"<<endl;
}

void Electronics::identify(){
	cout<<"Electronics Department"<<endl;
}
