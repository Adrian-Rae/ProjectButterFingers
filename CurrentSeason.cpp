#include "CurrentSeason.h"

void CurrentSeason::work() {
	ConcreteEngineer::work();
}
void CurrentSeason::identify() {
	ConcreteEngineer::work();
	std::cout << "I am working on the current season" << std::endl;
}