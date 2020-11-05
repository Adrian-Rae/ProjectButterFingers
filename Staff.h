#ifndef STAFF_H
#define STAFF_H

#include <string>
#include <iostream>

class Staff{
public:
	Staff() {};
	Staff(std::string n, std::string ty, std::string te) : name(n), type(ty), team(te) {};

	virtual void identify() { std::cout << type << " " << name << " from team " << team << std::endl; };
	virtual void work()		{ std::cout << type << " " << name << " from team " << team << " is working" << std::endl; };

	std::string getName() { return name; };
	std::string getType() { return type; };
	std::string getTeam() { return team; };

	std::string setName(std::string n ) { name = n ; };
	std::string setType(std::string ty) { type = ty; };
	std::string setTeam(std::string te) { team = te; };

private:
	std::string name;
	std::string type;
	std::string team;


};

#endif

