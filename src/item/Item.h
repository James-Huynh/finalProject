//
// Created by hello on 2021-03-13.
//

#ifndef FINALPROJECTWEEK5_ITEM_H
#define FINALPROJECTWEEK5_ITEM_H
#include <iostream>

using namespace std;

class Item {
protected:
    string name;
    string description;
    int buyPrice;

public:
    Item(string name, string description, int buyPrice);

    const string &getName() const;

    void setName(const string &name);

    const string &getDescription() const;

    void setDescription(const string &description);

    int getBuyPrice() const;

    void setBuyPrice(int buyPrice);

    virtual void printInfo()=0;
};


#endif //FINALPROJECTWEEK5_ITEM_H
