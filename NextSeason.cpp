#include "NextSeason.h"

void NextSeason::work() {
	Staff::work();
	std::cout << " to plan for next season" << std::endl;
}
void NextSeason::identify() {
	ConcreteEngineer::work();
	std::cout << "I am working on the next season" << std::endl;
}