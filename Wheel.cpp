#include "Wheel.h"

////////////////////////////////////////////////////////////////////////////
Wheel::Wheel()
{//DONE
	type= "soft";
}

Wheel::~Wheel()
{//DONE
	
}
////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////

void Wheel::setType(string type){
	this->type = type;
}

string Wheel::getType(){
	return type;
}