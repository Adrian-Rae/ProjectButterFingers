#include "MorningPractise.h"

using namespace std;

MorningPractise::MorningPractise(RaceState* s){
	setComponent(s);
}

void MorningPractise::handle() {
	RaceDecorator::handle();
	addFunctionlity();
}

void MorningPractise::addFunctionlity() {
	cout<<"Shall we practise"<<endl;
}