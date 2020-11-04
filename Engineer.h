#if !defined(ENGINEER_H)
#define ENGINEER_H


#include <string>
#include <iostream>
#include <vector>

#include "Staff.h"
#include "ConcreteStrategist.h"
#include "Test.h"

using namespace std;

class Engineer: public Staff{
	private:
		vector<ConcreteStrategist*> observers;
		int results;
		Engineer* successor;// the boss
		Test* testing;


	public:
		Engineer() {};
		Engineer(Test* tester);
		~Engineer();
   		virtual void notify() = 0;
		virtual int attach() = 0;	//index for the place it is
		virtual void detach(int index) = 0;
		virtual void work() = 0;
		int getState();
		void setState(int state);
		void handelRequest(int state);//check return type
		virtual void identify();
		void setSuccessor(Engineer *boss);
		vector<ConcreteStrategist*> getObservers() { return observers; };
};

#endif // Engineer_H
