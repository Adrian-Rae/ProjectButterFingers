#ifndef STRATEGIST_H
#define STRATEGIST_H

#include <iostream>
#include <string>

#include "Staff.h"

class Strategist : public Staff {
public:
	Strategist(std::string n, std::string t);
	virtual void update();
	virtual void identify();
	virtual void work();
	int getCurrentResults() { return currentResults; };
	void setCurrentResults(int res) { currentResults = res; };

private:
	int currentResults;

};

#endif

