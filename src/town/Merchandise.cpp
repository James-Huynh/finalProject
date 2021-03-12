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
    cout << "Name\t\t" <<"Description\t\t\t\t" <<"price\t"<< "quantity" <<endl;
    for (it = saleList.begin(); it != saleList.end(); it++) {
        cout << setw(12) << right << "14 months" << endl;
        cout << it->first->getName() <<"\t\t"
                <<it->first->getDescription()  <<"\t\t"
             << it->first->getBuyPrice()<<"\t"
                << it->second
             << std::endl;
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
