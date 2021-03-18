//
// Created by hello on 2021-03-13.
//

#include "Merchandise.h"
#include <iomanip>
#include <vector>

// create merchandise with saleList
Merchandise::Merchandise(const string &name, const string &description,const vector<Item*>&itemTotalMap ) : Town(name, description) {

    for(Item* item: itemTotalMap){
        int quantity=getRandomNumByLevel(item);
        if(quantity>0){
            saleList.emplace(item,quantity);
        }
    }
}



const map<Item *, int> &Merchandise::getSaleList() const {
    return saleList;
}


void Merchandise::printInfo() {

    map<Item *, int>::iterator it;
    int i = 0;
    cout << "\t";
    cout << setw(7) << left << "Index";

    cout << setw(22) << left   <<  "Name" ;
    cout << setw(73) << left   << "Description" ;
    cout << setw(13) << left   <<  "price" ;
    cout << setw(8) << left   <<  "quantity"<<endl;


    for (it = saleList.begin(); it != saleList.end(); it++) {
        if(it->second>0){
        	i++;
        	cout << "\t";
        	cout << setw(7) << left << i;
            cout << setw(22) << left   <<  it->first->getName() ;
            cout << setw(73) << left   <<  it->first->getDescription() ;
            cout << setw(13) << left   <<  it->first->getBuyPrice() ;
            cout << setw(8) << left   <<  it->second <<endl;
        }
    }
}


// base on the level of item, the quantity of the item is randomly generated

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


// need setter to init saleList after new Merchandise
Merchandise::Merchandise(const string &name, const string &description) : Town(name, description) {}

void Merchandise::setSaleList(const map<Item *, int> &saleList) {
    Merchandise::saleList = saleList;
}


// default
Merchandise::Merchandise() {

}

Merchandise &Merchandise::operator=(const Merchandise &other) {
    if(!saleList.empty()){
        saleList.clear();
    }
    for(auto pair : other.saleList){
        saleList.emplace(pair.first,pair.second);
    }
    return *this;
}

