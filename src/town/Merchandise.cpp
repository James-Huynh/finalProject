//
// Created by hello on 2021-03-13.
//

#include "Merchandise.h"
#include <iomanip>

Merchandise::Merchandise(const string &name, const string &description) : Town(name, description) {}

const map<Item *, int> &Merchandise::getSaleList() const {
    return saleList;
}

void Merchandise::setSaleList(const map<Item *, int> &saleList) {
    Merchandise::saleList = saleList;
}

void Merchandise::printInfo() {
    map<Item *, int>::iterator it;
    cout << setw(25) << left   <<  "Name" ;
    cout << setw(50) << left   << "Description" ;
    cout << setw(15) << left   <<  "price" ;
    cout << setw(15) << left   <<  "quantity"<<endl;

    for (it = saleList.begin(); it != saleList.end(); it++) {
        cout << setw(25) << left   <<  it->first->getName() ;
        cout << setw(50) << left   <<  it->first->getDescription() ;
        cout << setw(15) << left   <<  it->first->getBuyPrice() ;
        cout << setw(15) << left   <<  it->second <<endl;
    }
}

void Merchandise::addItem(Item *item, int quantity) {
    std::map<Item *, int>::iterator it;
    it = saleList.find(item);
    if (it == saleList.end())
        saleList.emplace(item, quantity);
    else {
        it->second = quantity;
    }

}
