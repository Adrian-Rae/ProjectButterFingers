#ifndef STAFF_H
#define STAFF_H

#include <string>
#include <iostream>

using namespace std;

class Staff{
public:
	Staff(){};
	Staff(string, string, string);
	string getName() {return name;};
	virtual void identify();
	virtual void work();
private:
	string name;
	string type;
	string team;
};
#endif

