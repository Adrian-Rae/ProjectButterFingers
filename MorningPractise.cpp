#include "MorningPractise.h"
MorningPractise::MorningPractise(RaceState* s)
{component=s;
	}

void MorningPractise::handle() {
	component->handle();
	this->addFunctionlity();
}

void MorningPractise::addFunctionlity() {
	cout<<"Shall we practise"<<endl;
}