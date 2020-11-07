#include "Engine.h"

void Engine::work(){	
	DepartmentDecorator::work();
	cout<<"\t  *** Engine Department ***"<<endl;
}

void Engine::identify(){
	DepartmentDecorator::identify();
	cout<<"\t  *** Engine Department ***"<<endl;
}
