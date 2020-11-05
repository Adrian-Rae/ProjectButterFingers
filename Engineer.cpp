#include "Engineer.h"
Engineer::Engineer(std::string n, std::string t, Test* tester) : Staff(n, t, "Engineer") {
	test = tester;
	results = 0;
	successor = nullptr;
}
Engineer::~Engineer() {
	if (test != NULL) {
		delete test;
		test = NULL;
	}
	if (successor != NULL) {
		delete successor;
		successor = NULL;
	}
}

void Engineer::identify() {
	Staff::identify();
	std::cout << "We are reporting to " << observers.size() << " strategists" << std::endl;
}

void Engineer::work() {
	Staff::work();
	results = test->runTest();
	std::cout << " on assessing the vehicle's preformance" << std::endl;
	std::cout << "Our vehicle seem to be favouring ";
	if (results > 0)
		std::cout << "speed" << std::endl;
	else if (results < 0)
		std::cout << "handling" << std::endl;
	else
		std::cout << "a balanced approach" << std::endl;
}

void Engineer::handleRequest(int stat) {
	if (successor == NULL) {
		setStatus(stat);
		successor->notify();
	}
	else {
		successor->handleRequest(stat);
	}
}