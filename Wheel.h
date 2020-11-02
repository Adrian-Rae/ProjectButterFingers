#ifndef WHEEL_H
#define WHEEL_H

#include <string>
#include <iostream>

using namespace std;

class Wheel
{
	private:
		string type;

	public:
		Wheel();
		~Wheel();
   		virtual Wheel* clone();
		void setType(string type);
		string getType();

};

#endif // Wheel_H