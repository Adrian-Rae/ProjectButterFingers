#include <iostream>
#include "RaceManager.h"

using namespace std;

int main()
{
    cout << "The season is starting !";
    int num, teams;
    cout << "How many races will there be?";
    cin >> num ;
    cout << "How many teams will there be?";
    cin >> teams;
    RaceBuilder* builder = new RaceBuilder();
    builder->build(num, teams);
    Race* races = builder->getResult();
    races->request();
}

