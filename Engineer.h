#ifndef ENGINEER_H
#define ENGINEER_H
#include "Staff.h"

class Engineer: public Staff{
public:
    Engineer(string team, string name):Staff(team, name, "Engineer") {};
    int getState();
};
#endif