#include "Strategist.h"

Strategist::Strategist(){
	currentResults = 0;
	setName("Strategis");
	setTeam("Strategy Team");
	setType("Strategic analysis");
}

void Strategist::identify(){
	cout<<"I am staffmember "<<getName()<<", from team "<<getTeam()<<" and I work as "<<getType()<<endl;
}

void Strategist::setCurrentResults(int result){
	currentResults = result;
}

int Strategist::getCurrentResults(){
	return currentResults;
}