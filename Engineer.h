#ifndef ENGINEER_H
#define ENGINEER_H

#include <string>
#include <iostream>
#include <vector>

#include "Staff.h"
#include "Test.h"
#include "Strategist.h"

class Strategist;

class Engineer : public Staff {
public:
	Engineer() : Staff() {};
	Engineer(std::string n, std::string t, Test* tester);
	~Engineer();

	virtual void notify() = 0;
	virtual int attach(Strategist* strat) = 0;
	virtual void detach(int index) = 0;
	void handleRequest(int stat);

	virtual void identify();
	virtual void work();
	
	int getStatus() { return results; };
	void setStatus(int stat) { results = stat; };

	void setSuccessor(Engineer* next) { successor = next; };
	bool hasSuccessor() { if (successor != NULL) return true; else return false; };
	vector<Strategist*> getObservers() { return observers; };

	Test* getTest() { return test; };


private:
	vector<Strategist*> observers;
	int results;
	Engineer* successor;
	Test* test;
};

#endif

