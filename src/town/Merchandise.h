//
// Created by hello on 2021-03-13.
//

#ifndef FINALPROJECTWEEK5_MERCHANDISE_H
#define FINALPROJECTWEEK5_MERCHANDISE_H

#include <map>
#include "Town.h"
#include "../item/Item.h"
#include <iostream>

using namespace std;

class Merchandise : public Town {
private:

    map<Item*,int >saleList;
public:
    Merchandise(const string &name, const string &description);

    const map<Item *, int> &getSaleList() const;

    void setSaleList(const map<Item *, int> &saleList);

    void addItem(Item* item, int quantity);

    void printInfo();
};


#endif //FINALPROJECTWEEK5_MERCHANDISE_H
