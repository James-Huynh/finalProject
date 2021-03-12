//
// Created by hello on 2021-03-13.
//

#include "Store.h"



const vector<Store *> &Store::getStoreList() const {
    return storeList;
}

void Store::setStoreList(const vector<Store *> &storeList) {
    Store::storeList = storeList;
}

Store::Store(const string &name, const string &description) : Town(name, description) {}


