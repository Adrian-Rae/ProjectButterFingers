#include "Test.h"

Test::Test(SimulatorTest* test){
	simulator = test;
}

void Test::runTest(){
	simulator->test();
	simulator->test();
}