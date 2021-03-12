//
// Created by hello on 2021-03-13.
//

#ifndef FINALPROJECTWEEK5_STORE_H
#define FINALPROJECTWEEK5_STORE_H

#include <iostream>
#include <vector>
#include "Town.h"

using namespace std;

class Store : public Town{
protected:

    vector<Store*> storeList;
public:
    Store(const string &name, const string &description);

public:

    const vector<Store *> &getStoreList() const;

    void setStoreList(const vector<Store *> &storeList);

};


#endif //FINALPROJECTWEEK5_STORE_H
