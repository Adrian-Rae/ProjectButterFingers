#include "Strategist.h"

Strategist::Strategist(std::string n, std::string t) : Staff(n, t, "Strategist") {
	currentResults = 0;
}
void Strategist::update() {

}
void Strategist::identify() {
	Staff::identify();
	std::cout << "My current strategy is ";
	if(currentResults > 0)
		std::cout << "to use hard tires" << std::endl;
	else if(currentResults < 0)
		std::cout << "to use soft tires" << std::endl;
	else
		std::cout << "to use medium tires" << std::endl;
}
void Strategist::work() {
	Staff::work();
	std::cout << " on crafting the perfect strategy" << std::endl;
}