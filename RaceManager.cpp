#include <iostream>
#include "RaceManager.h"
#include <time.h>

using namespace std;

int main()
{
    cout << "Welcome to out COS 214 group project!" << endl;
    cout << "You will be propted to enter inputs to calibrate the simulation" << endl;
    cout << "Prompts will also appear to slow down the simulation for demo purposes" << endl;
    cout << "You can enter any value to continue" << endl;
    cout << "__________________________________________________________________________" << endl;
    cout << endl;
    srand(time(0));
    string dummy;
    cout << "The season is starting !"<< endl;
    cout << "__________________________________________________________________________" << endl;
    cout << endl;
    int num, teams;
    cout << "How many races will there be: \t";
    cin >> num ;
    cout << "How many teams will there be: \t";
    cin >> teams;
    cout << "__________________________________________________________________________" << endl;
    cout << endl;

    RaceBuilder* builder = new RaceBuilder();


    cout << "**\tFirst this year's season of F1 needs to be planned\t**" << endl;
    cout << "__________________________________________________________________________" << endl;
    cout << endl;

    builder->build(num, teams);
    RaceCatelogue* races = builder->getResult();
    RaceIterator* iterator = races->createIterator();
    Race* current = iterator->first();

    RaceManager* manager = new RaceManager();

    int* results;

    int** sorting = new int*[teams];
    for (int i = 0; i < teams; i++){
        sorting[i] = new int[2];
        sorting[i][0] = i;
        sorting[i][1] = 0;
    }

    int** standings = new int* [teams];
    for (int i = 0; i < teams; i++) {
        standings[i] = new int[2];
        standings[i][0] = i;
        standings[i][1] = 0;
    }

    int** display = new int* [teams];

    cout << "**\tIt's time to start the season's races!\t**" << endl;
    cin>>dummy;
    cout << "__________________________________________________________________________" << endl;
    cout << endl;

    for (int x = 0; x < num; x++) {

        cout << endl;
        cout << "**Should we continue to the race?**" << endl;
        cin >> dummy;
        cout << "__________________________________________________________________________" << endl;
        cout << endl;

        cout << "\t<<<\tRace " << x+1 << " is ready to start\t>>>" << endl;
        cout << "__________________________________________________________________________" << endl;
        cout << endl;
        results = iterator->currentItem()->startRace();
        sorting = manager->sortResults(results, sorting, teams);
        standings = manager->givePoints(sorting, standings, teams);
        display = manager->sortResults(standings, teams);

        cout << endl;
        manager->display(display, teams);
        iterator->next();
    }

    cout << "**\tA winner has been decided!\t**" << endl;
    cin>>dummy;
    cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << endl;

    cout << "**\tThe winner is Team " << display[0][0]+1 << " with " << display[0][1] << " points!\t**" << endl;
}

void RaceManager::display(int** standings, int num) {
    cout << "__________________________________________________________________________" << endl;
    cout << endl;
    cout << "~~~~~\tStandings\t~~~~~" << endl;
    for (int i = 0; i < num; i++){
        cout << "__________________________________________________________________________" << endl;
        cout << endl;
        cout<< i+1 << " - Team " << standings[i][0]+1 << " - " << standings[i][1] << " points" <<endl;
    }
    cout << "__________________________________________________________________________" << endl;
}
int** RaceManager::sortResults(int* list, int** sorter, int num) {
    int** sort = sorter;

    for (int i = 0; i < num; i++) {
        sort[i][0] = i;
        sort[i][1] = list[i];
    }
    int base;
    for (int x = 0; x < num-1; x++) {
        base = x;
        for (int y = x + 1; y < num; y++)
            if (sort[y][1] < sort[base][1])
                base = y;
        int* temp = sort[base];
        sort[base] = sort[x];
        sort[x] = temp;
    }
    return sort;
}

int** RaceManager::sortResults(int** sorter, int num) {
    int** sort = sorter;
    int base;
    for (int x = 0; x < num - 1; x++) {
        base = x;
        for (int y = x + 1; y < num; y++)
            if (sort[y][1] > sort[base][1])
                base = y;
        int* temp = sort[base];
        sort[base] = sort[x];
        sort[x] = temp;
    }
    return sort;
}
 
int** RaceManager::givePoints(int** list, int** points, int num) {
    int current, counter = 0;
    if (counter < num) {
        current = list[counter][0];
        points[current][1] += 25;
        counter++;
        if (counter < num) {
            current = list[counter][0];
            points[current][1] += 18;
            counter++;
            if (counter < num) {
                current = list[counter][0];
                points[current][1] += 15;
                counter++;
                if (counter < num) {
                    current = list[counter][0];
                    points[current][1] += 12;
                    counter++;
                    if (counter < num) {
                        current = list[counter][0];
                        points[current][1] += 10;
                        counter++;
                        if (counter < num) {
                            current = list[counter][0];
                            points[current][1] += 8;
                            counter++;
                            if (counter < num) {
                                current = list[counter][0];
                                points[current][1] += 6;
                                counter++;
                                if (counter < num) {
                                    current = list[counter][0];
                                    points[current][1] += 4;
                                    counter++;
                                    if (counter < num) {
                                        current = list[counter][0];
                                        points[current][1] += 2;
                                        counter++;
                                        if (counter < num) {
                                            current = list[counter][0];
                                            points[current][1] += 1;

                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    return points;
}
