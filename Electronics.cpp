#include "Electronics.h"

void Electronics::work(){
	DepartmentDecorator::work();
	cout<<"\t  *** Electronics Department ***"<<endl;
}

void Electronics::identify(){
	DepartmentDecorator::identify();
	cout<<"\t  *** Electronics Department ***"<<endl;
}
