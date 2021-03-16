
#include "Inventory.h"
#include <cmath>

void Inventory::showPotions() {
    for (auto pair : myItemMap) {

        if (pair.first->getType() == "potion") {
            pair.first->printInfo();
            cout << " quantity:" << pair.second << std::endl;
        }
    }
}


void Inventory::showWeapons() {
    for (auto pair : myItemMap) {
        if (pair.first->getType() == "weapon") {
            pair.first->printInfo();
            cout << " quantity:" << pair.second << std::endl;
        }
    }
}

void Inventory::showMyMoney() {
    for (auto pair : myItemMap) {
        if (pair.first->getType() == "money") {
            pair.first->printInfo();
            cout << " quantity:" << pair.second << std::endl;
        }
    }
}

int Inventory::getTotalItemQuantity(){
    int total=0;
    for (auto pair : myItemMap) {
        total=total+pair.second;
    }
    return  total;
}


void Inventory::addItem(Item *item, int quantity) {  // add item(+)
    int realAddNum=0;
    map<Item *, int>::iterator it;
    for (int i = 0; i < quantity; ++i) {
        if (maxPlace <= getTotalItemQuantity()) {       // check have enough space for new item
            cout << "There is no space in the bag." << endl;
            return;
        }
        it = myItemMap.find(item);          // find item
        if(it==myItemMap.end()){   // not exist in map
            myItemMap.emplace(item, i);
        }else{ // exist in map
            it->second=it->second+1;
        }
        realAddNum++;
    }
    cout << "You have put item" << realAddNum << " " << item->getName() << "" << " in the bag." << endl;
}


Inventory::Inventory(const string &name) : name(name) {}

const string &Inventory::getName() const {
    return name;
}

void Inventory::setName(const string &name) {
    Inventory::name = name;
}


int Inventory::getMaxPlace() const {
    return maxPlace;
}

void Inventory::setMaxPlace(int maxPlace) {
    Inventory::maxPlace = maxPlace;
}


void Inventory::upgradeInventory() {   // player increase the inventory max space by 5 per time by consume xp
    maxPlace+=5;
}




