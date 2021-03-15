//
// Created by hello on 2021-03-15.
//

#ifndef FINALPROJECTWEEK5_BOX_H
#define FINALPROJECTWEEK5_BOX_H


#include "Town.h"
#include "../item/Item.h"
#include <vector>
#include <ctime>

enum BoxType { small, normal,large ,huge};


class Box: public Town {


private:
    BoxType boxType;
    vector<Item*> itemList;
public:
    string getBoxType() const;

    Box(const string &name, const string &description, const vector<Item *> &itemList);


    Item *openBox();

    int getRandomIndex(int size);

    vector<Item *> getItemByLevel(vector<Item *> itemList, int level);

    void printInfo() override;
};


#endif //FINALPROJECTWEEK5_BOX_H
