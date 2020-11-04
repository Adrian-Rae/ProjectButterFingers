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
    RaceCatelogue* races = builder->getResult();
    RaceIterator* iterator = races->createIterator();
    Race* current = iterator->first();
    for (int x = 0; x < num; x++) {
        current->request();
        iterator->next();
    }
}

