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
    cout << "\t";
    cout << setw(22) << left   <<  "Name" ;
    cout << setw(73) << left   << "Description" ;
    cout << setw(13) << left   <<  "price" ;
    cout << setw(8) << left   <<  "quantity"<<endl;

    for (it = saleList.begin(); it != saleList.end(); it++) {
        if(it->second>0){
        	cout << "\t";
            cout << setw(22) << left   <<  it->first->getName() ;
            cout << setw(73) << left   <<  it->first->getDescription() ;
            cout << setw(13) << left   <<  it->first->getBuyPrice() ;
            cout << setw(8) << left   <<  it->second <<endl;
        }
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

int Merchandise::getRandomNumByLevel(Item *item) {
    {
        int result=rand() % 100;
        switch (item->getLevel()) {
            case 1:
                return  result>25?result%8+1:result%9+1;
            case 2:
                return result>50?result%5+1:result%6+1;
            case 3:
                return  result>75?result%3+1:result%4+1;
            case 4:
                return  result>95?1:0;
            default:
                return 0;
        }
    }
}
