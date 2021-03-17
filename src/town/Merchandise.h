//
// Created by hello on 2021-03-13.
//

#ifndef FINALPROJECTWEEK5_MERCHANDISE_H
#define FINALPROJECTWEEK5_MERCHANDISE_H

#include <map>
#include "Town.h"
#include "../item/Item.h"
#include <iostream>
#include <vector>


using namespace std;

class Merchandise : public Town {
private:
    map<Item*,int >saleList;
public:
    Merchandise(const string &name, const string &description,const vector<Item*>&itemTotalMap);



    const map<Item *, int> &getSaleList() const;



//    void addItem(Item* item, int quantity);

    void printInfo();

    static int getRandomNumByLevel(Item* item);

};


#endif //FINALPROJECTWEEK5_MERCHANDISE_H
