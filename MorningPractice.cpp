#include "MorningPractice.h"

using namespace std;

MorningPractise::MorningPractise(RaceState* s){
	setComponent(s);
}

void MorningPractise::handle() {
	RaceDecorator::handle();
	addFunctionlity();
}

void MorningPractise::addFunctionlity() {
	cout<<"< Morning practise >"<<endl;
}