//
// Created by hello on 2021-03-13.
//

#ifndef FINALPROJECTWEEK5_TOWN_H
#define FINALPROJECTWEEK5_TOWN_H
#include <iostream>

using namespace std;

class Town {
protected:
    string name;
    string description;
public:
    Town(const string &name, const string &description);
    virtual void printInfo()=0;

};


#endif //FINALPROJECTWEEK5_TOWN_H
