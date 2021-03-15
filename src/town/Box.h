//
// Created by hello on 2021-03-15.
//

#ifndef FINALPROJECTWEEK5_BOX_H
#define FINALPROJECTWEEK5_BOX_H



#include "Town.h"
#include "../item/Item.h"
#include <vector>
#include <cstdlib>
#include <ctime>


class Box: public Town {


private:


public:

    Box(const string &name, const string &description);

    Item *openBox(const vector<Item *>& itemList);

    int getRandomIndex(const vector<Item *>& itemList);

    void printInfo() override;
};


#endif //FINALPROJECTWEEK5_BOX_H
