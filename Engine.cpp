#include "Engine.h"

void Engine::work(){	
	DepartmentDecorator::work();
	cout<<"Engine Department"<<endl;
}

void Engine::identify(){
	cout<<"Engine Department"<<endl;
}
