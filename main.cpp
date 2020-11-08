#include "RaceManager.h"
#include <iostream>
using namespace std;

int main(){
	RaceManager* F1 = new RaceManager();
	F1->mainRun();
	
	delete F1;
	return 0;
}