#if !defined(STAFF_H)
#define STAFF_H


#include <string>
#include <iostream>

using namespace std;

class Staff
{
	private:
		string name;
		string type;
		string team;


	public:
		Staff();
		Staff(string vteam, string vname, string vtype);
		virtual void Identify();
		string getName();
		void setName(string v);
		string getType();
		void setType(string v);
		string getTeam();
		void setTeam(string v);
		virtual void work() { cout << name << " in team " << team << " is working as an" << type << endl; };

};

#endif // Staff_H
