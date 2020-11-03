#include "Staff.h"

using namespace std;

Staff::Staff(string te, string n, string ty) {
	team = te;
	name = n;
	type = ty;
}

void Staff::identify() {
	cout << "I am staffmember " << name << " from team " << team << ", I work as a(n) " << type << endl;
}