#include "Staff.h"

////////////////////////////////////////////////////////////////////////////
Staff::Staff(){
	//set the members in the derived classes class
}

Staff::Staff(string vteam, string vname, string vtype)
{
	team=vteam;
	name=vname;
	type=vtype;
}
////////////////////////////////////////////////////////////////////////////
string Staff::getName()
{
	return name;
}
void Staff::setName(string v)
{
	name=v;
}
string Staff::getType()
{
	return type;
}
void Staff::setType(string v)
{
	type=v;
}
string Staff::getTeam()
{
	return team;
}
void Staff::setTeam(string v)
{
	team=v;
}

/*void Staff::Identify(){
	cout<<"I am staffmember "<<name<<" from team "<<team<<". I work as "<<type<<endl;
}*/
////////////////////////////////////////////////////////////////////////////
